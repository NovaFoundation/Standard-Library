var ArrayIterator = function () {
	this.array = nova_null;
	this.position = 0;
	
	
};

ArrayIterator.prototype.ArrayIterator = function (array) {
	this.this(array);
};

ArrayIterator.prototype.destroy = function () {
};

ArrayIterator.prototype.this = function (array) {
	this = array;
	this.reset();
};

ArrayIterator.prototype.reset = function () {
	this.position = 0;
	return this;
};

ArrayIterator.prototype.accessor_hasNext = function () {
	return this.array.count > this.position;
};

ArrayIterator.prototype.mutator_hasNext = function () {
};

ArrayIterator.prototype.accessor_next = function () {
	if (this.hasNext()) {
		return get(this.position++);
	}
	;
	return null;
};

ArrayIterator.prototype.mutator_next = function () {
};

ArrayIterator.prototype.super = function () {
};



