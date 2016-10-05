var IntRange = function () {
	var self = this;
	
	this.start = 0;
	this.end = 0;
	
	this.IntRange = function () {
		self.this();
	};
	
	this.IntRange = function (start, end) {
		self.this(start, end);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.this(0, 0);
	};
	
	this.this = function (start, end) {
		self = start;
		self = end;
	};
	
	this.contains = function (value) {
		return value >= self.start && value < self.end;
	};
	
	this.toArray = function () {
		var ints;
		var i;
		ints = new IntArray(self.accessor_size());
		i = self.start;
		while (i < self.end) {
			ints.set(i - self.start, i++);
		}
		return ints;
	};
	
	this.forEach = function (func) {
		var i;
		var nova_local_0;
		var value;
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			value = nova_local_0.next();
			func(value, i++, self);
		}
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
		var list;
		var i;
		var nova_local_0;
		var value;
		list = new IntArray();
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			value = nova_local_0.next();
			if (filterFunc(value, i++, self)) {
				list.add(value);
			}
		}
		return list;
	};
	
	this.take = function (howMany) {
		return new IntRange(self.start, Math.min(self.start + howMany, self.end));
	};
	
	this.skip = function (howMany) {
		return new IntRange(Math.min(self.start + howMany, self.end), self.end);
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
		return new IntRange(self.end, self.start);
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
	
	this.toString = function () {
		return concat(new String("..").concat(Int.toString((self.end)).concat(new String(""))));
	};
	
	this.accessor_first = function () {
		return self.start;
	};
	
	this.mutator_first = function () {
	};
	
	this.accessor_last = function () {
		return self.end - 1;
	};
	
	this.mutator_last = function () {
	};
	
	this.accessor_size = function () {
		return self.end - self.start;
	};
	
	this.mutator_size = function () {
	};
	
	this.accessor_iterator = function () {
		return new IntRangeIterator(self);
	};
	
	this.mutator_iterator = function () {
	};
	
	this.super = function () {
	};
	
	
};


