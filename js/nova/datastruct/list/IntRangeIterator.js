var IntRangeIterator = function () {
	var self = this;
	
	this.range = nova_null;
	this.position = 0;
	
	this.IntRangeIterator = function (range) {
		self.this(range);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (range) {
		self = range;
		self.reset();
	};
	
	this.reset = function () {
		self.position = self.range.start;
		return self;
	};
	
	this.accessor_hasNext = function () {
		return self.position < self.range.end;
	};
	
	this.mutator_hasNext = function () {
	};
	
	this.accessor_next = function () {
		if (self.hasNext()) {
			return self.position++;
		}
		;
		return null;
	};
	
	this.mutator_next = function () {
	};
	
	this.super = function () {
	};
	
	
};


