var SvgCircle = function () {
	var self = this;
	
	this.x = 0;
	this.y = 0;
	this.r = 0;
	
	this.SvgCircle = function (x, y, r) {
		self.this(x, y, r);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (x, y, r) {
		self = x;
		self = y;
		self = r;
	};
	
	this.generateOutput = function (file) {
		file.write(new String("<circle cx=\"").concat(Double.toString(self.x).concat(new String("\" cy=\"").concat(Double.toString(self.y).concat(new String("\" r=\"").concat(Int.toString(self.r).concat(new String("\" stroke=\"false\" fill=\"black\"/>\n"))))))));
	};
	
	this.toString = function () {
		return concat(Double.toString(self.x).concat(new String(", ").concat(Double.toString(self.y).concat(new String(") with a radius of ").concat(Int.toString(self.r).concat(new String("]")))))));
};

this.super = function () {
};

};


