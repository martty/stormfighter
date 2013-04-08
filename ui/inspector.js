var __extends = this.__extends || function (d, b) {
    function __() { this.constructor = d; }
    __.prototype = b.prototype;
    d.prototype = new __();
};
var Inspector = (function (_super) {
    __extends(Inspector, _super);
    function Inspector() {
        _super.call(this, "inspector");
        this.typeAnnotations = new TypeAnnotations();
        var cmpdiv = $('<div data-bind="template: { name: \'tpl-inspector-gameobject\', data: go}"></div>');
        this.body.append(cmpdiv);
        this.cmpaddmenu = $('<div data-bind="template: { name: \'tpl-inspector-cmpaddmenu\'}"></div>');
    }
    Inspector.prototype.onAdd = function (container) {
        container.panel({
            title: "Inspector",
            iconCls: 'ui-icon ui-icon-search',
            tools: [
                {
                    iconCls: 'ui-icon ui-icon-play',
                    handler: function () {
                        editor.inspector().test();
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
    Inspector.prototype.receive = function (calldata) {
        if(calldata.meta.command == "update") {
            this.update(calldata.data);
        }
    };
    Inspector.prototype.update = function (data) {
        var _this = this;
        if((!this.go) || (this.go.name() != data.name)) {
            this.go = new GO();
            this.go.name(data.name);
            ko.applyBindings(this, this.box[0]);
            console.log('new go');
        }
        for(var i = 0; i < data.components.length; i++) {
            var cmpd = data.components[i];
            if(this.go.hasComponent(cmpd.type)) {
                this.go.component(cmpd.type).update(cmpd);
            } else {
                var cmp = new Component(cmpd.type);
                this.go.addComponent(cmp);
                cmp.update(cmpd);
            }
        }
        this.box.find('.tip-left').tipTip({
            defaultPosition: 'left'
        });
        this.box.find('.tip-top').tipTip({
            defaultPosition: 'bottom'
        });
        this.box.find('.tiptip-menu').tipTip({
            activation: 'click',
            defaultPosition: 'left',
            edgeOffset: 7,
            keepAlive: true,
            delay: 0,
            content: function () {
                ko.applyBindings(_this, _this.cmpaddmenu[0]);
                return _this.cmpaddmenu;
            }
        });
    };
    Inspector.prototype.test = function () {
        var go = {
            name: "testGO",
            components: [
                {
                    type: "Transform",
                    properties: {
                        position: "525.661 113.972 93.9181",
                        orientation: "1 0 0 0",
                        scale: "1 1 1"
                    }
                }, 
                {
                    type: "Light",
                    properties: {
                        "position": "525.661 113.972 93.9181",
                        "orientation": "1 0 0 0",
                        "scale": "1 1 1"
                    }
                }
            ]
        };
        this.update(go);
        this.autoSize();
        var go2 = {
            name: "testGO",
            components: [
                {
                    type: "Transform",
                    properties: {
                        position: "50 10 93.9181",
                        orientation: "1 0 0 0",
                        scale: "1 1 1"
                    }
                }, 
                {
                    type: "Mesh",
                    properties: {
                        meshName: "lolmesh.mesh"
                    }
                }
            ]
        };
        this.update(go2);
        var tf2 = {
            "type": "Transform",
            properties: {
                "scale": "2 0 1"
            }
        };
    };
    return Inspector;
})(Widget);
