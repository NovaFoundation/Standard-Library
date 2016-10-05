var FileNotFoundException = function () {
	var self = this;
	
	
	this.FileNotFoundException = function (file) {
		self.this(file);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (file) {
		self.this(new String("File at location '").concat(file.location.concat(new String("' does not exist"))));
	};
	
	this.super = function () {
	};
	
	
};


