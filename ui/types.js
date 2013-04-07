ko.dirtyFlag = function (root, isInitiallyDirty) {
    var result = function () {
    }, _initialState = ko.observable(ko.toJSON(root)), _isInitiallyDirty = ko.observable(isInitiallyDirty), _isOff = ko.observable(false);
    result.isDirty = ko.computed(function () {
        return (!_isOff()) && (_isInitiallyDirty() || _initialState() !== ko.toJSON(root));
    });
    result.reset = function () {
        _initialState(ko.toJSON(root));
        _isInitiallyDirty(false);
    };
    result.off = function () {
        _isOff(true);
    };
    result.on = function () {
        this.reset();
        _isOff(false);
    };
    result.initialState = function () {
        return _initialState();
    };
    result.initiallyDirty = function () {
        return _isInitiallyDirty();
    };
    return result;
};
ko.extenders.numeric = function (target) {
    var result = ko.computed({
        read: target,
        write: function (newValue) {
            var current = target();
            if(isNaN(newValue) || newValue === '') {
                return;
            }
            var newValueAsNum = isNaN(newValue) ? 0 : parseFloat(newValue);
            var valueToWrite = newValueAsNum;
            if(valueToWrite !== current) {
                target(valueToWrite);
            } else {
                if(newValue !== current) {
                }
            }
        }
    });
    result(target());
    return result;
};
var Types;
(function (Types) {
    var SEnum = (function () {
        function SEnum(src, annot) {
            this.value = ko.observable(src ? src : 0).extend({
                numeric: ''
            });
            this.dirtyFlag = new ko.dirtyFlag(this);
            this.dict = annot.values;
            this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SReal');
        }
        SEnum.prototype.toString = function () {
            return this.value();
        };
        SEnum.prototype.fromString = function (src) {
            this.dirtyFlag.off();
            this.value(src);
            this.dirtyFlag.on();
        };
        SEnum.prototype.render = function () {
            return 'SReal';
        };
        return SEnum;
    })();
    Types.SEnum = SEnum;    
    var SReal = (function () {
        function SReal(src, annot) {
            this.value = ko.observable(src ? src : 0).extend({
                numeric: ''
            });
            this.dirtyFlag = new ko.dirtyFlag(this);
            this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SReal');
        }
        SReal.prototype.toString = function () {
            return this.value();
        };
        SReal.prototype.fromString = function (src) {
            this.dirtyFlag.off();
            this.value(src);
            this.dirtyFlag.on();
        };
        SReal.prototype.render = function () {
            return 'SReal';
        };
        return SReal;
    })();
    Types.SReal = SReal;    
    var SString = (function () {
        function SString(src, annot) {
            this.value = ko.observable(src ? src : "");
            this.dirtyFlag = new ko.dirtyFlag(this);
            this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SString');
        }
        SString.prototype.toString = function () {
            return this.value();
        };
        SString.prototype.fromString = function (src) {
            this.dirtyFlag.off();
            this.value(src);
            this.dirtyFlag.on();
        };
        SString.prototype.render = function () {
            return 'SString';
        };
        return SString;
    })();
    Types.SString = SString;    
    var SVector3 = (function () {
        function SVector3(src, annot) {
            var vals = src ? src.split(' ') : [
                0, 
                0, 
                0
            ];
            this.x = ko.observable(Number(vals[0])).extend({
                numeric: ''
            });
            this.y = ko.observable(Number(vals[1])).extend({
                numeric: ''
            });
            this.z = ko.observable(Number(vals[2])).extend({
                numeric: ''
            });
            this.dirtyFlag = new ko.dirtyFlag(this);
            this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SVector3');
        }
        SVector3.prototype.fromString = function (src) {
            var vals = src.split(' ');
            this.dirtyFlag.off();
            this.x(Number(vals[0]));
            this.y(Number(vals[1]));
            this.z(Number(vals[2]));
            this.dirtyFlag.on();
        };
        SVector3.prototype.toString = function () {
            return this.x() + " " + this.y() + " " + this.z();
        };
        SVector3.prototype.render = function () {
            return 'SVector3';
        };
        return SVector3;
    })();
    Types.SVector3 = SVector3;    
    var SQuaternion = (function () {
        function SQuaternion(src, annot) {
            var vals = src ? src.split(' ') : [
                0, 
                0, 
                0, 
                0
            ];
            this.x = ko.observable(Number(vals[0])).extend({
                numeric: ''
            });
            this.y = ko.observable(Number(vals[1])).extend({
                numeric: ''
            });
            this.z = ko.observable(Number(vals[2])).extend({
                numeric: ''
            });
            this.w = ko.observable(Number(vals[3])).extend({
                numeric: ''
            });
            this.dirtyFlag = new ko.dirtyFlag(this);
            this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SQuaternion');
        }
        SQuaternion.prototype.fromString = function (src) {
            var vals = src.split(' ');
            this.dirtyFlag.off();
            this.x(Number(vals[0]));
            this.y(Number(vals[1]));
            this.z(Number(vals[2]));
            this.z(Number(vals[3]));
            this.dirtyFlag.on();
        };
        SQuaternion.prototype.toString = function () {
            return this.x() + " " + this.y() + " " + this.z() + " " + this.w();
        };
        SQuaternion.prototype.render = function () {
            return 'SQuaternion';
        };
        return SQuaternion;
    })();
    Types.SQuaternion = SQuaternion;    
    var Unknown = (function () {
        function Unknown(src) {
            this.value = src ? src : "";
            this.dirtyFlag = new ko.dirtyFlag(this);
        }
        Unknown.prototype.toString = function () {
            return this.value;
        };
        Unknown.prototype.fromString = function (src) {
            this.value = src;
        };
        Unknown.prototype.render = function () {
            return 'Unknown';
        };
        return Unknown;
    })();
    Types.Unknown = Unknown;    
})(Types || (Types = {}));
var Component = (function () {
    function Component(type) {
        var _this = this;
        this.properties = ko.observableArray();
        this.properties_hash = ko.observable({
        });
        this.visible = ko.observable(true);
        this.dirtyItems_hash = ko.observable({
        });
        this.tipText = ko.observable('Component');
        this.type = type;
        this.properties.subscribe(function (newValue) {
            var result = {
            };
            var c = _.reduce(newValue, function (memo, num, key, list) {
                memo[list[key].key] = list[key].value;
                return memo;
            }, {
            });
            _this.properties_hash(c);
        });
        this.dirtyItems = ko.computed(function () {
            return ko.utils.arrayFilter(this.properties(), function (item) {
                return item.value.dirtyFlag.isDirty();
            });
        }, this);
        this.dirtyItems.subscribe(function (newValue) {
            var result = {
            };
            var c = _.reduce(newValue, function (memo, num, key, list) {
                memo[list[key].key] = list[key].value.toString();
                return memo;
            }, {
            });
            _this.dirtyItems_hash(c);
        });
        this.isDirty = ko.computed(function () {
            return this.dirtyItems().length > 0;
        }, this);
        var annot = this.getAnnotation();
        this.tipText(annot.tipText ? annot.tipText : this.type);
    }
    Component.prototype.getAnnotation = function () {
        var annot = {
        };
        if(!typeannotations[this.type]) {
            annot = typeannotations.Unknown;
        } else {
            annot = typeannotations[this.type];
        }
        return annot;
    };
    Component.prototype.initialize = function () {
        var annot = this.getAnnotation();
        var myprops = _.keys(annot.properties);
        for(var i = 0; i < myprops.length; i++) {
            var deftype = '';
            var proptype = '';
            var propname = myprops[i];
            var property = annot.properties[propname];
            if(typeof (property) == "string") {
                proptype = property;
                deftype = 'shorthand';
            } else {
                proptype = property.type;
                deftype = 'longhand';
            }
            var inst;
            var defaultvalue = property.defaultValue ? property.defaultValue : '';
            console.log(propname + ":" + defaultvalue + " of " + proptype + "(" + deftype + ")");
            if(!Types[proptype]) {
                inst = new Types['Unknown'](defaultvalue, property);
            } else {
                inst = new Types[proptype](defaultvalue, property);
            }
            this.properties.push({
                key: propname,
                value: inst
            });
        }
    };
    Component.prototype.update = function (data) {
        if(data.type != this.type) {
            return;
        }
        var props = data.properties;
        var propkeys = _.keys(props);
        for(var i = 0; i < propkeys.length; i++) {
            var propname = propkeys[i];
            var propvalue = props[propkeys[i]];
            if(this.properties_hash()[propname]) {
                this.properties_hash()[propname].fromString(propvalue);
            } else {
                var annot = this.getAnnotation();
                var deftype = '';
                var proptype = '';
                if(!annot.properties[propname]) {
                    proptype = 'Unknown';
                } else {
                    if(typeof (annot.properties[propname]) == "string") {
                        proptype = annot.properties[propname];
                        deftype = 'shorthand';
                    } else {
                        proptype = annot.properties[propname].type;
                        deftype = 'longhand';
                    }
                }
                console.log(propname + ":" + propvalue + " of " + proptype + "(" + deftype + ")");
                var inst;
                if(!Types[proptype]) {
                    inst = new Types['Unknown'](propvalue, annot.properties[propname]);
                } else {
                    inst = new Types[proptype](propvalue, annot.properties[propname]);
                }
                this.properties.push({
                    key: propname,
                    value: inst
                });
            }
        }
    };
    Component.prototype.render = function (prop) {
        return 'tpl-type-' + prop.value.render();
    };
    Component.prototype.toggleHide = function () {
        this.visible(!this.visible());
        return false;
    };
    return Component;
})();
var GO = (function () {
    function GO() {
        var _this = this;
        this.name = ko.observable('');
        this.components = ko.observableArray();
        this.dirtyItems = ko.computed(function () {
            return ko.utils.arrayFilter(this.components(), function (item) {
                return item.isDirty();
            });
        }, this);
        this.isDirty = ko.computed(function () {
            return (this.dirtyItems().length > 0) || this._destroy;
        }, this);
        this.isDirty.subscribe(function (newValue) {
            if(newValue) {
                _this.sendDelta();
            }
        });
        this.removeComponent = function (c) {
            _this.components.destroy(c);
            _this.sendDestroy();
        };
        this.newComponent = function (cmpannot) {
            if(!_this.hasComponent(cmpannot.typename)) {
                var c = new Component(cmpannot.typename);
                c.initialize();
                _this.addComponent(c);
                _this.sendCreate(c);
            }
        };
    }
    GO.prototype.sendDelta = function () {
        var calldata = {
            meta: {
                callee: 'inspector',
                command: 'delta'
            },
            data: {
                name: this.name
            }
        };
        var godata = calldata.data;
        godata.components = [];
        var dirtycmps = this.dirtyItems();
        for(var i = 0; i < dirtycmps.length; i++) {
            var cmp = dirtycmps[i];
            var cmpdata = {
                type: cmp.type,
                properties: {
                }
            };
            cmpdata.properties = cmp.dirtyItems_hash();
            godata.components.push(cmpdata);
        }
        setTimeout(function () {
            _.each(dirtycmps, function (cmp) {
                _.each(cmp.dirtyItems(), function (item) {
                    item.value.dirtyFlag.reset();
                });
            });
        }, 0);
        console.log(JSON.stringify(calldata));
    };
    GO.prototype.sendDestroy = function () {
        var _this = this;
        var calldata = {
            meta: {
                callee: 'inspector',
                command: 'destroy'
            },
            data: {
                name: this.name
            }
        };
        var godata = calldata.data;
        var destroycmps = ko.utils.arrayFilter(this.components(), function (item) {
            return item._destroy;
        });
        godata.components = _.map(destroycmps, function (cmp) {
            return {
                type: cmp.type,
                properties: {
                }
            };
        });
        setTimeout(function () {
            _.each(destroycmps, function (cmp) {
                _this.components.remove(cmp);
            });
        }, 0);
        console.log(JSON.stringify(calldata));
    };
    GO.prototype.sendCreate = function (c) {
        var calldata = {
            meta: {
                callee: 'inspector',
                command: 'create'
            },
            data: {
                name: this.name
            }
        };
        var godata = calldata.data;
        godata.components = [
            {
                type: c.type,
                properties: {
                }
            }
        ];
        console.log(JSON.stringify(calldata));
    };
    GO.prototype.hasComponent = function (type) {
        for(var i = 0; i < this.components().length; i++) {
            if(this.components()[i].type == type) {
                return true;
            }
        }
        return false;
    };
    GO.prototype.component = function (type) {
        for(var i = 0; i < this.components().length; i++) {
            if(this.components()[i].type == type) {
                return this.components()[i];
            }
        }
        return null;
    };
    GO.prototype.addComponent = function (c) {
        if(!this.hasComponent(c.type)) {
            this.components.push(c);
        }
    };
    return GO;
})();
var TypeAnnotations = (function () {
    function TypeAnnotations() {
        this.types = ko.observableArray(_.map(typeannotations, function (num, key) {
            return {
                typename: key,
                descr: num
            };
        }));
        this.categories = ko.computed(function () {
            return _.uniq(_.map(this.types(), function (item) {
                return item.descr.category ? item.descr.category : 'No category';
            }));
        }, this);
        this.pickCategories = ko.computed(function () {
            return _.filter(this.categories(), function (item) {
                return (item != 'Unknown') && (item != 'Transform');
            });
        }, this);
    }
    TypeAnnotations.prototype.filterByCategory = function (cat) {
        return _.filter(this.types(), function (item) {
            return item.descr.category == cat;
        });
    };
    return TypeAnnotations;
})();
