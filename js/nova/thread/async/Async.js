var Async = function () {
	var self = this;
	
	
	this.Async = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.execute = function (func) {
		var result;
		result = new AsyncResult();
		func();
		return result;
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	
};


