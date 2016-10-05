var Sequence = function () {
	this.values = nova_null;
	
	
};

Sequence.prototype.Sequence = function (values) {
	this.this(values);
};

Sequence.prototype.destroy = function () {
};

Sequence.prototype.this = function (values) {
	this = values;
};

Sequence.prototype.sum = function (num) {
	var value;
	var i;
	value = 0;
	i = 0;
	for (; i < num; i++) {
		value = value + this.values.get(i);
	}
	return value;
};

Sequence.prototype.super = function () {
};


(function () {
		this.INFINITE = -1;
})();

