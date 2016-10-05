var Array = function () {
	var self = this;
	
	this.capacity = 0;
	this.count = 0;
	this.position = 0;
	this.data = nova_null;
	
	this.Array = function () {
		self.this();
	};
	
	this.Array = function (count) {
		self.this(count);
	};
	
	this.Array = function (data, count) {
		self.this(data, count);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.this(0);
		self.increaseSize(10);
	};
	
	this.this = function (count) {
		self = 0;
		self = 0;
		self.increaseSize(count);
		self = count;
	};
	
	this.this = function (data, count) {
		var i;
		self.this(count);
		i = 0;
		for (; i < count; i++) {
			self.add(data);
		}
	};
	
	this.fillRemaining = function (value) {
		while (self.count < self.capacity) {
			self.add(value);
		}
		return self;
	};
	
	this.addAll = function (data) {
		var nova_local_0;
		var d;
		nova_local_0 = (self.data).iterator();
		while (nova_local_0.hasNext()) {
			d = nova_local_0.next();
			self.add(d);
		}
		return self;
	};
	
	this.add = function (element) {
		if (self.position >= self.capacity) {
			self.increaseSize();
		}
		self.data = element;
		self.count = Math.max(self.position, self.count);
		return self;
	};
	
	this.add = function (index, element) {
		if (index >= self.capacity) {
			self.increaseSize(index + 1);
		}
		self.add(null);
		self.shiftRight(index, self.position);
		self.data = element;
		if (index >= self.position - 1) {
			self.position = index + 1;
		}
		self.count = Math.max(self.position, self.count);
	};
	
	this.remove = function (index) {
		var element;
		element = self.data;
		self.shiftLeft(index + 1, self.position--);
		return element;
	};
	
	this.remove = function (element) {
		var index;
		index = self.indexOf(element);
		if (index >= 0) {
			self.shiftLeft(index + 1, self.position--);
			return element;
		}
		return null;
	};
	
	this.indexOf = function (element) {
		var i;
		var nova_local_0;
		var e;
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			e = nova_local_0.next();
			if (element == e) {
				return i;
			}
			i++;
		}
		return -1;
	};
	
	this.shiftRight = function (left, right) {
		var i;
		i = right - 1;
		while (i > left) {
			self.data = self.data;
			i--;
		}
		self.data = null;
	};
	
	this.shiftLeft = function (left, right) {
		var i;
		left--;
		right--;
		i = left;
		for (; i < right; i++) {
			self.data = self.data;
		}
		self.data = null;
	};
	
	this.swap = function (index1, index2) {
		var temp;
		temp = self.data;
		self.data = self.data;
		self.data = temp;
	};
	
	this.increaseSize = function () {
		self.increaseSize(self.capacity + 3);
	};
	
	this.increaseSize = function (count) {
		var offset;
		var tmp;
		var i;
		offset = count - self.capacity;
		self.capacity = count;
		tmp = [];
		self.arrayCopy(tmp, 0, self.data, 0, self, self.capacity, 4);
		self.data = tmp;
		i = (self.capacity - offset);
		for (; i < self.capacity; i++) {
			self.data = null;
		}
	};
	
	this.get = function (index) {
		return self.data;
	};
	
	this.set = function (index, value) {
		self.data = value;
	};
	
	this.toArray = function () {
		var array;
		var i;
		array = new Array(self.count);
		i = 0;
		for (; i < self.count; i++) {
			array.set(i, self.data);
		}
		return array;
	};
	
	this.map = function (mapFunc) {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new Array(self.count);
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			array.add(mapFunc(element, i++, self));
		}
		return array;
	};
	
	this.forEach = function (func) {
		var i;
		i = 0;
		for (; i < self.count; i++) {
			func(self.data, i, self);
		}
	};
	
	this.filter = function (filterFunc) {
		var filtered;
		var i;
		var nova_local_0;
		var element;
		filtered = new Array();
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			if (filterFunc(element, i++, self)) {
				filtered.add(element);
			}
		}
		return filtered;
	};
	
	this.take = function (howMany) {
		var list;
		var i;
		howMany = ;
		list = new Array();
		i = 0;
		for (; i < howMany; i++) {
			list.add(self.data);
		}
		return list;
	};
	
	this.skip = function (howMany) {
		var list;
		var i;
		list = new Array();
		i = howMany;
		for (; i < self.count; i++) {
			list.add(self.data);
		}
		return list;
	};
	
	this.sumSize = function () {
		var sum;
		var nova_local_0;
		var value;
		sum = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			value = nova_local_0.next();
			sum = sum + (value).count;
		}
		return sum;
	};
	
	this.reverse = function () {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new Array(self.count);
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			array.data = element;
		}
		return array;
	};
	
	this.toString = function () {
		return concat((self.join(new String(", "))).concat(new String("]")));
	};
	
	this.accessor_empty = function () {
		return self.count <= 0;
	};
	
	this.mutator_empty = function () {
	};
	
	this.accessor_iterator = function () {
		return new ArrayIterator(self);
	};
	
	this.mutator_iterator = function () {
	};
	
	this.accessor_first = function () {
		if (self.count > 0) {
			return self.data;
		}
		return null;
	};
	
	this.mutator_first = function () {
	};
	
	this.accessor_last = function () {
		if (self.count > 0) {
			return self.data;
		}
		return null;
	};
	
	this.super = function () {
	};
	
	this.get = function (index) {
	};
	
	this.set = function (index, value) {
	};
	
	this.first = function () {
	};
	
	this.last = function () {
	};
	
	
};


