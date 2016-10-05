var StatementGroup = function () {
	var self = this;
	
	this.statement = nova_null;
	this.bounds = nova_null;
	
	this.StatementGroup = function (statement, bounds) {
		self.this(statement, bounds);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (statement, bounds) {
		self = statement;
		self = bounds;
	};
	
	this.super = function () {
	};
	
	
};


