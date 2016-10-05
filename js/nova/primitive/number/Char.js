var Char = function () {
	var self = this;
	
	this.value = 0;
	
	this.Char = function (value) {
		self.this(value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (value) {
		self = value;
	};
	
	this.toString = function (c) {
		return new String(c);
	};
	
	this.toString = function () {
		return self.toString(self.value);
	};
	
	this.toLowerCase = function () {
		return self.toLowerCase(self.value);
	};
	
	this.toUpperCase = function () {
		return self.toUpperCase(self.value);
	};
	
	this.toLowerCase = function (c) {
		var id;
		id = c;
		if (id >= 65 && id <= 90) {
			return (id + 32);
		}
		return c;
	};
	
	this.toUpperCase = function (c) {
		var id;
		id = c;
		if (id >= 97 && id <= 122) {
			return (id - 32);
		}
		return c;
	};
	
	this.compareTo = function (other) {
		return self.value - other;
	};
	
	this.multiply = function (value) {
		return self * value;
	};
	
	this.super = function () {
	};
	
	
};


