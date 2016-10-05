var NetworkOutputStream = function () {
	var self = this;
	
	this.socket = nova_null;
	
	this.NetworkOutputStream = function (socket) {
		self.this(socket);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (socket) {
		self = socket;
	};
	
	this.write = function (data) {
		return write(data);
	};
	
	this.write = function (data) {
		return false;
	};
	
	this.super = function () {
	};
	
	
};


