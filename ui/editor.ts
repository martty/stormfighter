// editor.ts
/// <reference path="dep/jquery-1.8.d.ts" />
/// <reference path="widget.ts" />
/// <reference path="container.ts" />
/// <reference path="inspector.ts" />
/// <reference path="filebrowser.ts" />

class Editor {
	public widgets : Widget[];
	private containers : Container[];
	public typeannotations : Object[];

	viewportfocus : KnockoutObservableBool;

	queue : CallData[];

	constructor(){
		this.queue = new Array();

		this.containers = new Array();
		this.containers['west'] = new Container('west');
		this.containers['east'] = new Container('east');
		this.containers['south'] = new Container('south');
		this.widgets = new Array();
		this.widgets['inspector'] = new Inspector();
		this.widgets['hierarchy'] = new Hierarchy();
		this.widgets['filebrowser'] = new FileBrowser();
		this.containers['east'].addWidget(this.widgets['inspector']);

		$('#hiefiletabs').tabs({
			onSelect: (title, index) =>{this.hiefileSwitch(title, index)}
		})

		$('#hierarchy').append(this.widgets.hierarchy.content());
		this.widgets.hierarchy.onAdd($('#hierarchy'));

		$('#filebrowser').append(this.widgets.filebrowser.content());
		this.widgets.filebrowser.onAdd($('#filebrowser'));

		this.viewportfocus = ko.observable(true);
		// grab events for viewport
		ko.applyBindings(this, $('#viewport')[0]);
		// grab events for north buttonbar
		ko.applyBindings(this, $('#north')[0]);
		//this.containers['right'].addWidget(new FileBrowser());
		//this.containers['left'].addWidget(new Inspector());
		//this.containers['bottom'].addWidget(new Inspector());
	}

	onContainerResize(){
		this.containers['left'].onResize();
		this.containers['right'].onResize();
		this.containers['bottom'].onResize();
	}

	focusViewport() : void {
		$('#viewport').addClass('focused');
		$("*:focus").blur();
		var calldata = {meta: {callee: 'editor', command: 'focus'}, data: 'viewport'};
		this.send(calldata);
	}

	focusEditor() : void {
		$('#viewport').removeClass('focused');
		var calldata = {meta: {callee: 'editor', command: 'focus'}, data: 'editor'};
		this.send(calldata);
	}

	inspector() : Inspector {
		return this.widgets['inspector'];
	}

	hierarchy() : Inspector {
		return this.widgets['hierarchy'];
	}

	send(data : CallData) : void {
		this.queue.push(data);
	}

	poll() : string{
		var str = JSON.stringify(this.queue);
		this.queue = [];
		return str;
	}

	receive(calldata : Object[]) : void{
		var callee = calldata.meta.callee;
		if(this.widgets[callee])
			this.widgets[callee].receive(calldata);
		else
			console.log('Unknown widget called');
	}

	// buttonbar actions
	saveSceneDialog() : void {
		var dialog = $('#tpl-editor-saveasdialog');
		dialog.dialog({
			title: 'Save scene as..',
			closed: false,
			buttons: [{  
			text:'Save',  
			iconCls:'ui-cc-s-checkmark',
			handler:() => { 
				var filename = dialog.find('input').val();
				this.send({meta: {callee: 'editor', command: 'save-scene-as'}, data: filename});
				setTimeout(()=>{$('#tpl-editor-saveasdialog').dialog('close')}, 0);
			}  
			},{  
			text:'Cancel',
			iconCls:'ui-cc-s-cancel',
			handler: () => {
				$('#tpl-editor-saveasdialog').dialog('close');
			}
			}]
		});
	}

	loadSceneDialog() : void {

	}

	resetVM() : void {

	}

	hiefileSwitch(title, index) : void {
		if(title == "Hierarchy"){
			if(this.widgets.hierarchy){
				this.widgets.hierarchy.focus($('#west'));
			}
		} else if (title == "Files") {
			if(this.widgets.filebrowser){
				this.widgets.filebrowser.focus($('#west'));
			}
		}
	}
}

$(window).load(function() {
	window.editor = new Editor();
	$.parser.parse();
});