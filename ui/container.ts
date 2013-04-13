// container.ts
/// <reference path="dep/jquery-1.8.d.ts" />
/// <reference path="widget.ts" />

// Contains Widgets

class Container {
	private container : JQuery;
	private vertical : bool;
	private mypanel : JQuery;
	constructor(name:string){
		this.container = $('#'+name);
		this.mypanel = $('body').layout('panel', name);
		this.mypanel.panel({
			onResize : (e) => {
				if(name == "west"){
					var hief = $('#hiefiletabs');
					if(hief){
						var tab = hief.tabs('getSelected');
						var index = hief.tabs('getTabIndex',tab);
						hief.tabs({fit: true});
						hief.tabs('select', index);
					}
				}
			}
		});
		/*this.container.droppable({
			onDrop:function(e,source){
				var id = $(this).attr('id');
				// resize height
				if(id == "south"){
					$(source).find('.widget').panel('resize', {height: $(this).height()});
					$(source).find('.widget').resizable({
						handles: 'e, w'
					});
				} else { // resize width
					$(source).find('.widget').panel('resize', {width: $(this).width()});
					$(source).find('.widget').resizable({
						handles: 's'
					});
				}
				$(source).appendTo(this);
				return false;
			}
		});*/
	}

	addWidget(widget : Widget){
		this.container.append(widget.content());
		/*widget.content().parent().draggable({
			handle: widget.content().parent().find('.panel-header'),
			revert:true,  
            deltaX:0,  
            deltaY:0,
            fit: true
		}).droppable({
			onDrop:function(e,source){
                    $(source).insertAfter(this);  
                    //editor.onContainerResize();
                    return false;
                }
		});
		widget.content().resizable({
			handles: 's',
			onResize: function(e){
				$(this).panel('resize', {width:$(this).width(), height:$(this).height()});
			}
		});
		if(this.name == "south"){
			this.container.find('.widget').panel('resize', {height: this.container.height()});
		} else { // resize width
			this.container.find('.widget').panel('resize', {width: this.container.width()});
		}*/
		widget.onAdd(this.mypanel);
		/*widget.content().panel({
			fit: true,
		});*/
	}

	onResize(){
		var h = this.container.height();
		var w = this.container.width();
		if(this.vertical){
			this.container.find('.widget').panel('resize', {width: w});
			this.container.height('100%');
		} else {
			this.container.find('.widget').panel('resize', {height: h});
			this.container.width('100%');
		}
	}
}
