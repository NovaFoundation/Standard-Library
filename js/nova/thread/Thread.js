var Thread = function () {
	var self = this;
	
	this.handle = nova_null;
	
	this.Thread = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.start = function () {
		self.handle = self.create_thread(self, self.startRun);
	};
	
	this.join = function () {
		self.lib_nova_thread_join(self.handle);
	};
	
	this.kill = function () {
		self.lib_nova_thread_cancel(self.handle);
	};
	
	this.sleep = function (millis) {
		self.lib_nova_thread_sleep(millis);
	};
	
	this.run = function () {
	};
	
	this.startRun = function () {
		;
		;
		;
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	this.run = function () {
	};
	
	
};


