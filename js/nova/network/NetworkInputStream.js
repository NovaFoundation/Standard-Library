var NetworkInputStream = function () {
	var self = this;
	
	this.socket = nova_null;
	
	this.NetworkInputStream = function (socket) {
		self.this(socket);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (socket) {
		self = socket;
	};
	
	this.readString = function () {
		return readString();
	};
	
	this.readBytes = function () {
		return null;
	};
	
	this.super = function () {
	};
	
	
};


