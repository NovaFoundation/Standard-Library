var List = function () {
	var self = this;
	
	this.size = 0;
	this.first = nova_null;
	this.last = nova_null;
	
	this.toArray = function () {
		var array;
		var nova_local_0;
		var value;
		array = new Array();
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			value = nova_local_0.next();
			array.add(value);
		}
		return array;
	};
	
	this.contains = function (value) {
		var contextArg18;
		return self.any(self.testLambda18);
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
		list = new Array();
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
		var list;
		var i;
		var nova_local_0;
		var value;
		list = new Array();
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			value = nova_local_0.next();
			if (i++ >= howMany) {
				return list;
			}
			list.add(value);
		}
		return list;
	};
	
	this.skip = function (howMany) {
		var list;
		var i;
		var nova_local_0;
		var value;
		list = new Array();
		i = 0;
		nova_local_0 = (self).iterator();
		while (nova_local_0.hasNext()) {
			value = nova_local_0.next();
			if (i++ >= howMany) {
				list.add(value);
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
	
	this.zip = function (other, zipper) {
		var i1;
		var i2;
		var array;
		i1 = self.iterator();
		i2 = other.iterator();
		array = new Array();
		while (i1.hasNext() && i2.hasNext()) {
			array.add(zipper(i1.next(), i2.next()));
		}
		return array;
	};
	
	reverse = nova_null;
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
	
	this.testLambda18 = function (_1) {
		return _1 == value;
	};
	
	this.accessor_iterator = function () {
		return null;
	};
	
	this.mutator_iterator = function () {
	};
	
	this.toArray = function () {
	};
	
	this.contains = function (value) {
	};
	
	this.forEach = function (func) {
	};
	
	this.map = function (mapFunc) {
	};
	
	this.any = function (anyFunc) {
	};
	
	this.all = function (allFunc) {
	};
	
	this.filter = function (filterFunc) {
	};
	
	this.take = function (howMany) {
	};
	
	this.skip = function (howMany) {
	};
	
	this.firstWhere = function (func) {
	};
	
	this.reverse = function () {
	};
	
	this.join = function (delimiter) {
	};
	
	
};


