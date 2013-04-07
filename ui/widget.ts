// widget.ts
/// <reference path="dep/jquery-1.8.d.ts" />

class Widget {
	name : string;
	box : JQuery;
	toolbar : JQuery;
	body : JQuery;

	patterns : string[];


	constructor(name : string){
		this.name = name;
		this.box = $('<div></div>');
		this.box.addClass('widget');
		this.box.addClass(name);
		this.toolbar = $('<div></div>');
		this.body = $('<div></div>');
		this.body.addClass('widget-body');
		this.box.append(this.toolbar);
		this.box.append(this.body);
	}

	content() : JQuery{
		return this.box;
	}

	title() : string {
		return this.name;
	}

	onAdd(container : JQuery) : void {
		// override me!
	}

	autoSize() : void {
		this.box.height('auto');
	}

	// set single pattern
	setCommandPattern(name:string, pattern:string){
		this.patterns[name] = pattern;
	}

	// set pattern for commands
	// patterns - key-value array for patterns, $ denotes the substitution for entityname, multiple substitutions available
	// eg.: patterns = {"select" : "Editor:select($0);"}
	setCommandPatterns(patterns : string[]){
		this.patterns = this.patterns.concat(patterns);
	}
	
	// constructs a command for given target(s)
	// command : command to make for
	// targets : array of substitutions to make
	makeCommand(command:string, targets:string[]){
		if(!this.patterns){
			console.log('Commands have not been set for '+this.name+'!', 1);
			return;
		}
		if(!this.patterns[command]){
			console.log('Command ['+command+'] have not been set for '+this.name+'!', 1);
			return;
		}
		var pattern = this.patterns[command];
		for (var i = 0; i < targets.length; i++){
			// replace and escape entitynames
			pattern = pattern.replace('$'+i, "[["+targets[i]+"]]");
		}
		return pattern;
	}
}