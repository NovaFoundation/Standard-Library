var LogicalStatement = function () {
	var self = this;
	
	this.statement = nova_null;
	this.components = nova_null;
	
	this.LogicalStatement = function (statement) {
		self.this(statement);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (statement) {
		self = statement;
		self.components = new Array();
	};
	
	this.toString = function () {
		return self.statement;
	};
	
	this.super = function () {
	};
	
	
};


