var CharArray = function () {
	var self = this;
	
	
	this.CharArray = function () {
		self.this();
	};
	
	this.CharArray = function (count) {
		self.this(count);
	};
	
	this.CharArray = function (data, count) {
		self.this(data, count);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.this();
	};
	
	this.this = function (count) {
		self.this(count);
	};
	
	this.get = function (index) {
		return (self.data);
	};
	
	this.set = function (index, value) {
		(self.data) = value;
	};
	
	this.this = function (data, count) {
		self.this(data, count);
	};
	
	this.map = function (mapFunc) {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new Array();
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
			func(self.get(i), i, self);
		}
	};
	
	this.any = function (anyFunc) {
		var nova_local_0;
		var element;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			if (anyFunc(element)) {
				return true;
			}
		}
		return false;
	};
	
	this.all = function (allFunc) {
		var nova_local_0;
		var element;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			if (!allFunc(element)) {
				return false;
			}
		}
		return true;
	};
	
	this.filter = function (filterFunc) {
		var filtered;
		var i;
		var nova_local_0;
		var element;
		filtered = new CharArray();
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
		if (howMany > self.count) {
			howMany = self.count;
		}
		list = new CharArray();
		i = 0;
		for (; i < howMany; i++) {
			list.add(self.get(i));
		}
		return list;
	};
	
	this.skip = function (howMany) {
		var list;
		var i;
		list = new CharArray();
		i = howMany;
		for (; i < self.count; i++) {
			list.add(self.get(i));
		}
		return list;
	};
	
	this.firstWhere = function (func) {
		var nova_local_0;
		var element;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			if (func(element)) {
				return element;
			}
		}
		return 0;
	};
	
	this.reverse = function () {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new CharArray(self.count);
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			array.set(self.count - ++i, element);
		}
		return array;
	};
	
	this.accessor_iterator = function () {
		return new CharArrayIterator(self);
	};
	
	this.mutator_iterator = function () {
	};
	
	this.accessor_first = function () {
		if (self.count > 0) {
			return self.data;
		}
		return 0;
	};
	
	this.mutator_first = function () {
	};
	
	this.accessor_last = function () {
		if (self.count > 0) {
			return self.data;
		}
		return 0;
	};
	
	this.accessor_hashCodeLong = function () {
		var hash;
		var i;
		hash = 0;
		i = 0;
		for (; i < self.count; i++) {
			hash = 31 * hash + self.get(i);
		}
		return hash;
	};
	
	this.mutator_hashCodeLong = function () {
	};
	
	this.super = function () {
	};
	
	
};


