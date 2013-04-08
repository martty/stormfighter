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
		this.containers['east'].addWidget(this.widgets['inspector']);
		//this.containers['right'].addWidget(new FileBrowser());
		//this.containers['left'].addWidget(new Inspector());
		//this.containers['bottom'].addWidget(new Inspector());
	}

	onContainerResize(){
		this.containers['left'].onResize();
		this.containers['right'].onResize();
		this.containers['bottom'].onResize();
	}

	inspector() : Inspector {
		return this.widgets['inspector'];
	}

	send(data : CallData) : void {
		this.queue.push(data);
		console.log(JSON.stringify(data));
	}

	poll() : string{
		var str = JSON.stringify(this.queue);
		this.queue = [];
		console.log('pulling:'+str);
		return str;
	}

	receive(calldata : Object[]) : void{
		var callee = calldata.meta.callee;
		if(this.widgets[callee])
			this.widgets[callee].receive(calldata);
		else
			console.log('Unknown widget called');
	}
}

$(window).load(function() {
	$.parser.parse();

	window.editor = new Editor();
});