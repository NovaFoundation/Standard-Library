var Long = function () {
	this.value = 0;
	
	
};

Long.prototype.Long = function (value) {
	this.this(value);
};

Long.prototype.destroy = function () {
};

Long.prototype.this = function (value) {
	this = value;
};

Long.prototype.numDigits = function (number) {
	var size;
	size = 1;
	if (number < 0) {
		size++;
	}
	number = number / 10;
	while (number != 0) {
		number = number / 10;
		size++;
	}
	return size;
};

Long.prototype.toString = function (value) {
	var charOffset;
	var digits;
	var data;
	var offset;
	var nums;
	var index;
	charOffset = '0';
	digits = this.numDigits(value);
	data = [];
	data = '\0';
	offset = 0;
	if (value < 0) {
		data = '-';
		offset = 1;
	}
	nums = digits-- - offset;
	index = 0;
	for (; index < nums; index++) {
		data = (charOffset + Math.abs(value % 10));
		value = value / 10;
	}
	return new String(data);
};

Long.prototype.toString = function () {
	return this.toString(this.value);
};

Long.prototype.compareTo = function (other) {
	return this.value - other;
};

Long.prototype.multiply = function (value) {
	return this * value;
};

Long.prototype.super = function () {
};


(function () {
		this.MAX_VALUE = 9223372036854775807;
		this.MIN_VALUE = -9223372036854775808;
})();

