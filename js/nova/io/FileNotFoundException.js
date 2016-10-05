var FileNotFoundException = function () {
	
	
};

FileNotFoundException.prototype.FileNotFoundException = function (file) {
	this.this(file);
};

FileNotFoundException.prototype.destroy = function () {
};

FileNotFoundException.prototype.this = function (file) {
	this.this(new String("File at location '").concat(file.location.concat(new String("' does not exist"))));
};

FileNotFoundException.prototype.super = function () {
};



