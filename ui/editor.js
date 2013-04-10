var Editor = (function () {
    function Editor() {
        this.queue = new Array();
        this.containers = new Array();
        this.containers['west'] = new Container('west');
        this.containers['east'] = new Container('east');
        this.containers['south'] = new Container('south');
        this.widgets = new Array();
        this.widgets['inspector'] = new Inspector();
        this.containers['east'].addWidget(this.widgets['inspector']);
        this.viewportfocus = ko.observable(true);
        ko.applyBindings(this, $('#viewport')[0]);
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
    return Editor;
})();
$(window).load(function () {
    $.parser.parse();
    window.editor = new Editor();
});
