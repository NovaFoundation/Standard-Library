var IntArrayIterator = function () {
	var self = this;
	
	this.array = nova_null;
	this.position = 0;
	
	this.IntArrayIterator = function (array) {
		self.this(array);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (array) {
		self = array;
		self.reset();
	};
	
	this.reset = function () {
		self.position = 0;
		return self;
	};
	
	this.accessor_hasNext = function () {
		return self.array.count > self.position;
	};
	
	this.mutator_hasNext = function () {
	};
	
	this.accessor_next = function () {
		if (self.hasNext()) {
			return get(self.position++);
		}
		;
		return null;
	};
	
	this.mutator_next = function () {
	};
	
	this.super = function () {
	};
	
	
};


