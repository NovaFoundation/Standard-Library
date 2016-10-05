var DoubleArrayIterator = function () {
	this.array = nova_null;
	this.position = 0;
	
	
};

DoubleArrayIterator.prototype.DoubleArrayIterator = function (array) {
	this.this(array);
};

DoubleArrayIterator.prototype.destroy = function () {
};

DoubleArrayIterator.prototype.this = function (array) {
	this = array;
	this.reset();
};

DoubleArrayIterator.prototype.reset = function () {
	this.position = 0;
	return this;
};

DoubleArrayIterator.prototype.accessor_hasNext = function () {
	return this.array.count > this.position;
};

DoubleArrayIterator.prototype.mutator_hasNext = function () {
};

DoubleArrayIterator.prototype.accessor_next = function () {
	if (this.hasNext()) {
		return get(this.position++);
	}
	;
	return 0;
};

DoubleArrayIterator.prototype.mutator_next = function () {
};

DoubleArrayIterator.prototype.super = function () {
};



