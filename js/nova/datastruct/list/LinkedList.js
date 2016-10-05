var LinkedList = function () {
	var self = this;
	
	this.start = nova_null;
	this.current = nova_null;
	this.size = 0;
	
	this.LinkedList = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.addAll = function (data) {
		var nova_local_0;
		var d;
		nova_local_0 = (data).iterator();
		while (nova_local_0.hasNext()) {
			d = nova_local_0.next();
			self.add(d);
		}
		return self;
	};
	
	this.add = function (data) {
		var node;
		node = new ListNode(data);
		if (self.start == null) {
			self.start = node;
			self.current = node;
		} else {
			self.current.next = node;
		}
		self.current = node;
		self.size++;
		return self;
	};
	
	this.remove = function (data) {
		var prev;
		var cur;
		if (self.start.data == data) {
			self.start = self.start.next;
		}
		prev = self.start;
		cur = self.start.next;
		while (cur != null) {
			var d;
			d = cur.data;
			if (d == data) {
				prev.next = cur.next;
				self.size--;
			}
			cur = cur.next;
		}
		return self;
	};
	
	this.contains = function (value) {
		var contextArg17;
		return self.any(self.testLambda17);
	};
	
	this.toArray = function () {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new Array(self.size);
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			array.set(i++, element);
		}
		return array;
	};
	
	this.map = function (mapFunc) {
		var array;
		var i;
		var nova_local_0;
		var element;
		array = new LinkedList();
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
		var nova_local_0;
		var element;
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			func(element, i++, self);
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
		filtered = new LinkedList();
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
		var nova_local_0;
		var element;
		if (howMany > self.size) {
			howMany = self.size;
		}
		list = new LinkedList();
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			if (list.size == howMany) {
				break;
			}
			list.add(element);
		}
		return list;
	};
	
	this.skip = function (howMany) {
		var list;
		var i;
		var nova_local_0;
		var element;
		list = new Array();
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			element = nova_local_0.next();
			if (i++ > howMany) {
				list.add(element);
			}
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
		var list;
		var prev;
		var current;
		var next;
		list = new LinkedList();
		prev = null;
		current = null;
		next = null;
		if (self.start != null) {
			current = self.start.clone();
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
			str = str.concat(element.toString());
		}
		return str;
	};
	
	this.this = function () {
	};
	
	this.testLambda17 = function (_1) {
		return _1 == value;
	};
	
	this.accessor_iterator = function () {
		return new LinkedListIterator(self);
	};
	
	this.mutator_iterator = function () {
	};
	
	this.accessor_first = function () {
		return self.start;
	};
	
	this.mutator_first = function () {
	};
	
	this.accessor_last = function () {
		return self.current;
	};
	
	this.mutator_last = function () {
	};
	
	this.super = function () {
	};
	
	
};


