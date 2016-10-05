var Pair = function () {
	this.key = nova_null;
	this.value = nova_null;
	
	
};

Pair.prototype.Pair = function (key, value) {
	this.this(key, value);
};

Pair.prototype.destroy = function () {
};

Pair.prototype.this = function (key, value) {
	this = key;
	this = value;
};

Pair.prototype.toString = function () {
	return concat((this.key).toString().concat(new String(", ").concat((this.value).toString().concat(new String(")")))));};

Pair.prototype.super = function () {
};



