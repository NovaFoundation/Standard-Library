var Window = function () {
	var self = this;
	
	this.x = 0;
	this.y = 0;
	this.width = 0;
	this.height = 0;
	this.title = nova_null;
	
	this.Window = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.create = function () {
		var t;
		t = new WindowThread(self);
		t.start();
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	
};


