var No3 = function () {
	var self = this;
	
	
	this.No3 = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.select = function (selection) {
		return new No3Select(selection);
	};
	
	this.selectAll = function (selection) {
		return new No3SelectAll(selection);
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	
};


