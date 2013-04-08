// types.ts
/// <reference path="dep/jquery-1.8.d.ts" />
/// <reference path="dep/knockout-2.2.d.ts" />
/// <reference path="dep/underscore-typed.d.ts" />

declare var typeannotations;
declare var editor;

// define extenders for easy declarations

ko.dirtyFlag = function(root, isInitiallyDirty) {
    var result = function() {},
        _initialState = ko.observable(ko.toJSON(root)),
        _isInitiallyDirty = ko.observable(isInitiallyDirty),
        _isOff = ko.observable(false);

    result.isDirty = ko.computed(function() {
        return  (!_isOff()) && (_isInitiallyDirty() || _initialState() !== ko.toJSON(root));
    });

    result.reset = function() {
        _initialState(ko.toJSON(root));
        _isInitiallyDirty(false);
    };

    result.off = function() {
    	_isOff(true);
    }

    result.on = function() {
    	this.reset();
    	_isOff(false);
    }
    result.initialState = function() {
    	return _initialState();
    }
    result.initiallyDirty = function() {
    	return _isInitiallyDirty();
    }

    return result;
};

ko.extenders.numeric = function(target) {
	//create a writeable computed observable to intercept writes to our observable
	var result = ko.computed({
		read: target,  //always return the original observables value
		write: function(newValue) {
			var current = target();
			if(isNaN(newValue) || newValue === ''){
				return;
			}
			var newValueAsNum = isNaN(newValue) ? 0 : parseFloat(newValue);
			//console.log(current+'/'+newValue+'/'+newValueAsNum);
			//TODO: 0. is buggy? 0.1 erases both . and 1
			var valueToWrite = newValueAsNum;

	        //only write if it changed
	        if (valueToWrite !== current) {
	            target(valueToWrite);
	        } else {
	            //if the rounded value is the same, but a different value was written, force a notification for the current field
	            if (newValue !== current) {
	             //   target.notifySubscribers(valueToWrite);
	            }
	        }
	    }
	});

	//initialize with current value to make sure it is rounded appropriately
	result(target());

	//return the new computed observable
	return result;
};


module Types {

export interface SFType {
	dirtyFlag : Object;

	toString() : string;
	fromString(src : string) : void;
}

export class SEnum implements SFType {
	public value : KnockoutObservableString;
	dict : any;
	dirtyFlag : Object;

	constructor (src : string, annot : Object) {
		this.value = ko.observable(src ? src : 0).extend({numeric : ''});
		this.dirtyFlag = new ko.dirtyFlag(this);
		this.dict = annot.values;

		this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SReal');
	}

	toString() : string {
		return this.value();
	}

	fromString(src : string) : void {
		this.dirtyFlag.off();
		this.value(src);
		this.dirtyFlag.on();
	}

	render() : string {
		return 'SReal';
	}
}

export class SReal implements SFType {
	public value : KnockoutObservableString;
	dirtyFlag : Object;

	constructor (src : string, annot : Object) {
		this.value = ko.observable(src ? src : 0).extend({numeric : ''});
		this.dirtyFlag = new ko.dirtyFlag(this);

		this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SReal');
	}

	toString() : string {
		return this.value();
	}

	fromString(src : string) : void {
		this.dirtyFlag.off();
		this.value(src);
		this.dirtyFlag.on();
	}

	render() : string {
		return 'SReal';
	}
}

export class SString implements SFType {
	public value : KnockoutObservableString;
	dirtyFlag : Object;

	constructor (src : string, annot : Object) {
		this.value = ko.observable(src ? src : "");
		this.dirtyFlag = new ko.dirtyFlag(this);

		this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SString');
	}

	toString() : string {
		return this.value();
	}

	fromString(src : string) : void {
		this.dirtyFlag.off();
		this.value(src);
		this.dirtyFlag.on();
	}

	render() : string {
		return 'SString';
	}
}

export class SVector3 implements SFType {
	dirtyFlag : Object;
	public x : KnockoutObservableNumber;
	public y : KnockoutObservableNumber;
	public z : KnockoutObservableNumber;

	constructor (src : string, annot : Object) {
		var vals = src ? src.split(' ') : [0,0,0];
		this.x = ko.observable(Number(vals[0])).extend({numeric : ''});
		this.y = ko.observable(Number(vals[1])).extend({numeric : ''});
		this.z = ko.observable(Number(vals[2])).extend({numeric : ''});
		this.dirtyFlag = new ko.dirtyFlag(this);

		this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SVector3');
	}

	fromString(src : string) : void {
		var vals = src.split(' ');
		this.dirtyFlag.off();
		this.x(Number(vals[0]));
		this.y(Number(vals[1]));
		this.z(Number(vals[2]));
		this.dirtyFlag.on();
	}

	toString() : string {
		return this.x()+" "+this.y()+" "+this.z();
	}
	
	render() : string {
		return 'SVector3';
	}
}

export class SQuaternion implements SFType {
	dirtyFlag : Object;
	public x : KnockoutObservableNumber;
	public y : KnockoutObservableNumber;
	public z : KnockoutObservableNumber;
	public w : KnockoutObservableNumber;

	constructor (src : string, annot : Object) {
		var vals = src? src.split(' ') : [0,0,0,0];
		this.x = ko.observable(Number(vals[0])).extend({numeric : ''});
		this.y = ko.observable(Number(vals[1])).extend({numeric : ''});
		this.z = ko.observable(Number(vals[2])).extend({numeric : ''});
		this.w = ko.observable(Number(vals[3])).extend({numeric : ''});
		this.dirtyFlag = new ko.dirtyFlag(this);

		this.tipText = ko.observable(annot.tipText ? annot.tipText : 'SQuaternion');
	}

	fromString(src : string) : void {
		var vals = src.split(' ');
		this.dirtyFlag.off();
		this.x(Number(vals[0]));
		this.y(Number(vals[1]));
		this.z(Number(vals[2]));
		this.z(Number(vals[3]));
		this.dirtyFlag.on();
	}

	toString() : string {
		return this.x()+" "+this.y()+" "+this.z()+" "+this.w();
	}
	
	render() : string{
		return 'SQuaternion';
	}
}

export class Unknown implements SFType {
	public value : string;
	dirtyFlag : Object;
	constructor (src : string) {
		this.value = src ? src : "";
		this.dirtyFlag = new ko.dirtyFlag(this);
	}

	toString() : string {
		return this.value;
	}

	fromString(src : string) : void {
		this.value = src;
	}

	render() : string {
		return 'Unknown';
	}
}

}

// Component data type

interface CmpData {
	type : string;
	properties : {};
}

// Component type

class Component {
	type: string;

	properties = ko.observableArray();
	properties_hash = ko.observable({});
	properties_hash_value = ko.observable({});
	visible = ko.observable(true);
	dirtyItems : any;
	dirtyItems_hash = ko.observable({});
	isDirty : any;
	tipText = ko.observable('Component');

	constructor (type : string) {
		this.type = type;
		//this.properties = ko.observableArray();
		//this.visible = ko.observable(true);
		this.properties.subscribe((newValue) => {
			var result = {};
			var c = _.reduce(newValue, function(memo, num, key : number, list : any[]){ memo[list[key].key] = list[key].value; return memo; }, {});
			this.properties_hash(c);
		});

		this.dirtyItems = ko.computed(function() {
			return ko.utils.arrayFilter(this.properties(), function(item) {
				return item.value.dirtyFlag.isDirty();
			});
		}, this);

		this.dirtyItems.subscribe((newValue) => {
			var result = {};
			var c = _.reduce(newValue, function(memo, num, key : number, list : any[]){ memo[list[key].key] = list[key].value.toString(); return memo; }, {});
			this.dirtyItems_hash(c);
		});

		this.dirtyItems.subscribe((newValue) => {
			var result = {};
			var c = _.reduce(this.properties(), function(memo, num, key : number, list : any[]){ memo[list[key].key] = list[key].value.toString(); return memo; }, {});
			this.properties_hash_value(c);
		});

		this.isDirty = ko.computed(function() {
			return this.dirtyItems().length > 0;
		}, this);

		var annot = this.getAnnotation();
		this.tipText(annot.tipText ? annot.tipText : this.type);
	}

	getAnnotation () : any {
		var annot = {};
		if(!typeannotations[this.type])
			annot = typeannotations.Unknown;
		else
			annot = typeannotations[this.type];
		return annot;
	}

	// fills properties with their default values or '0'
	initialize() : void {
		// create new property
		var annot = this.getAnnotation();

		var myprops = _.keys(annot.properties);
		for(var i=0; i < myprops.length; i++){
			var deftype = '';
			var proptype = '';
			var propname = myprops[i];
			var property = annot.properties[propname];
			// check if shorthand or longhand definition
			if(typeof(property) == "string"){ // shorthand
				proptype = property;
				deftype = 'shorthand';
			} else { // longhand
				proptype = property.type;
				deftype = 'longhand';
			}
			var inst;

			var defaultvalue = property.defaultValue ? property.defaultValue : '';
			console.log(propname+":"+defaultvalue+" of "+proptype+"("+deftype+")");
			// if no type yet, use unknown
			if(!Types[proptype]){
				inst = new Types['Unknown'](defaultvalue, property);
			} else {
				inst = new Types[proptype](defaultvalue, property);
			}
			this.properties.push({key: propname, value: inst});
		}
	}

	update(data : CmpData) : void {
		if(data.type != this.type)
			return;
		var props = data.properties;
		if(!props)
			return;
		var propkeys = _.keys(props);
		for (var i = 0; i < propkeys.length; i++){
			var propname = propkeys[i];
			var propvalue = props[propkeys[i]];
			if(this.properties_hash()[propname]){
				this.properties_hash()[propname].fromString(propvalue);
			} else {
				// create new property
				var annot = this.getAnnotation();
				var deftype = '';
				var proptype = '';
				if(!annot.properties[propname]) {
					proptype = 'Unknown';
				} else {
					// check if shorthand or longhand definition
					if(typeof(annot.properties[propname]) == "string"){ // shorthand
						proptype = annot.properties[propname];
						deftype = 'shorthand';
					} else { // longhand
						proptype = annot.properties[propname].type;
						deftype = 'longhand';
					}
				}
				console.log(propname+":"+propvalue+" of "+proptype+"("+deftype+")");
				var inst;
				// if no type yet, use unknown
				if(!Types[proptype]){
					inst = new Types['Unknown'](propvalue, annot.properties[propname]);
				} else {
					inst = new Types[proptype](propvalue, annot.properties[propname]);
				}
				this.properties.push({key: propname, value: inst});
			}
		}
	}

	render(prop) : string {
		return 'tpl-type-'+prop.value.render();
	}

	toggleHide() : bool {
		this.visible(!this.visible());
		return false;
	}
}

// GO data type (for passing around)

interface GOData {
	name : string;
	components? : CmpData[];
	children? : GOData[];
}

// GO type (for internal representation)
class GO {
	name : KnockoutObservableString;
	components : KnockoutObservableArray;
	children : GO[];
	parent : GO;

	dirtyItems : any;
	isDirty : any;

	removeComponent : any;
	self : any;

	constructor() {
		this.name = ko.observable('');
		this.components = ko.observableArray();

		this.dirtyItems = ko.computed(function() {
			return ko.utils.arrayFilter(this.components(), function(item) {
				return item.isDirty();
			});
		}, this);

		this.isDirty = ko.computed(function() {
			return (this.dirtyItems().length > 0) || this._destroy;
		}, this);

		this.isDirty.subscribe(
			(newValue) => {
				if(newValue)
					this.sendDelta();
			}
		);

		this.removeComponent = (c : Component) => { 
			this.components.destroy(c);
			this.sendDestroy();
		};

		this.newComponent = (cmpannot : any) => {
			if(!this.hasComponent(cmpannot.typename)) {
				var c = new Component(cmpannot.typename);
				c.initialize();
				this.addComponent(c);
				this.sendCreate(c);
			}
		}
	}
	// send property updates
	sendDelta() : void {
		var calldata : CallData = {meta: {callee : 'inspector', command : 'delta'}, data: {name : this.name}};
		var godata : GOData = <GOData>calldata.data;
		godata.components = [];
		var dirtycmps = this.dirtyItems();
		for (var i = 0; i < dirtycmps.length; i++){
			var cmp = dirtycmps[i];
			var cmpdata : CmpData = {type: cmp.type, properties: {}};
			//cmpdata.properties = cmp.dirtyItems_hash();  // send delta prop
			cmpdata.properties = cmp.properties_hash_value();  // send all prop
			godata.components.push(cmpdata);
		}
		// won't work without settimeout? probably because we are in a callback
		setTimeout(() => {_.each(dirtycmps, function(cmp){_.each(cmp.dirtyItems(), function(item){item.value.dirtyFlag.reset();})})}, 0);
		editor.send(calldata);
	}
	// send component destroy
	sendDestroy() : void {
		var calldata : CallData = {meta: {callee : 'inspector', command : 'destroy'}, data: {name : this.name}};
		var godata : GOData = <GOData>calldata.data;
		var destroycmps = ko.utils.arrayFilter(this.components(), function(item) {
			return item._destroy;
		});

		godata.components = _.map(destroycmps, function(cmp){
			return {type: cmp.type, properties: {}};
		});
		// won't work without settimeout? probably because we are in a callback
		setTimeout(() => {_.each(destroycmps, (cmp) => { this.components.remove(cmp); })}, 0);
		editor.send(calldata);
	}
	// send component create
	// maybe send as simple delta?
	sendCreate(c : Component) : void {
		var calldata : CallData = {meta: {callee : 'inspector', command : 'create'}, data: {name : this.name}};
		var godata : GOData = <GOData>calldata.data;

		godata.components = [{type: c.type, properties: {}}];
		editor.send(calldata);
	}

	hasComponent(type : string) : bool {
		for (var i = 0; i < this.components().length; i++){
			if (this.components()[i].type == type){
				return true;
			}
		}
		return false;
	}

	component(type : string) : Component {
		for (var i = 0; i < this.components().length; i++){
			if (this.components()[i].type == type){
				return this.components()[i];
			}
		}
		return null;
	}

	addComponent(c : Component) : void {
		if(!this.hasComponent(c.type))
			this.components.push(c);
	}
}

class TypeAnnotations {
	types : KnockoutObservableArray;
	categories : any;

	constructor () {
		this.types = ko.observableArray(_.map(typeannotations, function(num : any, key : string){ return {typename: key, descr: num}; }));

		this.categories = ko.computed(function() {
			return _.uniq(_.map(this.types(), function (item : any) {return item.descr.category ? item.descr.category : 'No category'}));
		}, this);

		this.pickCategories = ko.computed(function() {
			return _.filter(this.categories(), function (item : any) {return (item != 'Unknown') && (item != 'Transform') });
		}, this);
	}

	filterByCategory(cat : string) : any{
		return _.filter(this.types(), function(item){return item.descr.category == cat});
	}
}

// Engine call data type

interface CallData {
	meta : {
		callee : string;
		caller? : string;
		command : Object;
	};
	data : Object;
}
/*
interface TypeAnnotation {
	['component_name' : string] : {
		properties : {
			['propertyname' : string] : {
				type : string
			}
		}
	}
}*/