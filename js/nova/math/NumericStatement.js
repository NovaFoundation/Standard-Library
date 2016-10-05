var NumericStatement = function () {
	this.tree = nova_null;
	
	
};

NumericStatement.prototype.NumericStatement = function (statement) {
	this.this(statement);
};

NumericStatement.prototype.destroy = function () {
};

NumericStatement.prototype.this = function (statement) {
	this.tree = new NumericTree(statement.trim());
};

NumericStatement.prototype.toString = function () {
	return toString();
};

NumericStatement.prototype.super = function () {
};



