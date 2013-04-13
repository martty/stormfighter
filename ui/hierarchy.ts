// hierarchy.ts
/// <reference path="dep/jquery-1.8.d.ts" />
/// <reference path="dep/underscore-typed.d.ts" />
/// <reference path="widget.ts" />

// Hierarchy widget receives lightweight GO data (no Component data)
// displays it in a tree format
// allows 
// 1) reparenting of GO's through drag-n'-drop
// 2) clearing the scene
// 3) selection of GOs
// 4) saving the scene
// 5) loading a scene

class Hierarchy extends Widget {
	private tree : JQuery;
	
	//private cmpaddmenu : JQuery;

	constructor(){
		super("hierarchy");

		this.tree = $('<ul id="hierarchy-container"></ul>');
		this.body.append(this.tree);
		var ctxmenu = $('#tpl-hierarchy-gocontext');
		ctxmenu.menu({
			onClick: (item) => {
				this.contextMenuClick(item.name, this.tree.tree('getSelected'));
			}
		});
	}

	onAdd(container : JQuery) : void {
		container.panel({
			title: "Hierarchy",
			iconCls : 'ui-icon ui-icon-link',
			tools: [
			{
				iconCls:'ui-icon ui-icon-play',  
				handler: function () { editor.hierarchy().test();}
			},{  
				iconCls:'ui-icon ui-icon-plusthick',  
				handler:function(){editor.hierarchy().showSetGONameDialog();}
			},{
				iconCls:'ui-icon ui-icon-wrench',  
				handler:function(){alert('properties')}
			}
			],
		});
	}
	// INCOMING
	// get a command from engine
	receive(calldata : CallData) : void {
		if(calldata.meta.command == "update"){
			this.update(calldata.data)
		} else if (calldata.meta.command == "select"){
			this.select(calldata.data);
		} else if (calldata.meta.command == "deselect"){
			this.deselect();
		}
	}

	changeKeys(data : GOData) : void {
		for (var i = 0; i < data.length; i++){
			if(data[i].name){
				data[i].attributes = _.extend({}, data[i]);
				data[i].id = data[i].name;
				data[i].text = data[i].name;
				data[i].iconCls = 'ui-icon';
			}
			if(data[i].children){
				this.changeKeys(data[i].children)
			}
		}
	}
	// get hierarchy data
	// update internal representation and display

	update(data : GOData) : void {
		this.changeKeys(data);
		// check for name change
		this.tree.tree({
			lines: true,
			dnd: true,
			data: data,
			onSelect: (node) => {this.sendSelect(node);},
			onDrop: (target, source, point) => {this.sendDrop(target, source, point);},
			onContextMenu: (e, node) => {
				e.preventDefault();
				// select the node
				this.tree.tree('select', node.target);
				// display context menu
				this.showContextMenu(node, e.pageX, e.pageY);
			}
			});
		this.autoSize();
	}
	// single GO in data
	select(data : GOData) : void {
		var node = this.tree.tree('find', data.name);
		this.tree.tree('select', node.target);
	}
	// data is unused 
	deselect() : void {
		this.tree.tree('select', this.tree.tree('getRoot'))
	}
	// OUTGOING
	sendSelect(node : any) : void {
		var calldata = {meta : {callee: 'editor', command : 'select'}, data: {name: node.text}};
		editor.send(calldata);
	}

	sendDrop(target: any, source : any, point : any) : void {
		var action = "";
		if (point == "bottom") {
			action = "addSiblingAfter";
		} else if (point == "append"){
			action = "addChild";
		} else if (point == "top") {
			action = "addSiblingBefore";
		}
		var calldata = {meta : {callee: 'hierarchy', command : 'reparent'}};
		var data = {
			source: {
				name : source.text
			},
			target : {
				name : $(target).find('.tree-title').text()
			},
			method : action
		};
		calldata.data = data;
		editor.send(calldata);	
	}

	newGO(goname : string,parentname: string) : void {
		var calldata = {meta : {callee: 'hierarchy', command : 'new-go'}, data: {name: goname, parentname: parentname}};
		editor.send(calldata);
	}

	showSetGONameDialog(parentgoname : string) : void {
		var dialog = $('#tpl-hierarchy-addgodialog');
		dialog.dialog({
			title: 'Set name for new GameObject',
			closed: false,
			buttons: [{  
			text:'Ok',  
			iconCls:'ui-cc-s-checkmark',
			handler:() => { 
				this.newGO(dialog.find('input').val(), parentgoname);
				setTimeout(()=>{$('#tpl-hierarchy-addgodialog').dialog('close')}, 0);
			}  
			},{  
			text:'Cancel',
			iconCls:'ui-cc-s-cancel',
			handler: () => {
				$('#tpl-hierarchy-addgodialog').dialog('close');
			}
			}]
		});
	}

	showContextMenu(node, x : number, y : number) : void{
		var ctxmenu = $('#tpl-hierarchy-gocontext');
		ctxmenu.menu('show', {
			left: x,
			top: y
		});
	}

	contextMenuClick(action, node) : void {
		var goname = node.id;
		if((action != 'new-child') && (action != 'new-sibling')){
			var calldata = {meta: {callee: 'hierarchy', command: action}, data: {name: goname}};
			editor.send(calldata);
		} else {
			this.showSetGONameDialog(goname);
		}
	}

	test () : void {
		var data = [
		  {
		    "name":"lighty"
		  },
		  {
		    "name":"citywall",
		    "children":[
		      {
		        "name":"A",
		        "children":[
		          {
		            "name":"AA"
		          },
		          {
		            "name":"AB"
		          },
		          {
		            "name":"AC",
		            "children":[
		              {
		                "name":"ACA"
		              }
		            ]
		          }
		        ]
		      },
		      {
		        "name":"B",
		        "children":[
		          {
		            "name":"BA"
		          },
		          {
		            "name":"BB"
		          }
		        ]
		      },
		      {
		        "name":"C"
		      }
		    ]
		  }
		]
		this.update(data);
	}
}