var Array = function () {
	this.capacity = 0;
	this.count = 0;
	this.position = 0;
	this.data = nova_null;
	
	
};

Array.prototype.Array = function () {
	this.this();
};

Array.prototype.Array = function (count) {
	this.this(count);
};

Array.prototype.Array = function (data, count) {
	this.this(data, count);
};

Array.prototype.destroy = function () {
};

Array.prototype.this = function () {
	this.this(0);
	this.increaseSize(10);
};

Array.prototype.this = function (count) {
	this = 0;
	this = 0;
	this.increaseSize(count);
	this = count;
};

Array.prototype.this = function (data, count) {
	var i;
	this.this(count);
	i = 0;
	for (; i < count; i++) {
		this.add(data);
	}
};

Array.prototype.fillRemaining = function (value) {
	while (this.count < this.capacity) {
		this.add(value);
	}
	return this;
};

Array.prototype.addAll = function (data) {
	var nova_local_0;
	var d;
	nova_local_0 = (this.data).iterator();
	while (nova_local_0.hasNext()) {
		d = nova_local_0.next();
		this.add(d);
	}
	return this;
};

Array.prototype.add = function (element) {
	if (this.position >= this.capacity) {
		this.increaseSize();
	}
	this.data = element;
	this.count = Math.max(this.position, this.count);
	return this;
};

Array.prototype.add = function (index, element) {
	if (index >= this.capacity) {
		this.increaseSize(index + 1);
	}
	this.add(null);
	this.shiftRight(index, this.position);
	this.data = element;
	if (index >= this.position - 1) {
		this.position = index + 1;
	}
	this.count = Math.max(this.position, this.count);
};

Array.prototype.remove = function (index) {
	var element;
	element = this.data;
	this.shiftLeft(index + 1, this.position--);
	return element;
};

Array.prototype.remove = function (element) {
	var index;
	index = this.indexOf(element);
	if (index >= 0) {
		this.shiftLeft(index + 1, this.position--);
		return element;
	}
	return null;
};

Array.prototype.indexOf = function (element) {
	var i;
	var nova_local_0;
	var e;
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		e = nova_local_0.next();
		if (element == e) {
			return i;
		}
		i++;
	}
	return -1;
};

Array.prototype.shiftRight = function (left, right) {
	var i;
	i = right - 1;
	while (i > left) {
		this.data = this.data;
		i--;
	}
	this.data = null;
};

Array.prototype.shiftLeft = function (left, right) {
	var i;
	left--;
	right--;
	i = left;
	for (; i < right; i++) {
		this.data = this.data;
	}
	this.data = null;
};

Array.prototype.swap = function (index1, index2) {
	var temp;
	temp = this.data;
	this.data = this.data;
	this.data = temp;
};

Array.prototype.increaseSize = function () {
	this.increaseSize(this.capacity + 3);
};

Array.prototype.increaseSize = function (count) {
	var offset;
	var tmp;
	var i;
	offset = count - this.capacity;
	this.capacity = count;
	tmp = [];
	this.arrayCopy(tmp, 0, this.data, 0, this, this.capacity, 4);
	this.data = tmp;
	i = (this.capacity - offset);
	for (; i < this.capacity; i++) {
		this.data = null;
	}
};

Array.prototype.get = function (index) {
	return this.data;
};

Array.prototype.set = function (index, value) {
	this.data = value;
};

Array.prototype.toArray = function () {
	var array;
	var i;
	array = new Array(this.count);
	i = 0;
	for (; i < this.count; i++) {
		array.set(i, this.data);
	}
	return array;
};

Array.prototype.map = function (mapFunc) {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new Array(this.count);
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.add(mapFunc(element, i++, this));
	}
	return array;
};

Array.prototype.forEach = function (func) {
	var i;
	i = 0;
	for (; i < this.count; i++) {
		func(this.data, i, this);
	}
};

Array.prototype.filter = function (filterFunc) {
	var filtered;
	var i;
	var nova_local_0;
	var element;
	filtered = new Array();
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

Array.prototype.take = function (howMany) {
	var list;
	var i;
	howMany = ;
	list = new Array();
	i = 0;
	for (; i < howMany; i++) {
		list.add(this.data);
	}
	return list;
};

Array.prototype.skip = function (howMany) {
	var list;
	var i;
	list = new Array();
	i = howMany;
	for (; i < this.count; i++) {
		list.add(this.data);
	}
	return list;
};

Array.prototype.sumSize = function () {
	var sum;
	var nova_local_0;
	var value;
	sum = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		value = nova_local_0.next();
		sum = sum + (value).count;
	}
	return sum;
};

Array.prototype.reverse = function () {
	var array;
	var i;
	var nova_local_0;
	var element;
	array = new Array(this.count);
	i = 0;
	nova_local_0 = (this).iterator();
	while (nova_local_0.hasNext()) {
		element = nova_local_0.next();
		array.data = element;
	}
	return array;
};

Array.prototype.toString = function () {
	return concat((this.join(new String(", "))).concat(new String("]")));
};

Array.prototype.accessor_empty = function () {
	return this.count <= 0;
};

Array.prototype.mutator_empty = function () {
};

Array.prototype.accessor_iterator = function () {
	return new ArrayIterator(this);
};

Array.prototype.mutator_iterator = function () {
};

Array.prototype.accessor_first = function () {
	if (this.count > 0) {
		return this.data;
	}
	return null;
};

Array.prototype.mutator_first = function () {
};

Array.prototype.accessor_last = function () {
	if (this.count > 0) {
		return this.data;
	}
	return null;
};

Array.prototype.super = function () {
};

Array.prototype.get = function (index) {
};

Array.prototype.set = function (index, value) {
};

Array.prototype.first = function () {
};

Array.prototype.last = function () {
};



