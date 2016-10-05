var Async = function () {
	
	
};

Async.prototype.Async = function () {
	this.this();
};

Async.prototype.destroy = function () {
};

Async.prototype.execute = function (func) {
	var result;
	result = new AsyncResult();
	func();
	return result;
};

Async.prototype.this = function () {
};

Async.prototype.super = function () {
};



