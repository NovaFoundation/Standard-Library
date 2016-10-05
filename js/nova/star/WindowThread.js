var WindowThread = function () {
	var self = this;
	
	this.window = nova_null;
	
	this.WindowThread = function (window) {
		self.this(window);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (window) {
		self = window;
	};
	
	this.run = function () {
		self.nova_createWindow(self.window.x, self.window.y, self.window.width, self.window.height, self.window.title.chars.data);
	};
	
	this.super = function () {
	};
	
	
};


