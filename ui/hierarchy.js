var __extends = this.__extends || function (d, b) {
    function __() { this.constructor = d; }
    __.prototype = b.prototype;
    d.prototype = new __();
};
var Hierarchy = (function (_super) {
    __extends(Hierarchy, _super);
    function Hierarchy() {
        _super.call(this, "hierarchy");
        this.tree = $('<ul id="hierarchy-container"></ul>');
        this.body.append(this.tree);
    }
    Hierarchy.prototype.onAdd = function (container) {
        container.panel({
            title: "Hierarchy",
            iconCls: 'ui-icon ui-icon-link',
            tools: [
                {
                    iconCls: 'ui-icon ui-icon-play',
                    handler: function () {
                        editor.hierarchy().test();
                    }
                }, 
                {
                    iconCls: 'ui-icon ui-icon-disk',
                    handler: function () {
                        alert('save');
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
    Hierarchy.prototype.receive = function (calldata) {
        if(calldata.meta.command == "update") {
            this.update(calldata.data);
        } else {
            if(calldata.meta.command == "select") {
                this.select(calldata.data);
            } else {
                if(calldata.meta.command == "deselect") {
                    this.deselect();
                }
            }
        }
    };
    Hierarchy.prototype.changeKeys = function (data) {
        for(var i = 0; i < data.length; i++) {
            if(data[i].name) {
                data[i].id = data[i].name;
                data[i].text = data[i].name;
                data[i].iconCls = 'ui-icon';
            }
            if(data[i].children) {
                this.changeKeys(data[i].children);
            }
        }
    };
    Hierarchy.prototype.update = function (data) {
        var _this = this;
        this.changeKeys(data);
        this.tree.tree({
            lines: true,
            dnd: true,
            data: data,
            onSelect: function (node) {
                _this.sendSelect(node);
            },
            onDrop: function (target, source, point) {
                _this.sendDrop(target, source, point);
            }
        });
        this.autoSize();
    };
    Hierarchy.prototype.select = function (data) {
        var node = this.tree.tree('find', data.name);
        this.tree.tree('select', node.target);
    };
    Hierarchy.prototype.deselect = function () {
        this.tree.tree('select', this.tree.tree('getRoot'));
    };
    Hierarchy.prototype.sendSelect = function (node) {
        var calldata = {
            meta: {
                callee: 'editor',
                command: 'select'
            },
            data: {
                name: node.text
            }
        };
        editor.send(calldata);
    };
    Hierarchy.prototype.sendDrop = function (target, source, point) {
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
    Hierarchy.prototype.test = function () {
        var data = [
            {
                "name": "lighty"
            }, 
            {
                "name": "citywall",
                "children": [
                    {
                        "name": "A",
                        "children": [
                            {
                                "name": "AA"
                            }, 
                            {
                                "name": "AB"
                            }, 
                            {
                                "name": "AC",
                                "children": [
                                    {
                                        "name": "ACA"
                                    }
                                ]
                            }
                        ]
                    }, 
                    {
                        "name": "B",
                        "children": [
                            {
                                "name": "BA"
                            }, 
                            {
                                "name": "BB"
                            }
                        ]
                    }, 
                    {
                        "name": "C"
                    }
                ]
            }
        ];
        this.update(data);
    };
    return Hierarchy;
})(Widget);
