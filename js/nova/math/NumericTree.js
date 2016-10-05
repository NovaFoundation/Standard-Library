var NumericTree = function () {
	var self = this;
	
	this.root = nova_null;
	
	this.NumericTree = function (statement) {
		self.this(statement);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (statement) {
		self.root = new NumericOperation(statement);
	};
	
	this.toString = function () {
		return toString();
	};
	
	this.super = function () {
	};
	
	
};


