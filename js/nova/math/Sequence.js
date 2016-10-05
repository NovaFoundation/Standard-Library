var Sequence = function () {
	var self = this;
	
	this.values = nova_null;
	
	this.Sequence = function (values) {
		self.this(values);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (values) {
		self = values;
	};
	
	this.sum = function (num) {
		var value;
		var i;
		value = 0;
		i = 0;
		for (; i < num; i++) {
			value = value + self.values.get(i);
		}
		return value;
	};
	
	this.super = function () {
	};
	
	
};

(function () {
		self.INFINITE = -1;
})();

