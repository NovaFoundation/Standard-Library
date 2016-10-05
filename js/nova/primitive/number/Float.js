var Float = function () {
	var self = this;
	
	this.value = 0;
	
	this.Float = function (value) {
		self.this(value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (value) {
		self = value;
	};
	
	this.numDigits = function (number) {
		return numDigits(number);
	};
	
	this.toString = function (value) {
		return toString(value);
	};
	
	this.toString = function () {
		return self.toString(self.value);
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


