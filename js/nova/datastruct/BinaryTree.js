var BinaryTree = function () {
	
	
};

BinaryTree.prototype.BinaryTree = function (data) {
	this.this(data);
};

BinaryTree.prototype.destroy = function () {
};

BinaryTree.prototype.this = function (data) {
	this.addNodes(data);
};

BinaryTree.prototype.addNode = function (data) {
	if (this.accessor_root() == null) {
		this.mutator_root(new BinaryNode(data));
	} else {
		this.accessor_root().addChild(data);
	}
	return this;
};

BinaryTree.prototype.addNodes = function (data) {
	var nova_local_0;
	var d;
	nova_local_0 = (data).iterator();
	while (nova_local_0.hasNext()) {
		d = nova_local_0.next();
		this.addNode(d);
	}
	return this;
};

BinaryTree.prototype.accessor_root = function () {
	return root;
};

BinaryTree.prototype.mutator_root = function (node) {
	(this).root = node;
	return node;
};

BinaryTree.prototype.super = function () {
};



