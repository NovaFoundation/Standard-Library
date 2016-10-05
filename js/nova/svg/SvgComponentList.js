var SvgComponentList = function () {
	var self = this;
	
	this.start = nova_null;
	
	this.SvgComponentList = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.generateOutput = function (file) {
		var current;
		current = self.start;
		while (current != null) {
			current.component.generateOutput(file);
			current = current.next;
		}
	};
	
	this.addChild = function (component) {
		var node;
		node = new SvgComponentNode();
		node.component = component;
		if (self.start == null) {
			self.start = node;
		} else {
			var current;
			current = self.start;
			while (current.next != null) {
				current = current.next;
			}
			current.next = node;
		}
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	
};


