var SvgMainComponent = function () {
	
	
};

SvgMainComponent.prototype.SvgMainComponent = function () {
	this.this();
};

SvgMainComponent.prototype.destroy = function () {
};

SvgMainComponent.prototype.this = function () {
	this.children = new SvgComponentList();
};

SvgMainComponent.prototype.generateOutput = function (file) {
	file.write(new String("<?xml version = '1.0' standalone = 'no'?>\n").concat(new String("<!DOCTYPE svg PUBLIC\"-//W3C//DTD Svg1.1//EN\" \"http://www.w3.org/Graphics/Svg/1.1/DTD/svg11.dtd\">").concat(new String("<svg width=\"1400px\" height=\"950px\" version=\"1.1\" preserveAspectRatio=\"none\">\n"))));
	this.children.generateOutput(file);
	file.write("</svg>\n");
};

SvgMainComponent.prototype.super = function () {
};



