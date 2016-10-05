var BinaryTree = function () {
	var self = this;
	
	
	this.BinaryTree = function (data) {
		self.this(data);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (data) {
		self.addNodes(data);
	};
	
	this.addNode = function (data) {
		if (self.accessor_root() == null) {
			self.mutator_root(new BinaryNode(data));
		} else {
			self.accessor_root().addChild(data);
		}
		return self;
	};
	
	this.addNodes = function (data) {
		var nova_local_0;
		var d;
		nova_local_0 = (data).iterator();
		while (nova_local_0.hasNext()) {
			d = nova_local_0.next();
			self.addNode(d);
		}
		return self;
	};
	
	this.accessor_root = function () {
		return root;
	};
	
	this.mutator_root = function (node) {
		(self).root = node;
		return node;
	};
	
	this.super = function () {
	};
	
	
};


