var Math = function () {
	
	
};

Math.prototype.Math = function () {
	this.this();
};

Math.prototype.destroy = function () {
};

Math.prototype.max = function (a, b) {
	return ;
};

Math.prototype.min = function (a, b) {
	return ;
};

Math.prototype.sign = function (num) {
	if (num > 0) {
		return 1;
	} else {
		return -1;
	}
	return 0;
};

Math.prototype.random = function (range) {
	return this.extRand() % range;
};

Math.prototype.abs = function (number) {
	return this.extAbs(number);
};

Math.prototype.abs = function (number) {
	return this.extFabs(number);
};

Math.prototype.sqrt = function (number) {
	return this.extSqrt(number);
};

Math.prototype.pow = function (base, power) {
	return this.extPow(base, power);
};

Math.prototype.sin = function (number) {
	return this.extSin(number);
};

Math.prototype.cos = function (number) {
	return this.extCos(number);
};

Math.prototype.tan = function (number) {
	return this.extTan(number);
};

Math.prototype.asin = function (number) {
	return this.extAsin(number);
};

Math.prototype.acos = function (number) {
	return this.extAcos(number);
};

Math.prototype.atan = function (number) {
	return this.extAtan(number);
};

Math.prototype.round = function (number) {
	return this.floor(number + 0.5);
};

Math.prototype.floor = function (number) {
	return this.extFloor(number);
};

Math.prototype.ceil = function (number) {
	return this.extCeil(number);
};

Math.prototype.this = function () {
};

Math.prototype.super = function () {
};


(function () {
		this.PI = 3.141592653;
})();

