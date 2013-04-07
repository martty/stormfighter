var Editor = (function () {
    function Editor() {
        this.containers = new Array();
        this.containers['west'] = new Container('west');
        this.containers['east'] = new Container('east');
        this.containers['south'] = new Container('south');
        this.widgets = new Array();
        this.widgets['inspector'] = new Inspector();
        this.containers['east'].addWidget(this.widgets['inspector']);
    }
    Editor.prototype.onContainerResize = function () {
        this.containers['left'].onResize();
        this.containers['right'].onResize();
        this.containers['bottom'].onResize();
    };
    Editor.prototype.inspector = function () {
        return this.widgets['inspector'];
    };
    return Editor;
})();
$(window).load(function () {
    $.parser.parse();
    window.editor = new Editor();
});
