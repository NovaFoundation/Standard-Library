var CharArrayIterator = function () {
	this.array = nova_null;
	this.position = 0;
	
	
};

CharArrayIterator.prototype.CharArrayIterator = function (array) {
	this.this(array);
};

CharArrayIterator.prototype.destroy = function () {
};

CharArrayIterator.prototype.this = function (array) {
	this = array;
	this.reset();
};

CharArrayIterator.prototype.reset = function () {
	this.position = 0;
	return this;
};

CharArrayIterator.prototype.accessor_hasNext = function () {
	return this.array.count > this.position;
};

CharArrayIterator.prototype.mutator_hasNext = function () {
};

CharArrayIterator.prototype.accessor_next = function () {
	if (this.hasNext()) {
		return get(this.position++);
	}
	;
	return 0;
};

CharArrayIterator.prototype.mutator_next = function () {
};

CharArrayIterator.prototype.super = function () {
};



