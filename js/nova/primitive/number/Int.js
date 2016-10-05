var Int = function () {
	var self = this;
	
	this.value = 0;
	
	this.Int = function (value) {
		self.this(value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (value) {
		self = value;
	};
	
	this.getHashCodeLong = function () {
		return self.value;
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
	
	this.parseInt = function (num) {
		return self.atoi(num.chars.data);
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

(function () {
		self.MAX_VALUE = 2147483647;
		self.MIN_VALUE = -2147483648;
})();

