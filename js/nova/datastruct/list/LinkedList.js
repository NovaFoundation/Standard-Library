var LinkedList = function () {
	this.start = nova_null;
	this.current = nova_null;
	this.size = 0;
	
	
};

LinkedList.prototype.LinkedList = function () {
	this.this();
};

LinkedList.prototype.destroy = function () {
};

LinkedList.prototype.addAll = function (data) {
	var nova_local_0;
	var d;
	nova_local_0 = (data).iterator();
	while (nova_local_0.hasNext()) {
		d = nova_local_0.next();
		this.add(d);
	}
	return this;
};

LinkedList.prototype.add = function (data) {
	var node;
	node = new ListNode(data);
	if (this.start == null) {
		this.start = node;
		this.current = node;
	} else {
		this.current.next = node;
	}
	this.current = node;
	this.size++;
	return this;
};

LinkedList.prototype.remove = function (data) {
	var prev;
	var cur;
	if (this.start.data == data) {
		this.start = this.start.next;
	}
	prev = this.start;
	cur = this.start.next;
	while (cur != null) {
		var d;
		d = cur.data;
		if (d == data) {
			prev.next = cur.next;
			this.size--;
		}
		cur = cur.next;
	}
	return this;
};

LinkedList.prototype.contains = function (value) {
	var contextArg17;
	return this.any(this.testLambda17);
};

LinkedList.prototype.toArray = function () {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new Array(this.size);
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.set(i++, element);
	}
	return array;
};

LinkedList.prototype.map = function (mapFunc) {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new LinkedList();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.add(mapFunc(element, i++, this));
	}
	return array;
};

LinkedList.prototype.forEach = function (func) {
	var i;
	var nova_local_0;
	var element;
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		func(element, i++, this);
	}
};

LinkedList.prototype.any = function (anyFunc) {
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

LinkedList.prototype.all = function (allFunc) {
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

LinkedList.prototype.filter = function (filterFunc) {
	var filtered;
	var i;
	var nova_local_0;
	var element;
	filtered = new LinkedList();
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

LinkedList.prototype.take = function (howMany) {
	var list;
	var nova_local_0;
	var element;
	if (howMany > this.size) {
		howMany = this.size;
	}
	list = new LinkedList();
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (list.size == howMany) {
			break;
		}
		list.add(element);
	}
	return list;
};

LinkedList.prototype.skip = function (howMany) {
	var list;
	var i;
	var nova_local_0;
	var element;
	list = new Array();
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		if (i++ > howMany) {
			list.add(element);
		}
	}
	return list;
};

LinkedList.prototype.firstWhere = function (func) {
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

LinkedList.prototype.reverse = function () {
	var list;
	var prev;
	var current;
	var next;
	list = new LinkedList();
	prev = null;
	current = null;
	next = null;
	if (this.start != null) {
		current = this.start.clone();
	}
	while (current != null) {
		next = current.next;
		current.next = null;
		if (next != null) {
			next = next.clone();
		}
		if (prev != null) {
			current.next = prev.clone();
		}
		prev = current;
		current = next;
	}
	list.start = prev;
	return list;
};

LinkedList.prototype.join = function (delimiter) {
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

LinkedList.prototype.this = function () {
};

LinkedList.prototype.testLambda17 = function (_1) {
	return _1 == value;
};

LinkedList.prototype.accessor_iterator = function () {
	return new LinkedListIterator(this);
};

LinkedList.prototype.mutator_iterator = function () {
};

LinkedList.prototype.accessor_first = function () {
	return this.start;
};

LinkedList.prototype.mutator_first = function () {
};

LinkedList.prototype.accessor_last = function () {
	return this.current;
};

LinkedList.prototype.mutator_last = function () {
};

LinkedList.prototype.super = function () {
};



