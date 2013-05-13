var Editor = (function () {
    function Editor() {
        var _this = this;
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
            onSelect: function (title, index) {
                _this.hiefileSwitch(title, index);
            }
        });
        $('#hierarchy').append(this.widgets.hierarchy.content());
        this.widgets.hierarchy.onAdd($('#hierarchy'));
        $('#filebrowser').append(this.widgets.filebrowser.content());
        this.widgets.filebrowser.onAdd($('#filebrowser'));
        this.viewportfocus = ko.observable(true);
        ko.applyBindings(this, $('#viewport')[0]);
        ko.applyBindings(this, $('#north')[0]);
    }
    Editor.prototype.onContainerResize = function () {
        this.containers['left'].onResize();
        this.containers['right'].onResize();
        this.containers['bottom'].onResize();
    };
    Editor.prototype.focusViewport = function () {
        $('#viewport').addClass('focused');
        $("*:focus").blur();
        var calldata = {
            meta: {
                callee: 'editor',
                command: 'focus'
            },
            data: 'viewport'
        };
        this.send(calldata);
    };
    Editor.prototype.focusEditor = function () {
        $('#viewport').removeClass('focused');
        var calldata = {
            meta: {
                callee: 'editor',
                command: 'focus'
            },
            data: 'editor'
        };
        this.send(calldata);
    };
    Editor.prototype.inspector = function () {
        return this.widgets['inspector'];
    };
    Editor.prototype.hierarchy = function () {
        return this.widgets['hierarchy'];
    };
    Editor.prototype.filebrowser = function () {
        return this.widgets['filebrowser'];
    };
    Editor.prototype.send = function (data) {
        this.queue.push(data);
    };
    Editor.prototype.poll = function () {
        var str = JSON.stringify(this.queue);
        this.queue = [];
        return str;
    };
    Editor.prototype.receive = function (calldata) {
        var callee = calldata.meta.callee;
        if(this.widgets[callee]) {
            this.widgets[callee].receive(calldata);
        } else {
            console.log('Unknown widget called');
        }
    };
    Editor.prototype.saveSceneDialog = function () {
        var _this = this;
        var dialog = $('#tpl-editor-saveasdialog');
        dialog.dialog({
            title: 'Save scene as..',
            closed: false,
            buttons: [
                {
                    text: 'Save',
                    iconCls: 'ui-cc-s-checkmark',
                    handler: function () {
                        var filename = dialog.find('input').val();
                        _this.send({
                            meta: {
                                callee: 'editor',
                                command: 'save-scene-as'
                            },
                            data: filename
                        });
                        setTimeout(function () {
                            $('#tpl-editor-saveasdialog').dialog('close');
                        }, 0);
                    }
                }, 
                {
                    text: 'Cancel',
                    iconCls: 'ui-cc-s-cancel',
                    handler: function () {
                        $('#tpl-editor-saveasdialog').dialog('close');
                    }
                }
            ]
        });
    };
    Editor.prototype.loadSceneDialog = function () {
    };
    Editor.prototype.resetVM = function () {
        var calldata = {
            meta: {
                callee: 'editor',
                command: 'resetVM'
            },
            data: ''
        };
        this.send(calldata);
    };
    Editor.prototype.hiefileSwitch = function (title, index) {
        if(title == "Hierarchy") {
            if(this.widgets.hierarchy) {
                this.widgets.hierarchy.focus($('#west'));
            }
        } else {
            if(title == "Files") {
                if(this.widgets.filebrowser) {
                    this.widgets.filebrowser.focus($('#west'));
                }
            }
        }
    };
    return Editor;
})();
$(window).load(function () {
    window.editor = new Editor();
    $.parser.parse();
});
