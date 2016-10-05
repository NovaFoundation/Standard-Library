var Short = function () {
	this.value = 0;
	
	
};

Short.prototype.Short = function (value) {
	this.this(value);
};

Short.prototype.destroy = function () {
};

Short.prototype.this = function (value) {
	this = value;
};

Short.prototype.numDigits = function (number) {
	return numDigits(number);
};

Short.prototype.toString = function (value) {
	return toString(value);
};

Short.prototype.toString = function () {
	return this.toString(this.value);
};

Short.prototype.compareTo = function (other) {
	return this.value - other;
};

Short.prototype.multiply = function (value) {
	return this * value;
};

Short.prototype.super = function () {
};



