var CharArray = function () {
	
	
};

CharArray.prototype.CharArray = function () {
	this.this();
};

CharArray.prototype.CharArray = function (count) {
	this.this(count);
};

CharArray.prototype.CharArray = function (data, count) {
	this.this(data, count);
};

CharArray.prototype.destroy = function () {
};

CharArray.prototype.this = function () {
	this.this();
};

CharArray.prototype.this = function (count) {
	this.this(count);
};

CharArray.prototype.get = function (index) {
	return (this.data);
};

CharArray.prototype.set = function (index, value) {
	(this.data) = value;
};

CharArray.prototype.this = function (data, count) {
	this.this(data, count);
};

CharArray.prototype.map = function (mapFunc) {
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

CharArray.prototype.forEach = function (func) {
	var i;
	i = 0;
	for (; i < this.count; i++) {
		func(this.get(i), i, this);
	}
};

CharArray.prototype.any = function (anyFunc) {
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

CharArray.prototype.all = function (allFunc) {
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

CharArray.prototype.filter = function (filterFunc) {
	var filtered;
	var i;
	var nova_local_0;
	var element;
	filtered = new CharArray();
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

CharArray.prototype.take = function (howMany) {
	var list;
	var i;
	if (howMany > this.count) {
		howMany = this.count;
	}
	list = new CharArray();
	i = 0;
	for (; i < howMany; i++) {
		list.add(this.get(i));
	}
	return list;
};

CharArray.prototype.skip = function (howMany) {
	var list;
	var i;
	list = new CharArray();
	i = howMany;
	for (; i < this.count; i++) {
		list.add(this.get(i));
	}
	return list;
};

CharArray.prototype.firstWhere = function (func) {
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

CharArray.prototype.reverse = function () {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new CharArray(this.count);
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.set(this.count - ++i, element);
	}
	return array;
};

CharArray.prototype.accessor_iterator = function () {
	return new CharArrayIterator(this);
};

CharArray.prototype.mutator_iterator = function () {
};

CharArray.prototype.accessor_first = function () {
	if (this.count > 0) {
		return this.data;
	}
	return 0;
};

CharArray.prototype.mutator_first = function () {
};

CharArray.prototype.accessor_last = function () {
	if (this.count > 0) {
		return this.data;
	}
	return 0;
};

CharArray.prototype.accessor_hashCodeLong = function () {
	var hash;
	var i;
	hash = 0;
	i = 0;
	for (; i < this.count; i++) {
		hash = 31 * hash + this.get(i);
	}
	return hash;
};

CharArray.prototype.mutator_hashCodeLong = function () {
};

CharArray.prototype.super = function () {
};



