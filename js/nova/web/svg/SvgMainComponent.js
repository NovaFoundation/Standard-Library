var SvgMainComponent = function () {
	var self = this;
	
	
	this.SvgMainComponent = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.children = new SvgComponentList();
	};
	
	this.generateOutput = function (file) {
		file.write(new String("<?xml version = '1.0' standalone = 'no'?>\n").concat(new String("<!DOCTYPE svg PUBLIC\"-//W3C//DTD Svg1.1//EN\" \"http://www.w3.org/Graphics/Svg/1.1/DTD/svg11.dtd\">").concat(new String("<svg width=\"1400px\" height=\"950px\" version=\"1.1\" preserveAspectRatio=\"none\">\n"))));
		self.children.generateOutput(file);
		file.write("</svg>\n");
	};
	
	this.super = function () {
	};
	
	
};


