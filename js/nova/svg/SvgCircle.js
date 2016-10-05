var SvgCircle = function () {
	this.x = 0;
	this.y = 0;
	this.r = 0;
	
	
};

SvgCircle.prototype.SvgCircle = function (x, y, r) {
	this.this(x, y, r);
};

SvgCircle.prototype.destroy = function () {
};

SvgCircle.prototype.this = function (x, y, r) {
	this = x;
	this = y;
	this = r;
};

SvgCircle.prototype.generateOutput = function (file) {
	file.write(new String("<circle cx=\"").concat(Double.toString(this.x).concat(new String("\" cy=\"").concat(Double.toString(this.y).concat(new String("\" r=\"").concat(Int.toString(this.r).concat(new String("\" stroke=\"false\" fill=\"black\"/>\n"))))))));
};

SvgCircle.prototype.toString = function () {
	return concat(Double.toString(this.x).concat(new String(", ").concat(Double.toString(this.y).concat(new String(") with a radius of ").concat(Int.toString(this.r).concat(new String("]")))))));};

SvgCircle.prototype.super = function () {
};



