var Thread = function () {
	this.handle = nova_null;
	
	
};

Thread.prototype.Thread = function () {
	this.this();
};

Thread.prototype.destroy = function () {
};

Thread.prototype.start = function () {
	this.handle = this.create_thread(this, this.startRun);
};

Thread.prototype.join = function () {
	this.lib_nova_thread_join(this.handle);
};

Thread.prototype.kill = function () {
	this.lib_nova_thread_cancel(this.handle);
};

Thread.prototype.sleep = function (millis) {
	this.lib_nova_thread_sleep(millis);
};

Thread.prototype.run = function () {
};

Thread.prototype.startRun = function () {
	;
	;
	;
};

Thread.prototype.this = function () {
};

Thread.prototype.super = function () {
};

Thread.prototype.run = function () {
};



