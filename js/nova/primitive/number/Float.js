var Float = function () {
	this.value = 0;
	
	
};

Float.prototype.Float = function (value) {
	this.this(value);
};

Float.prototype.destroy = function () {
};

Float.prototype.this = function (value) {
	this = value;
};

Float.prototype.numDigits = function (number) {
	return numDigits(number);
};

Float.prototype.toString = function (value) {
	return toString(value);
};

Float.prototype.toString = function () {
	return this.toString(this.value);
};

Float.prototype.compareTo = function (other) {
	return this.value - other;
};

Float.prototype.multiply = function (value) {
	return this * value;
};

Float.prototype.super = function () {
};



