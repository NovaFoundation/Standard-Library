var StreamReader = function () {
	var self = this;
	
	this.file = nova_null;
	
	this.StreamReader = function (file) {
		self.this(file);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (file) {
		self = file;
	};
	
	this.readBytes = function () {
		return null;
	};
	
	this.readString = function () {
		var output;
		output = self.file.readAllContents();
		return output;
	};
	
	this.super = function () {
	};
	
	
};


