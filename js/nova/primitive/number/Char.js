var Char = function () {
	this.value = 0;
	
	
};

Char.prototype.Char = function (value) {
	this.this(value);
};

Char.prototype.destroy = function () {
};

Char.prototype.this = function (value) {
	this = value;
};

Char.prototype.toString = function (c) {
	return new String(c);
};

Char.prototype.toString = function () {
	return this.toString(this.value);
};

Char.prototype.toLowerCase = function () {
	return this.toLowerCase(this.value);
};

Char.prototype.toUpperCase = function () {
	return this.toUpperCase(this.value);
};

Char.prototype.toLowerCase = function (c) {
	var id;
	id = c;
	if (id >= 65 && id <= 90) {
		return (id + 32);
	}
	return c;
};

Char.prototype.toUpperCase = function (c) {
	var id;
	id = c;
	if (id >= 97 && id <= 122) {
		return (id - 32);
	}
	return c;
};

Char.prototype.compareTo = function (other) {
	return this.value - other;
};

Char.prototype.multiply = function (value) {
	return this * value;
};

Char.prototype.super = function () {
};



