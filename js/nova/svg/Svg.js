var Svg = function () {
	var self = this;
	
	this.root = nova_null;
	
	this.Svg = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.root = new SvgMainComponent();
	};
	
	this.generateOutput = function (file) {
		self.root.generateOutput(file);
	};
	
	this.generateHTMLOutput = function (file) {
		file.write("<html>\n");
		self.generateOutput(file);
		file.write("</html>");
	};
	
	this.super = function () {
	};
	
	
};


