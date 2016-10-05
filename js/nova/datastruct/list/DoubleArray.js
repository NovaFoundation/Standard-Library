var DoubleArray = function () {
	
	
};

DoubleArray.prototype.DoubleArray = function () {
	this.this();
};

DoubleArray.prototype.DoubleArray = function (count) {
	this.this(count);
};

DoubleArray.prototype.DoubleArray = function (data, count) {
	this.this(data, count);
};

DoubleArray.prototype.destroy = function () {
};

DoubleArray.prototype.this = function () {
	this.this();
};

DoubleArray.prototype.this = function (count) {
	this.this(count);
};

DoubleArray.prototype.this = function (data, count) {
	this.this(data, count);
};

DoubleArray.prototype.map = function (mapFunc) {
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

DoubleArray.prototype.forEach = function (func) {
	var i;
	i = 0;
	for (; i < this.count; i++) {
		func(this.get(i), i, this);
	}
};

DoubleArray.prototype.any = function (anyFunc) {
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

DoubleArray.prototype.all = function (allFunc) {
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

DoubleArray.prototype.filter = function (filterFunc) {
	var filtered;
	var i;
	var nova_local_0;
	var element;
	filtered = new DoubleArray();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (filterFunc(element, i++, this)) {
			filtered.add(element);
		}
	}
	return filtered;
};

DoubleArray.prototype.take = function (howMany) {
	var list;
	var i;
	if (howMany > this.count) {
		howMany = this.count;
	}
	list = new DoubleArray();
	i = 0;
	for (; i < howMany; i++) {
		list.add(this.data);
	}
	return list;
};

DoubleArray.prototype.skip = function (howMany) {
	var list;
	var i;
	list = new DoubleArray();
	i = howMany;
	for (; i < this.count; i++) {
		list.add(this.data);
	}
	return list;
};

DoubleArray.prototype.firstWhere = function (func) {
	var nova_local_0;
	var element;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (func(element)) {
			return element;
		}
	}
	return 0;
};

DoubleArray.prototype.reverse = function () {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new DoubleArray(this.count);
	array.count = this.count;
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.set(this.count - ++i, element);
	}
	return array;
};

DoubleArray.prototype.join = function (delimiter) {
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
		str = str.concat(Double.toString(element));
	}
	return str;
};

DoubleArray.prototype.accessor_iterator = function () {
	return new DoubleArrayIterator(this);
};

DoubleArray.prototype.mutator_iterator = function () {
};

DoubleArray.prototype.accessor_first = function () {
	if (this.count > 0) {
		return this.data;
	}
	return 0;
};

DoubleArray.prototype.mutator_first = function () {
};

DoubleArray.prototype.accessor_last = function () {
	if (this.count > 0) {
		return this.data;
	}
	return 0;
};

DoubleArray.prototype.super = function () {
};



