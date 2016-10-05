var Bool = function () {
	this.value = 0;
	
	
};

Bool.prototype.Bool = function (value) {
	this.this(value);
};

Bool.prototype.destroy = function () {
};

Bool.prototype.this = function (value) {
	this = value;
};

Bool.prototype.toString = function (value) {
	if (value) {
		return "true";
	}
	return "false";
};

Bool.prototype.toString = function () {
	return this.toString(this.value);
};

Bool.prototype.compareTo = function (other) {
	return this.value == other;
};

Bool.prototype.super = function () {
};



