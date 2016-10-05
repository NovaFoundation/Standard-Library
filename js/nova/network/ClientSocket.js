var ClientSocket = function () {
	var self = this;
	
	this.socket = nova_null;
	this.connection = nova_null;
	
	this.ClientSocket = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
	};
	
	this.connect = function (ipAddress, port) {
		self.socket = self.nova_clientsocket_connect(ipAddress.chars.data, port);
		if (self.socket == 0) {
			return false;
		}
		self.connection = new ConnectionSocket(self.socket);
		return true;
	};
	
	this.close = function () {
		var result;
		result = self.nova_socket_close(self.socket);
		if (result == 0) {
			return false;
		}
		return true;
	};
	
	this.super = function () {
	};
	
	
};


