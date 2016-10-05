var IntArray = function () {
	
	
};

IntArray.prototype.IntArray = function () {
	this.this();
};

IntArray.prototype.IntArray = function (count) {
	this.this(count);
};

IntArray.prototype.IntArray = function (data, count) {
	this.this(data, count);
};

IntArray.prototype.destroy = function () {
};

IntArray.prototype.this = function () {
	this.this();
};

IntArray.prototype.this = function (count) {
	this.this(count);
};

IntArray.prototype.this = function (data, count) {
	this.this(data, count);
};

IntArray.prototype.map = function (mapFunc) {
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

IntArray.prototype.forEach = function (func) {
	var i;
	i = 0;
	for (; i < this.count; i++) {
		func(this.get(i), i, this);
	}
};

IntArray.prototype.any = function (anyFunc) {
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

IntArray.prototype.all = function (allFunc) {
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

IntArray.prototype.filter = function (filterFunc) {
	var filtered;
	var i;
	var nova_local_0;
	var element;
	filtered = new IntArray();
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

IntArray.prototype.take = function (howMany) {
	var list;
	var i;
	if (howMany > this.count) {
		howMany = this.count;
	}
	list = new IntArray();
	i = 0;
	for (; i < howMany; i++) {
		list.add(this.data);
	}
	return list;
};

IntArray.prototype.skip = function (howMany) {
	var list;
	var i;
	list = new IntArray();
	i = howMany;
	for (; i < this.count; i++) {
		list.add(this.data);
	}
	return list;
};

IntArray.prototype.firstWhere = function (func) {
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

IntArray.prototype.reverse = function () {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new IntArray(this.count);
	array.count = this.count;
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.set(this.count - ++i, element);
	}
	return array;
};

IntArray.prototype.join = function (delimiter) {
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

IntArray.prototype.accessor_iterator = function () {
	return new IntArrayIterator(this);
};

IntArray.prototype.mutator_iterator = function () {
};

IntArray.prototype.accessor_first = function () {
	if (this.count > 0) {
		return this.data;
	}
	return null;
};

IntArray.prototype.mutator_first = function () {
};

IntArray.prototype.accessor_last = function () {
	if (this.count > 0) {
		return this.data;
	}
	return null;
};

IntArray.prototype.super = function () {
};



