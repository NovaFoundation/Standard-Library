var IntRangeIterator = function () {
	this.range = nova_null;
	this.position = 0;
	
	
};

IntRangeIterator.prototype.IntRangeIterator = function (range) {
	this.this(range);
};

IntRangeIterator.prototype.destroy = function () {
};

IntRangeIterator.prototype.this = function (range) {
	this = range;
	this.reset();
};

IntRangeIterator.prototype.reset = function () {
	this.position = this.range.start;
	return this;
};

IntRangeIterator.prototype.accessor_hasNext = function () {
	return this.position < this.range.end;
};

IntRangeIterator.prototype.mutator_hasNext = function () {
};

IntRangeIterator.prototype.accessor_next = function () {
	if (this.hasNext()) {
		return this.position++;
	}
	;
	return null;
};

IntRangeIterator.prototype.mutator_next = function () {
};

IntRangeIterator.prototype.super = function () {
};



