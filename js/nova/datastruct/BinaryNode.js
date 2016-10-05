var BinaryNode = function () {
	
	
};

BinaryNode.prototype.BinaryNode = function (data) {
	this.this(data);
};

BinaryNode.prototype.BinaryNode = function (data, size) {
	this.this(data, size);
};

BinaryNode.prototype.destroy = function () {
};

BinaryNode.prototype.this = function (data) {
	data = typeof data == 'undefined' ? null : data;
	this.this(data, 2);
};

BinaryNode.prototype.this = function (data, size) {
	this.this(data, size);
};

BinaryNode.prototype.getNode = function (index) {
	if (this.children.count <= index) {
		return null;
	}
	return get(index);
};

BinaryNode.prototype.setNode = function (index, data) {
	if (this.children.count <= index) {
		this.children.add(index, data);
	} else {
		this.children.set(index, data);
	}
};

BinaryNode.prototype.addChild = function (data) {
	if (this >= 0) {
		if (this.accessor_left() == null) {
			this.mutator_left(new BinaryNode(data));
		} else {
			this.accessor_left().addChild(data);
		}
	} else {
		if (this.accessor_right() == null) {
			this.mutator_right(new BinaryNode(data));
		} else {
			this.accessor_right().addChild(data);
		}
	}
};

BinaryNode.prototype.accessor_left = function () {
	return this.getNode(0);
};

BinaryNode.prototype.mutator_left = function (value) {
	this.setNode(0, value);
	return value;
};

BinaryNode.prototype.accessor_right = function () {
	return this.getNode(1);
};

BinaryNode.prototype.mutator_right = function (value) {
	this.setNode(1, value);
	return value;
};

BinaryNode.prototype.super = function () {
};



