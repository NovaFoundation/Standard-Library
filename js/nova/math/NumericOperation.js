var NumericOperation = function () {
	this.leftOperand = nova_null;
	this.rightOperand = nova_null;
	this.operator = nova_null;
	
	
};

NumericOperation.prototype.NumericOperation = function (operation) {
	this.this(operation);
};

NumericOperation.prototype.NumericOperation = function (left, operator, right) {
	this.this(left, operator, right);
};

NumericOperation.prototype.NumericOperation = function (left, operator, right) {
	this.this(left, operator, right);
};

NumericOperation.prototype.destroy = function () {
};

NumericOperation.prototype.this = function (operation) {
	var bounds1;
	var index1;
	var bounds2;
	var index2;
	var bounds3;
	var lh;
	var op;
	var rh;
	var type1;
	var type2;
	bounds1 = this.searchNextType(operation, 0, index1);
	bounds2 = this.searchNextType(operation, bounds1.end, index2);
	bounds3 = null;
	Console.writeLine(bounds1.toString().concat(new String(", ").concat(bounds2.toString().concat(new String(" and ").concat(Int.toString(index1).concat(new String(", ").concat(Int.toString(index2))))))));
	lh = bounds1.extractString(operation);
	op = bounds2.extractString(operation);
	rh = null;
	type1 = this.getType(lh);
	type2 = this.getType(op);
	if (type2 != this.OPERATOR) {
		if (type1 == this.OPERATOR) {
			;
		}
		rh = op;
		op = "*";
		bounds3 = bounds2.clone();
		bounds2.end = bounds2.start;
	} else {
		bounds3 = this.searchNextType(operation, bounds2.end, nova_garbageData);
		rh = bounds3.extractString(operation);
	}
	if (bounds3.end != operation.count) {
	}
};

NumericOperation.prototype.this = function (left, operator, right) {
	var leftOperator;
	var rightOperator;
	leftOperator = this.decodeOperand(left);
	rightOperator = this.decodeOperand(right);
	if (left == null) {
		;
	} else {
		;
	}
	this.this(this.leftOperand, operator, this.rightOperand);
};

NumericOperation.prototype.this = function (left, operator, right) {
	this = left;
	this = right;
	this = operator;
};

NumericOperation.prototype.decodeOperand = function (operand) {
	return null;
};

NumericOperation.prototype.getType = function (s) {
	if (s.count <= 0) {
		return 0;
	}
	return this.getType(s.chars.get(0));
};

NumericOperation.prototype.getType = function (c) {
	if (this.isNumeric(c)) {
		return this.NUMBER;
	}
	if (this.isOperator(c)) {
		return this.OPERATOR;
	}
	if (this.contains(this.INVALID_OPERATORS, c)) {
		return 0;
	}
	return this.VARIABLE;
};

NumericOperation.prototype.searchNextType = function (str, start) {
	var operators;
	var minIndex;
	var minRank;
	var index;
	var nova_local_0;
	operators = new IntArray();
	minIndex = Int.MAX_VALUE;
	minRank = Int.MIN_VALUE;
	index = this.nextOperator(str, start);
	while (index >= 0) {
		var operator;
		var rank;
		operator = str.chars.get(index);
		rank = this.getOperatorRank(operator);
		if (rank > minRank) {
			minIndex = index;
			minRank = rank;
		}
		index = this.nextOperator(str, index + 1);
	}
	if (minIndex >= str.count) {
		return null;
	}
	minIndex = this.nextNonWhitespaceIndex(str, minIndex - 1, -1) + 1;
	nova_local_0 = new Bounds(start, minIndex);
	ret1 = index;
	return nova_local_0;
};

NumericOperation.prototype.nextOperator = function (str, start) {
	var i;
	i = start;
	for (; i < str.count; i++) {
		if (this.isOperator(str.chars.get(i))) {
			return i;
		}
	}
	return -1;
};

NumericOperation.prototype.getOperatorRank = function (operator) {
	switch (operator)
	{
		case '-':
		;
		
		case '+':
		return this.ADDITION;
		
		case '/':
		;
		
		case '*':
		return this.MULTIPLICATION;
		
		case '^':
		return this.EXPONENT;
		
		case '[':
		;
		
		case '(':
			return this.GROUPING;
			
			;
		}
	};
	
	NumericOperation.prototype.nextNonWhitespaceIndex = function (str, start, direction) {
		while (start >= 0 && start < str.count && this.isWhitespace(str.chars.get(start))) {
			start = start + direction;
		}
		if (start < 0 || start >= str.count) {
			return -1;
		} else {
			return start - direction;
		}
	};
	
	NumericOperation.prototype.isLetter = function (c) {
		return !this.isOperator(c) && !this.isWhitespace(c);
	};
	
	NumericOperation.prototype.isNumeric = function (c) {
		return this.contains(this.NUMERIC_CHARS, c);
	};
	
	NumericOperation.prototype.isOperator = function (c) {
		return this.contains(this.VALID_OPERATORS, c);
	};
	
	NumericOperation.prototype.isWhitespace = function (c) {
		return this.contains(this.WHITESPACE_CHARS, c);
	};
	
	NumericOperation.prototype.contains = function (array, c) {
		var i;
		i = 0;
		for (; i < array.count; i++) {
			if (c == array.get(i)) {
				return true;
			}
		}
		return false;
	};
	
	NumericOperation.prototype.toString = function () {
		return concat(this.operator.concat(this.rightOperand.toString()));
	};
	
	NumericOperation.prototype.generated2 = function () {
		var temp;
		temp = [];
		temp = '-';
		temp = '+';
		temp = '!';
		temp = '=';
		temp = '%';
		temp = '^';
		temp = '*';
		temp = '/';
		temp = '>';
		temp = '<';
		temp = '[';
		temp = ']';
		temp = '(';
		temp = ')';
		return new CharArray(temp, 14);
	};
	
	NumericOperation.prototype.generated3 = function () {
		var temp;
		temp = [];
		temp = '`';
		temp = '~';
		temp = '@';
		temp = '#';
		temp = '$';
		temp = '&';
		temp = '_';
		temp = ';';
		temp = ':';
		temp = '\'';
		temp = '"';
		temp = '|';
		temp = '\\';
		temp = ',';
		temp = '.';
		temp = '?';
		return new CharArray(temp, 16);
	};
	
	NumericOperation.prototype.generated4 = function () {
		var temp;
		temp = [];
		temp = ' ';
		temp = '\n';
		temp = '\r';
		temp = '\t';
		return new CharArray(temp, 4);
	};
	
	NumericOperation.prototype.generated5 = function () {
		var temp;
		temp = [];
		temp = '0';
		temp = '1';
		temp = '2';
		temp = '3';
		temp = '4';
		temp = '5';
		temp = '6';
		temp = '7';
		temp = '8';
		temp = '9';
		return new CharArray(temp, 10);
	};
	
	NumericOperation.prototype.super = function () {
	};
	
	
	(function () {
			this.GROUPING = 1;
			this.EXPONENT = 2;
			this.MULTIPLICATION = 3;
			this.DIVISION = 3;
			this.ADDITION = 4;
			this.SUBTRACTION = 4;
			this.MAX = 5;
			this.INVALID = -1;
			this.OPERATOR = 1;
			this.VALID_OPERATORS = this.generated2();
			this.INVALID_OPERATORS = this.generated3();
			this.WHITESPACE_CHARS = this.generated4();
			this.NUMBER = 3;
			this.NUMERIC_CHARS = this.generated5();
			this.VARIABLE = 4;
	})();
	
		