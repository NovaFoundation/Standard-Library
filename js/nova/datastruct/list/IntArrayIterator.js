var IntArrayIterator = function () {
	this.array = nova_null;
	this.position = 0;
	
	
};

IntArrayIterator.prototype.IntArrayIterator = function (array) {
	this.this(array);
};

IntArrayIterator.prototype.destroy = function () {
};

IntArrayIterator.prototype.this = function (array) {
	this = array;
	this.reset();
};

IntArrayIterator.prototype.reset = function () {
	this.position = 0;
	return this;
};

IntArrayIterator.prototype.accessor_hasNext = function () {
	return this.array.count > this.position;
};

IntArrayIterator.prototype.mutator_hasNext = function () {
};

IntArrayIterator.prototype.accessor_next = function () {
	if (this.hasNext()) {
		return get(this.position++);
	}
	;
	return null;
};

IntArrayIterator.prototype.mutator_next = function () {
};

IntArrayIterator.prototype.super = function () {
};



