var ServerSocket = function () {
	this.serverSocket = nova_null;
	this.open = 0;
	this.requests = nova_null;
	
	
};

ServerSocket.prototype.ServerSocket = function () {
	this.this();
};

ServerSocket.prototype.destroy = function () {
};

ServerSocket.prototype.this = function () {
	this.open = false;
};

ServerSocket.prototype.start = function (port) {
	this.serverSocket = this.nova_serversocket_start(port);
	if (this.serverSocket == 0) {
		return false;
	}
	this.open = true;
	return true;
};

ServerSocket.prototype.close = function () {
	var result;
	result = this.nova_socket_close(this.serverSocket);
	if (result == 0) {
		return false;
	}
	this.open = false;
	return true;
};

ServerSocket.prototype.acceptClient = function () {
	var clientSocket;
	var socket;
	clientSocket = this.nova_serversocket_accept(this.serverSocket);
	if (clientSocket == 0) {
		return null;
	}
	socket = new ConnectionSocket(clientSocket);
	return socket;
};

ServerSocket.prototype.super = function () {
	this.requests = new Array();
};



