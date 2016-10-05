var IntArray = function () {
	var self = this;
	
	
	this.IntArray = function () {
		self.this();
	};
	
	this.IntArray = function (count) {
		self.this(count);
	};
	
	this.IntArray = function (data, count) {
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
		filtered = new IntArray();
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
		list = new IntArray();
		i = 0;
		for (; i < howMany; i++) {
			list.add(self.data);
		}
		return list;
	};
	
	this.skip = function (howMany) {
		var list;
		var i;
		list = new IntArray();
		i = howMany;
		for (; i < self.count; i++) {
			list.add(self.data);
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
		return null;
	};
	
	this.reverse = function () {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new IntArray(self.count);
		array.count = self.count;
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			array.set(self.count - ++i, element);
		}
		return array;
	};
	
	this.join = function (delimiter) {
		var str;
		var passed;
		var nova_local_0;
		var element;
		str = "";
		passed = false;
		nova_local_0 = (self).iterator();
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
	
	this.accessor_iterator = function () {
		return new IntArrayIterator(self);
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
	
	
};


