var Process = function () {
	this.reader = nova_null;
	
	
};

Process.prototype.Process = function (reader) {
	this.this(reader);
};

Process.prototype.destroy = function () {
};

Process.prototype.this = function (reader) {
	this = reader;
};

Process.prototype.super = function () {
};



