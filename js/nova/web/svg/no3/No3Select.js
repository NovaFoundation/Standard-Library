var No3Select = function () {
	this.selection = nova_null;
	
	
};

No3Select.prototype.No3Select = function (selection) {
	this.this(selection);
};

No3Select.prototype.destroy = function () {
};

No3Select.prototype.this = function (selection) {
	this = selection;
};

No3Select.prototype.toJs = function () {
	return concat((this.selection).concat(new String("')")));};

No3Select.prototype.super = function () {
};



