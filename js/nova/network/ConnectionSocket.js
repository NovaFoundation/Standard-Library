var ConnectionSocket = function () {
	var self = this;
	
	this.inputBuffer = nova_null;
	this.socket = nova_null;
	this.connected = 0;
	this.in = nova_null;
	this.out = nova_null;
	
	this.ConnectionSocket = function (socket) {
		self.this(socket);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (socket) {
		self = socket;
		self.in = new NetworkInputStream(self);
		self.out = new NetworkOutputStream(self);
		self.connected = true;
	};
	
	this.close = function () {
		self.connected = false;
		self.nova_socket_close(self.socket);
	};
	
	this.validateConnection = function () {
		var message;
		if (!self.connected) {
			return self.connected;
		}
		message = self.readString(false);
		if (self.connected) {
			self.inputBuffer.enqueue(message);
		}
		return self.connected;
	};
	
	this.readString = function () {
		return self.readString(true);
	};
	
	this.readString = function (checkBuffer) {
		if (!checkBuffer || self.inputBuffer.accessor_empty()) {
			var data;
			data = self.nova_socket_receive(self.socket);
			if (data == 0) {
				self.connected = false;
				return null;
			}
			return new String(data);
		}
		return dequeue();
	};
	
	this.write = function (data) {
		var success;
		success = self.nova_socket_send(self.socket, data.chars.data) == 1;
		return success;
	};
	
	this.super = function () {
		self.inputBuffer = new Queue();
	};
	
	
};


