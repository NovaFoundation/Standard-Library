var Polynomial = function () {
	this.coefficients = nova_null;
	this.degrees = nova_null;
	this.signs = nova_null;
	
	
};

Polynomial.prototype.Polynomial = function (polynomial) {
	this.this(polynomial);
};

Polynomial.prototype.destroy = function () {
};

Polynomial.prototype.this = function (polynomial) {
	var start;
	var reading;
	var i;
	start = 0;
	reading = false;
	this.coefficients = new DoubleArray();
	this.degrees = new DoubleArray();
	this.signs = new Array();
	i = 0;
	for (; i < polynomial.count; i++) {
		if (!this.isLetter(polynomial.chars.get(i))) {
			reading = false;
		} else {
			start = i;
			reading = true;
		}
		else {
		}
	}
};

Polynomial.prototype.isLetter = function (c) {
	return !this.isSymbol(c) && !this.isWhitespace(c);
};

Polynomial.prototype.isSymbol = function (c) {
	return this.contains(this.SYMBOLS_CHARS, c);
};

Polynomial.prototype.isWhitespace = function (c) {
	return this.contains(this.WHITESPACE_CHARS, c);
};

Polynomial.prototype.contains = function (array, c) {
	var i;
	i = 0;
	for (; i < array.count; i++) {
		if (c == array.data) {
			return true;
		}
	}
	return false;
};

Polynomial.prototype.generated6 = function () {
	var temp;
	temp = [];
	temp = '-';
	temp = '+';
	temp = '~';
	temp = '!';
	temp = '=';
	temp = '%';
	temp = '^';
	temp = '&';
	temp = '|';
	temp = '*';
	temp = '/';
	temp = '>';
	temp = '<';
	temp = ',';
	temp = '"';
	temp = '\'';
	temp = '[';
	temp = ']';
	temp = '{';
	temp = '}';
	temp = ';';
	temp = '(';
	temp = ')';
	return new CharArray(temp, 23);
};

Polynomial.prototype.generated7 = function () {
	var temp;
	temp = [];
	temp = ' ';
	temp = '\n';
	temp = '\r';
	temp = '\t';
	return new CharArray(temp, 4);
};

Polynomial.prototype.super = function () {
};


(function () {
		this.SYMBOLS_CHARS = this.generated6();
		this.WHITESPACE_CHARS = this.generated7();
})();

