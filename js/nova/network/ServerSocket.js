var ServerSocket = function () {
	var self = this;
	
	this.serverSocket = nova_null;
	this.open = 0;
	this.requests = nova_null;
	
	this.ServerSocket = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.open = false;
	};
	
	this.start = function (port) {
		self.serverSocket = self.nova_serversocket_start(port);
		if (self.serverSocket == 0) {
			return false;
		}
		self.open = true;
		return true;
	};
	
	this.close = function () {
		var result;
		result = self.nova_socket_close(self.serverSocket);
		if (result == 0) {
			return false;
		}
		self.open = false;
		return true;
	};
	
	this.acceptClient = function () {
		var clientSocket;
		var socket;
		clientSocket = self.nova_serversocket_accept(self.serverSocket);
		if (clientSocket == 0) {
			return null;
		}
		socket = new ConnectionSocket(clientSocket);
		return socket;
	};
	
	this.super = function () {
		self.requests = new Array();
	};
	
	
};


