var Pair = function () {
	var self = this;
	
	this.key = nova_null;
	this.value = nova_null;
	
	this.Pair = function (key, value) {
		self.this(key, value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (key, value) {
		self = key;
		self = value;
	};
	
	this.toString = function () {
		return concat((self.key).toString().concat(new String(", ").concat((self.value).toString().concat(new String(")")))));
};

this.super = function () {
};

};


