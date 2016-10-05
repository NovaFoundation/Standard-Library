var StatementGroup = function () {
	this.statement = nova_null;
	this.bounds = nova_null;
	
	
};

StatementGroup.prototype.StatementGroup = function (statement, bounds) {
	this.this(statement, bounds);
};

StatementGroup.prototype.destroy = function () {
};

StatementGroup.prototype.this = function (statement, bounds) {
	this = statement;
	this = bounds;
};

StatementGroup.prototype.super = function () {
};



