var Container = (function () {
    function Container(name) {
        this.container = $('#' + name);
        this.mypanel = $('body').layout('panel', name);
        this.mypanel.panel({
            onResize: function (e) {
                if(name == "west") {
                    var hief = $('#hiefiletabs');
                    if(hief) {
                        var tab = hief.tabs('getSelected');
                        var index = hief.tabs('getTabIndex', tab);
                        hief.tabs({
                            fit: true
                        });
                        hief.tabs('select', index);
                    }
                }
            }
        });
    }
    Container.prototype.addWidget = function (widget) {
        this.container.append(widget.content());
        widget.onAdd(this.mypanel);
    };
    Container.prototype.onResize = function () {
        var h = this.container.height();
        var w = this.container.width();
        if(this.vertical) {
            this.container.find('.widget').panel('resize', {
                width: w
            });
            this.container.height('100%');
        } else {
            this.container.find('.widget').panel('resize', {
                height: h
            });
            this.container.width('100%');
        }
    };
    return Container;
})();
