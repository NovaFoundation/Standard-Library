var ClientSocket = function () {
	this.socket = nova_null;
	this.connection = nova_null;
	
	
};

ClientSocket.prototype.ClientSocket = function () {
	this.this();
};

ClientSocket.prototype.destroy = function () {
};

ClientSocket.prototype.this = function () {
};

ClientSocket.prototype.connect = function (ipAddress, port) {
	this.socket = this.nova_clientsocket_connect(ipAddress.chars.data, port);
	if (this.socket == 0) {
		return false;
	}
	this.connection = new ConnectionSocket(this.socket);
	return true;
};

ClientSocket.prototype.close = function () {
	var result;
	result = this.nova_socket_close(this.socket);
	if (result == 0) {
		return false;
	}
	return true;
};

ClientSocket.prototype.super = function () {
};



