var Bool = function () {
	var self = this;
	
	this.value = 0;
	
	this.Bool = function (value) {
		self.this(value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (value) {
		self = value;
	};
	
	this.toString = function (value) {
		if (value) {
			return "true";
		}
		return "false";
	};
	
	this.toString = function () {
		return self.toString(self.value);
	};
	
	this.compareTo = function (other) {
		return self.value == other;
	};
	
	this.super = function () {
	};
	
	
};


