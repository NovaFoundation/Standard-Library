var LogicalStatement = function () {
	this.statement = nova_null;
	this.components = nova_null;
	
	
};

LogicalStatement.prototype.LogicalStatement = function (statement) {
	this.this(statement);
};

LogicalStatement.prototype.destroy = function () {
};

LogicalStatement.prototype.this = function (statement) {
	this = statement;
	this.components = new Array();
};

LogicalStatement.prototype.toString = function () {
	return this.statement;
};

LogicalStatement.prototype.super = function () {
};



