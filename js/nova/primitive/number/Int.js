var Int = function () {
	this.value = 0;
	
	
};

Int.prototype.Int = function (value) {
	this.this(value);
};

Int.prototype.destroy = function () {
};

Int.prototype.this = function (value) {
	this = value;
};

Int.prototype.getHashCodeLong = function () {
	return this.value;
};

Int.prototype.numDigits = function (number) {
	return numDigits(number);
};

Int.prototype.toString = function (value) {
	return toString(value);
};

Int.prototype.toString = function () {
	return this.toString(this.value);
};

Int.prototype.parseInt = function (num) {
	return this.atoi(num.chars.data);
};

Int.prototype.compareTo = function (other) {
	return this.value - other;
};

Int.prototype.multiply = function (value) {
	return this * value;
};

Int.prototype.super = function () {
};


(function () {
		this.MAX_VALUE = 2147483647;
		this.MIN_VALUE = -2147483648;
})();

