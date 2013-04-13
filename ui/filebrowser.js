var __extends = this.__extends || function (d, b) {
    function __() { this.constructor = d; }
    __.prototype = b.prototype;
    d.prototype = new __();
};
var FileBrowser = (function (_super) {
    __extends(FileBrowser, _super);
    function FileBrowser() {
        var _this = this;
        _super.call(this, "filebrowser");
        this.tree = $('<ul id="filebrowser-container"></ul>');
        this.body.append(this.tree);
        var ctxmenu = $('#tpl-filebrowser-filecontext');
        ctxmenu.menu({
            onClick: function (item) {
                _this.contextMenuClick(item.name, _this.tree.tree('getSelected'));
            }
        });
    }
    FileBrowser.prototype.focus = function (container) {
        var _this = this;
        container.panel({
            title: "Files",
            iconCls: 'ui-icon ui-icon-folder-collapsed',
            tools: [
                {
                    iconCls: 'ui-icon ui-icon-play',
                    handler: function () {
                        _this.test();
                    }
                }, 
                {
                    iconCls: 'ui-icon ui-icon-wrench',
                    handler: function () {
                        alert('properties');
                    }
                }
            ]
        });
    };
    FileBrowser.prototype.onAdd = function (container) {
    };
    FileBrowser.prototype.receive = function (calldata) {
        if(calldata.meta.command == "update") {
            this.update(calldata.data);
        }
    };
    FileBrowser.prototype.changeKeys = function (data) {
        for(var i = 0; i < data.length; i++) {
            if(data[i].name) {
                data[i].attributes = _.extend({
                }, data[i]);
                data[i].id = data[i].name;
                data[i].text = data[i].name;
                data[i].iconCls = 'ui-icon ';
                if(data[i].extension == '.lua') {
                    data[i].iconCls += 'ui-icon-script';
                } else {
                    if(data[i].extension == '.sfobject') {
                        data[i].iconCls += 'ui-icon-person';
                    } else {
                        if(data[i].extension == '.sfscene') {
                            data[i].iconCls += 'ui-icon-star';
                        } else {
                            if(_.contains([
                                '.jpg', 
                                '.png', 
                                '.tga', 
                                '.jpeg', 
                                '.dds', 
                                '.bmp'
                            ], data[i].extension)) {
                                data[i].iconCls += 'ui-icon-image';
                            } else {
                                data[i].iconCls += 'ui-icon-document';
                            }
                        }
                    }
                }
                if(data[i].type == "directory") {
                    data[i].state = "closed";
                }
            }
            if(data[i].children) {
                this.changeKeys(data[i].children);
            }
        }
    };
    FileBrowser.prototype.update = function (data) {
        var _this = this;
        this.changeKeys(data);
        this.tree.tree({
            lines: true,
            data: data,
            onSelect: function (node) {
                console.log('select');
            },
            onBeforeExpand: function (node) {
                _this.requestSubDirectory(node);
            },
            onDrop: function (target, source, point) {
                _this.sendDrop(target, source, point);
            },
            onContextMenu: function (e, node) {
                e.preventDefault();
                _this.tree.tree('select', node.target);
                _this.showContextMenu(node, e.pageX, e.pageY);
            }
        });
        this.autoSize();
    };
    FileBrowser.prototype.requestSubDirectory = function (node) {
        var calldata = {
            meta: {
                callee: "filebrowser",
                command: "request-subdir"
            },
            data: node.attributes.path
        };
        editor.send(calldata);
    };
    FileBrowser.prototype.sendDrop = function (target, source, point) {
        var action = "";
        if(point == "bottom") {
            action = "addSiblingAfter";
        } else {
            if(point == "append") {
                action = "addChild";
            } else {
                if(point == "top") {
                    action = "addSiblingBefore";
                }
            }
        }
        var calldata = {
            meta: {
                callee: 'hierarchy',
                command: 'reparent'
            }
        };
        var data = {
            source: {
                name: source.text
            },
            target: {
                name: $(target).find('.tree-title').text()
            },
            method: action
        };
        calldata.data = data;
        editor.send(calldata);
    };
    FileBrowser.prototype.showSetGONameDialog = function (parentgoname) {
        var _this = this;
        var dialog = $('#tpl-hierarchy-addgodialog');
        dialog.dialog({
            title: 'Set name for new GameObject',
            closed: false,
            buttons: [
                {
                    text: 'Ok',
                    iconCls: 'ui-cc-s-checkmark',
                    handler: function () {
                        _this.newGO(dialog.find('input').val(), parentgoname);
                        setTimeout(function () {
                            $('#tpl-hierarchy-addgodialog').dialog('close');
                        }, 0);
                    }
                }, 
                {
                    text: 'Cancel',
                    iconCls: 'ui-cc-s-cancel',
                    handler: function () {
                        $('#tpl-hierarchy-addgodialog').dialog('close');
                    }
                }
            ]
        });
    };
    FileBrowser.prototype.showContextMenu = function (node, x, y) {
        var ctxmenu = $('#tpl-hierarchy-gocontext');
        ctxmenu.menu('show', {
            left: x,
            top: y
        });
    };
    FileBrowser.prototype.contextMenuClick = function (action, node) {
        var goname = node.id;
        if((action != 'new-child') && (action != 'new-sibling')) {
            var calldata = {
                meta: {
                    callee: 'hierarchy',
                    command: action
                },
                data: {
                    name: goname
                }
            };
            editor.send(calldata);
        } else {
            this.showSetGONameDialog(goname);
        }
    };
    FileBrowser.prototype.test = function () {
        console.log('test');
        var data = [
            {
                "size": "66564",
                "extension": ".f32",
                "type": "file",
                "path": "media\/PageX0Y0.f32",
                "name": "PageX0Y0.f32"
            }, 
            {
                "type": "directory",
                "path": "media\/common",
                "name": "common"
            }, 
            {
                "type": "directory",
                "path": "media\/fonts",
                "name": "fonts"
            }, 
            {
                "type": "directory",
                "path": "media\/materials",
                "name": "materials"
            }, 
            {
                "type": "directory",
                "path": "media\/models",
                "name": "models"
            }, 
            {
                "type": "directory",
                "path": "media\/objects",
                "name": "objects"
            }, 
            {
                "type": "directory",
                "path": "media\/packs",
                "name": "packs"
            }, 
            {
                "type": "directory",
                "path": "media\/particle",
                "name": "particle"
            }, 
            {
                "type": "directory",
                "path": "media\/save",
                "name": "save"
            }, 
            {
                "size": "2419",
                "extension": ".cfg",
                "type": "file",
                "path": "media\/terrain.cfg",
                "name": "terrain.cfg"
            }, 
            {
                "size": "103088",
                "extension": ".png",
                "type": "file",
                "path": "media\/terrain.png",
                "name": "terrain.png"
            }, 
            {
                "size": "9620660",
                "extension": ".dat",
                "type": "file",
                "path": "media\/terrain_00000000.dat",
                "name": "terrain_00000000.dat"
            }, 
            {
                "type": "directory",
                "path": "media\/test",
                "name": "test"
            }, 
            {
                "size": "12333224",
                "extension": ".dat",
                "type": "file",
                "path": "media\/testTerrain_00000000.dat",
                "name": "testTerrain_00000000.dat"
            }, 
            {
                "size": "12333224",
                "extension": ".dat",
                "type": "file",
                "path": "media\/testTerrain_00000001.dat",
                "name": "testTerrain_00000001.dat"
            }, 
            {
                "size": "204",
                "extension": ".groupdef",
                "type": "file",
                "path": "media\/tg0.groupdef",
                "name": "tg0.groupdef"
            }, 
            {
                "type": "directory",
                "path": "media\/thumbnails",
                "name": "thumbnails"
            }, 
            {
                "type": "directory",
                "path": "media\/tmp",
                "name": "tmp"
            }, 
            {
                "type": "directory",
                "path": "media\/ui",
                "name": "ui"
            }, 
            {
                "type": "directory",
                "path": "media\/worlds",
                "name": "worlds"
            }
        ];
        this.update(data);
    };
    return FileBrowser;
})(Widget);
