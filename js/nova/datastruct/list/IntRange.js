var IntRange = function () {
	this.start = 0;
	this.end = 0;
	
	
};

IntRange.prototype.IntRange = function () {
	this.this();
};

IntRange.prototype.IntRange = function (start, end) {
	this.this(start, end);
};

IntRange.prototype.destroy = function () {
};

IntRange.prototype.this = function () {
	this.this(0, 0);
};

IntRange.prototype.this = function (start, end) {
	this = start;
	this = end;
};

IntRange.prototype.contains = function (value) {
	return value >= this.start && value < this.end;
};

IntRange.prototype.toArray = function () {
	var ints;
	var i;
	ints = new IntArray(this.accessor_size());
	i = this.start;
	while (i < this.end) {
		ints.set(i - this.start, i++);
	}
	return ints;
};

IntRange.prototype.forEach = function (func) {
	var i;
	var nova_local_0;
	var value;
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		value = nova_local_0.next();
		func(value, i++, this);
	}
};

IntRange.prototype.map = function (mapFunc) {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new Array();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.add(mapFunc(element, i++, this));
	}
	return array;
};

IntRange.prototype.any = function (anyFunc) {
	var nova_local_0;
	var element;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (anyFunc(element)) {
			return true;
		}
	}
	return false;
};

IntRange.prototype.all = function (allFunc) {
	var nova_local_0;
	var element;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (!allFunc(element)) {
			return false;
		}
	}
	return true;
};

IntRange.prototype.filter = function (filterFunc) {
	var list;
	var i;
	var nova_local_0;
	var value;
	list = new IntArray();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		value = nova_local_0.next();
		if (filterFunc(value, i++, this)) {
			list.add(value);
		}
	}
	return list;
};

IntRange.prototype.take = function (howMany) {
	return new IntRange(this.start, Math.min(this.start + howMany, this.end));
};

IntRange.prototype.skip = function (howMany) {
	return new IntRange(Math.min(this.start + howMany, this.end), this.end);
};

IntRange.prototype.firstWhere = function (func) {
	var nova_local_0;
	var element;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (func(element)) {
			return element;
		}
	}
	return null;
};

IntRange.prototype.reverse = function () {
	return new IntRange(this.end, this.start);
};

IntRange.prototype.join = function (delimiter) {
	var str;
	var passed;
	var nova_local_0;
	var element;
	str = "";
	passed = false;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (passed) {
			str = str.concat(delimiter);
		} else {
			passed = true;
		}
		str = str.concat(Int.toString(element));
	}
	return str;
};

IntRange.prototype.toString = function () {
	return concat(new String("..").concat(Int.toString((this.end)).concat(new String(""))));
};

IntRange.prototype.accessor_first = function () {
	return this.start;
};

IntRange.prototype.mutator_first = function () {
};

IntRange.prototype.accessor_last = function () {
	return this.end - 1;
};

IntRange.prototype.mutator_last = function () {
};

IntRange.prototype.accessor_size = function () {
	return this.end - this.start;
};

IntRange.prototype.mutator_size = function () {
};

IntRange.prototype.accessor_iterator = function () {
	return new IntRangeIterator(this);
};

IntRange.prototype.mutator_iterator = function () {
};

IntRange.prototype.super = function () {
};



