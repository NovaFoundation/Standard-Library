var StreamReader = function () {
	this.file = nova_null;
	
	
};

StreamReader.prototype.StreamReader = function (file) {
	this.this(file);
};

StreamReader.prototype.destroy = function () {
};

StreamReader.prototype.this = function (file) {
	this = file;
};

StreamReader.prototype.readBytes = function () {
	return null;
};

StreamReader.prototype.readString = function () {
	var output;
	output = this.file.readAllContents();
	return output;
};

StreamReader.prototype.super = function () {
};



