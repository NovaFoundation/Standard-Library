var WindowThread = function () {
	this.window = nova_null;
	
	
};

WindowThread.prototype.WindowThread = function (window) {
	this.this(window);
};

WindowThread.prototype.destroy = function () {
};

WindowThread.prototype.this = function (window) {
	this = window;
};

WindowThread.prototype.run = function () {
	this.nova_createWindow(this.window.x, this.window.y, this.window.width, this.window.height, this.window.title.chars.data);
};

WindowThread.prototype.super = function () {
};



