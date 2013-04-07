// inspector.ts
/// <reference path="dep/jquery-1.8.d.ts" />
/// <reference path="dep/underscone-typed.d.ts" />
/// <reference path="types.ts" />
/// <reference path="widget.ts" />

// the main thing inspector does: receive GO data and display it
// it also allows editing the fields, according to type data it has
// type data is resolved the following ways : 
// 1) typeannotations.json - contains global definitions for core components
// 2) supplied type - user made components can supply their own types
// --------------
// The main cycle is as follows:
// 1) An instance of Inspector is created
// 2) The Inspector is given updates via the 'update' method containing:
//	2a) full JSON data of GO
//	2b) delta JSON data of GO
// 3) Inspector pushes calls to host, using single function and JSON data

class Inspector extends Widget {
	private list_of_cmps : JQuery;
	private go : GO;
	typeAnnotations : TypeAnnotations;

	private cmpaddmenu : JQuery;

	constructor(){
		super("inspector");
		this.typeAnnotations = new TypeAnnotations();

		var cmpdiv = $('<div data-bind="template: { name: \'tpl-inspector-gameobject\', data: go}"></div>');
		this.body.append(cmpdiv);

		this.cmpaddmenu = $('<div data-bind="template: { name: \'tpl-inspector-cmpaddmenu\'}"></div>');
	}

	onAdd(container : JQuery) : void {
		/*this.box.panel({
		title: "Inspector",
		  tools: [{  
		    iconCls:'icon-tip',  
		    handler: function () { editor.inspector().test()}
		  },{  
		    iconCls:'icon-save',  
		    handler:function(){alert('save')}
		    }],
		    fit: true,
		});*/
		container.panel({
			title: "Inspector",
			iconCls : 'ui-icon ui-icon-search',
			tools: [
			{
				iconCls:'ui-icon ui-icon-play',  
				handler: function () { editor.inspector().test()}
			},{  
				iconCls:'ui-icon ui-icon-disk',  
				handler:function(){alert('save')}
			},{
				iconCls:'ui-icon ui-icon-wrench',  
				handler:function(){alert('properties')}
			}
			],
		});
	}
	
	// gets delta or absolute GO JSON data
	// update internal representation and display

	update(data : GOData) : void {
		// check for name change
		if ((!this.go) || (this.go.name() != data.name)) {
			// on change create new GO object
			this.go = new GO();
			this.go.name(data.name);
			ko.applyBindings(this, this.box[0]);
			console.log('new go');
		}
		// loop through incoming component data
		for (var i = 0; i < data.components.length; i++){
			var cmpd = data.components[i];
			if (this.go.hasComponent(cmpd.type)){ // we have this component
				// update it
				this.go.component(cmpd.type).update(cmpd);
			} else {
				// create it
				var cmp = new Component(cmpd.type);
				this.go.addComponent(cmp);
				cmp.update(cmpd);
			}
		}
		//this.box.panel({fit: true});
		this.box.find('.tip-left').tipTip({defaultPosition: 'left', });
		this.box.find('.tip-top').tipTip({defaultPosition: 'bottom', });
		this.box.find('.tiptip-menu').tipTip({
			activation : 'click',
			defaultPosition: 'left',
			edgeOffset : 7,
			keepAlive : true,
			delay: 0, 
			content : () => {ko.applyBindings(this, this.cmpaddmenu[0]); return this.cmpaddmenu},
		});
	}

	test () : void {
		var go = {
			name : "testGO",
			components : [
				{
					type: "Transform",
					properties : {
						position: "525.661 113.972 93.9181",
						orientation: "1 0 0 0",
						scale: "1 1 1"
					}
				},
				{
					type: "Light",
					properties : {
						"position": "525.661 113.972 93.9181",
						"orientation": "1 0 0 0",
						"scale": "1 1 1"
					}
				}
			]
		}
		this.update(go);
		this.autoSize();
		var go2 = {
			name : "testGO",
			components : [
				{
					type: "Transform",
					properties : {
						position: "50 10 93.9181",
						orientation: "1 0 0 0",
						scale: "1 1 1"
					}
				},
				{
					type: "Mesh",
					properties : {
						meshName: "lolmesh.mesh",
					}
				}
			]
		}
		this.update(go2);
		var tf2 = {
			"type" : "Transform",
			properties : {
				"scale" : "2 0 1"
			}
		};
		//this.updateComponent(tf2);
	}
}