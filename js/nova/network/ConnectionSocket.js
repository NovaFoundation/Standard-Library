var ConnectionSocket = function () {
	this.inputBuffer = nova_null;
	this.socket = nova_null;
	this.connected = 0;
	this.in = nova_null;
	this.out = nova_null;
	
	
};

ConnectionSocket.prototype.ConnectionSocket = function (socket) {
	this.this(socket);
};

ConnectionSocket.prototype.destroy = function () {
};

ConnectionSocket.prototype.this = function (socket) {
	this = socket;
	this.in = new NetworkInputStream(this);
	this.out = new NetworkOutputStream(this);
	this.connected = true;
};

ConnectionSocket.prototype.close = function () {
	this.connected = false;
	this.nova_socket_close(this.socket);
};

ConnectionSocket.prototype.validateConnection = function () {
	var message;
	if (!this.connected) {
		return this.connected;
	}
	message = this.readString(false);
	if (this.connected) {
		this.inputBuffer.enqueue(message);
	}
	return this.connected;
};

ConnectionSocket.prototype.readString = function () {
	return this.readString(true);
};

ConnectionSocket.prototype.readString = function (checkBuffer) {
	if (!checkBuffer || this.inputBuffer.accessor_empty()) {
		var data;
		data = this.nova_socket_receive(this.socket);
		if (data == 0) {
			this.connected = false;
			return null;
		}
		return new String(data);
	}
	return dequeue();
};

ConnectionSocket.prototype.write = function (data) {
	var success;
	success = this.nova_socket_send(this.socket, data.chars.data) == 1;
	return success;
};

ConnectionSocket.prototype.super = function () {
	this.inputBuffer = new Queue();
};



