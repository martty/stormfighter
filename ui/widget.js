var Widget = (function () {
    function Widget(name) {
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
    Widget.prototype.content = function () {
        return this.box;
    };
    Widget.prototype.title = function () {
        return this.name;
    };
    Widget.prototype.onAdd = function (container) {
    };
    Widget.prototype.autoSize = function () {
        this.box.height('auto');
    };
    Widget.prototype.setCommandPattern = function (name, pattern) {
        this.patterns[name] = pattern;
    };
    Widget.prototype.setCommandPatterns = function (patterns) {
        this.patterns = this.patterns.concat(patterns);
    };
    Widget.prototype.makeCommand = function (command, targets) {
        if(!this.patterns) {
            console.log('Commands have not been set for ' + this.name + '!', 1);
            return;
        }
        if(!this.patterns[command]) {
            console.log('Command [' + command + '] have not been set for ' + this.name + '!', 1);
            return;
        }
        var pattern = this.patterns[command];
        for(var i = 0; i < targets.length; i++) {
            pattern = pattern.replace('$' + i, "[[" + targets[i] + "]]");
        }
        return pattern;
    };
    return Widget;
})();
