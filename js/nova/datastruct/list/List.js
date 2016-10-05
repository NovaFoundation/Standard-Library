var List = function () {
	this.size = 0;
	this.first = nova_null;
	this.last = nova_null;
	
	
};

List.prototype.toArray = function () {
	var array;
	var nova_local_0;
	var value;
	array = new Array();
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		value = nova_local_0.next();
		array.add(value);
	}
	return array;
};

List.prototype.contains = function (value) {
	var contextArg18;
	return this.any(this.testLambda18);
};

List.prototype.forEach = function (func) {
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

List.prototype.map = function (mapFunc) {
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

List.prototype.any = function (anyFunc) {
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

List.prototype.all = function (allFunc) {
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

List.prototype.filter = function (filterFunc) {
	var list;
	var i;
	var nova_local_0;
	var value;
	list = new Array();
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

List.prototype.take = function (howMany) {
	var list;
	var i;
	var nova_local_0;
	var value;
	list = new Array();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		value = nova_local_0.next();
		if (i++ >= howMany) {
			return list;
		}
		list.add(value);
	}
	return list;
};

List.prototype.skip = function (howMany) {
	var list;
	var i;
	var nova_local_0;
	var value;
	list = new Array();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		value = nova_local_0.next();
		if (i++ >= howMany) {
			list.add(value);
		}
	}
	return list;
};

List.prototype.firstWhere = function (func) {
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

List.prototype.zip = function (other, zipper) {
	var i1;
	var i2;
	var array;
	i1 = this.iterator();
	i2 = other.iterator();
	array = new Array();
	while (i1.hasNext() && i2.hasNext()) {
		array.add(zipper(i1.next(), i2.next()));
	}
	return array;
};

reverse = nova_null;
List.prototype.join = function (delimiter) {
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
		str = str.concat(element.toString());
	}
	return str;
};

List.prototype.testLambda18 = function (_1) {
	return _1 == value;
};

List.prototype.accessor_iterator = function () {
	return null;
};

List.prototype.mutator_iterator = function () {
};

List.prototype.toArray = function () {
};

List.prototype.contains = function (value) {
};

List.prototype.forEach = function (func) {
};

List.prototype.map = function (mapFunc) {
};

List.prototype.any = function (anyFunc) {
};

List.prototype.all = function (allFunc) {
};

List.prototype.filter = function (filterFunc) {
};

List.prototype.take = function (howMany) {
};

List.prototype.skip = function (howMany) {
};

List.prototype.firstWhere = function (func) {
};

List.prototype.reverse = function () {
};

List.prototype.join = function (delimiter) {
};



