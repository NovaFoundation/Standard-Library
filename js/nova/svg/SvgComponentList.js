var SvgComponentList = function () {
	this.start = nova_null;
	
	
};

SvgComponentList.prototype.SvgComponentList = function () {
	this.this();
};

SvgComponentList.prototype.destroy = function () {
};

SvgComponentList.prototype.generateOutput = function (file) {
	var current;
	current = this.start;
	while (current != null) {
		current.component.generateOutput(file);
		current = current.next;
	}
};

SvgComponentList.prototype.addChild = function (component) {
	var node;
	node = new SvgComponentNode();
	node.component = component;
	if (this.start == null) {
		this.start = node;
	} else {
		var current;
		current = this.start;
		while (current.next != null) {
			current = current.next;
		}
		current.next = node;
	}
};

SvgComponentList.prototype.this = function () {
};

SvgComponentList.prototype.super = function () {
};



