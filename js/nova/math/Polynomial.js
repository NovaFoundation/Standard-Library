var Polynomial = function () {
	var self = this;
	
	this.coefficients = nova_null;
	this.degrees = nova_null;
	this.signs = nova_null;
	
	this.Polynomial = function (polynomial) {
		self.this(polynomial);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (polynomial) {
		var start;
		var reading;
		var i;
		start = 0;
		reading = false;
		self.coefficients = new DoubleArray();
		self.degrees = new DoubleArray();
		self.signs = new Array();
		i = 0;
		for (; i < polynomial.count; i++) {
			if (!self.isLetter(polynomial.chars.get(i))) {
				reading = false;
			} else {
				start = i;
				reading = true;
			}
			else {
			}
		}
	};
	
	this.isLetter = function (c) {
		return !self.isSymbol(c) && !self.isWhitespace(c);
	};
	
	this.isSymbol = function (c) {
		return self.contains(self.SYMBOLS_CHARS, c);
	};
	
	this.isWhitespace = function (c) {
		return self.contains(self.WHITESPACE_CHARS, c);
	};
	
	this.contains = function (array, c) {
		var i;
		i = 0;
		for (; i < array.count; i++) {
			if (c == array.data) {
				return true;
			}
		}
		return false;
	};
	
	this.generated6 = function () {
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
	
	this.generated7 = function () {
		var temp;
		temp = [];
		temp = ' ';
		temp = '\n';
		temp = '\r';
		temp = '\t';
		return new CharArray(temp, 4);
	};
	
	this.super = function () {
	};
	
	
};

(function () {
		self.SYMBOLS_CHARS = self.generated6();
		self.WHITESPACE_CHARS = self.generated7();
})();

