// filebrowser.ts
/// <reference path="dep/jquery-1.8.d.ts" />
/// <reference path="dep/underscore-typed.d.ts" />
/// <reference path="widget.ts" />

// FileBrowser receives directory data
// displays it in a tree format
// allows 
// 1) deleting files
// 2) moving files
// 3) loading files

class FileBrowser extends Widget {
	private tree : JQuery;

	constructor(){
		super("filebrowser");

		this.tree = $('<ul id="filebrowser-container"></ul>');
		this.body.append(this.tree);
		var ctxmenu = $('#tpl-filebrowser-filecontext');
		ctxmenu.menu({
			onClick: (item) => {
				this.contextMenuClick(item.name, this.tree.tree('getSelected'));
			}
		});
	}

	focus(container : JQuery) : void {
		container.panel({
			title: "Files",
			iconCls : 'ui-icon ui-icon-folder-collapsed',
			tools: [
			{
				iconCls:'ui-icon ui-icon-play',  
				handler: () => { this.test();}
			},{
				iconCls:'ui-icon ui-icon-wrench',  
				handler:function(){alert('properties')}
			}
			],
		});
	}

	onAdd(container : JQuery) : void {
		
	}
	// INCOMING
	// get a command from engine
	receive(calldata : CallData) : void {
		if(calldata.meta.command == "update"){
			this.update(calldata.data)
		}
	}

	changeKeys(data : GOData) : void {
		for (var i = 0; i < data.length; i++){
			if(data[i].name){
				data[i].attributes = _.extend({}, data[i]);
				data[i].id = data[i].name;
				data[i].text = data[i].name;
				data[i].iconCls = 'ui-icon ';
				if(data[i].extension == '.lua')
					data[i].iconCls += 'ui-icon-script';
				else if(data[i].extension == '.sfobject')
					data[i].iconCls += 'ui-icon-person';
				else if(data[i].extension == '.sfscene')
					data[i].iconCls += 'ui-icon-star';
				else if(_.contains(['.jpg', '.png', '.tga', '.jpeg', '.dds', '.bmp'], data[i].extension))
					data[i].iconCls += 'ui-icon-image';
				else 
					data[i].iconCls += 'ui-icon-document';
				if(data[i].type == "directory")
					data[i].state = "closed";
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
			//dnd: true,
			data: data,
			onSelect: (node) => {console.log('select')},
			onBeforeExpand: (node) => {this.requestSubDirectory(node)},
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
	
	// OUTGOING

	requestSubDirectory(node: any) : void {
		var calldata = {meta : {callee: "filebrowser", command: "request-subdir"}, data: node.attributes.path};
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
		console.log('test');
		var data = [{"size":"66564","extension":".f32","type":"file","path":"media\/PageX0Y0.f32","name":"PageX0Y0.f32"},{"type":"directory","path":"media\/common","name":"common"},{"type":"directory","path":"media\/fonts","name":"fonts"},{"type":"directory","path":"media\/materials","name":"materials"},{"type":"directory","path":"media\/models","name":"models"},{"type":"directory","path":"media\/objects","name":"objects"},{"type":"directory","path":"media\/packs","name":"packs"},{"type":"directory","path":"media\/particle","name":"particle"},{"type":"directory","path":"media\/save","name":"save"},{"size":"2419","extension":".cfg","type":"file","path":"media\/terrain.cfg","name":"terrain.cfg"},{"size":"103088","extension":".png","type":"file","path":"media\/terrain.png","name":"terrain.png"},{"size":"9620660","extension":".dat","type":"file","path":"media\/terrain_00000000.dat","name":"terrain_00000000.dat"},{"type":"directory","path":"media\/test","name":"test"},{"size":"12333224","extension":".dat","type":"file","path":"media\/testTerrain_00000000.dat","name":"testTerrain_00000000.dat"},{"size":"12333224","extension":".dat","type":"file","path":"media\/testTerrain_00000001.dat","name":"testTerrain_00000001.dat"},{"size":"204","extension":".groupdef","type":"file","path":"media\/tg0.groupdef","name":"tg0.groupdef"},{"type":"directory","path":"media\/thumbnails","name":"thumbnails"},{"type":"directory","path":"media\/tmp","name":"tmp"},{"type":"directory","path":"media\/ui","name":"ui"},{"type":"directory","path":"media\/worlds","name":"worlds"}];
		this.update(data);
	}
}