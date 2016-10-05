var Svg = function () {
	this.root = nova_null;
	
	
};

Svg.prototype.Svg = function () {
	this.this();
};

Svg.prototype.destroy = function () {
};

Svg.prototype.this = function () {
	this.root = new SvgMainComponent();
};

Svg.prototype.generateOutput = function (file) {
	this.root.generateOutput(file);
};

Svg.prototype.generateHTMLOutput = function (file) {
	file.write("<html>\n");
	this.generateOutput(file);
	file.write("</html>");
};

Svg.prototype.super = function () {
};



