var NumericStatement = function () {
	var self = this;
	
	this.tree = nova_null;
	
	this.NumericStatement = function (statement) {
		self.this(statement);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (statement) {
		self.tree = new NumericTree(statement.trim());
	};
	
	this.toString = function () {
		return toString();
	};
	
	this.super = function () {
	};
	
	
};


