var Window = function () {
	this.x = 0;
	this.y = 0;
	this.width = 0;
	this.height = 0;
	this.title = nova_null;
	
	
};

Window.prototype.Window = function () {
	this.this();
};

Window.prototype.destroy = function () {
};

Window.prototype.create = function () {
	var t;
	t = new WindowThread(this);
	t.start();
};

Window.prototype.this = function () {
};

Window.prototype.super = function () {
};



