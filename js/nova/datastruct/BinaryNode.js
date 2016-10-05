var BinaryNode = function () {
	var self = this;
	
	
	this.BinaryNode = function (data) {
		self.this(data);
	};
	
	this.BinaryNode = function (data, size) {
		self.this(data, size);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (data) {
		data = typeof data == 'undefined' ? null : data;
		self.this(data, 2);
	};
	
	this.this = function (data, size) {
		self.this(data, size);
	};
	
	this.getNode = function (index) {
		if (self.children.count <= index) {
			return null;
		}
		return get(index);
	};
	
	this.setNode = function (index, data) {
		if (self.children.count <= index) {
			self.children.add(index, data);
		} else {
			self.children.set(index, data);
		}
	};
	
	this.addChild = function (data) {
		if (self >= 0) {
			if (self.accessor_left() == null) {
				self.mutator_left(new BinaryNode(data));
			} else {
				self.accessor_left().addChild(data);
			}
		} else {
			if (self.accessor_right() == null) {
				self.mutator_right(new BinaryNode(data));
			} else {
				self.accessor_right().addChild(data);
			}
		}
	};
	
	this.accessor_left = function () {
		return self.getNode(0);
	};
	
	this.mutator_left = function (value) {
		self.setNode(0, value);
		return value;
	};
	
	this.accessor_right = function () {
		return self.getNode(1);
	};
	
	this.mutator_right = function (value) {
		self.setNode(1, value);
		return value;
	};
	
	this.super = function () {
	};
	
	
};


