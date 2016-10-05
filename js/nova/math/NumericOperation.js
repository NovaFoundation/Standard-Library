var NumericOperation = function () {
	var self = this;
	
	this.leftOperand = nova_null;
	this.rightOperand = nova_null;
	this.operator = nova_null;
	
	this.NumericOperation = function (operation) {
		self.this(operation);
	};
	
	this.NumericOperation = function (left, operator, right) {
		self.this(left, operator, right);
	};
	
	this.NumericOperation = function (left, operator, right) {
		self.this(left, operator, right);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (operation) {
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
		bounds1 = self.searchNextType(operation, 0, index1);
		bounds2 = self.searchNextType(operation, bounds1.end, index2);
		bounds3 = null;
		Console.writeLine(bounds1.toString().concat(new String(", ").concat(bounds2.toString().concat(new String(" and ").concat(Int.toString(index1).concat(new String(", ").concat(Int.toString(index2))))))));
		lh = bounds1.extractString(operation);
		op = bounds2.extractString(operation);
		rh = null;
		type1 = self.getType(lh);
		type2 = self.getType(op);
		if (type2 != self.OPERATOR) {
			if (type1 == self.OPERATOR) {
				;
			}
			rh = op;
			op = "*";
			bounds3 = bounds2.clone();
			bounds2.end = bounds2.start;
		} else {
			bounds3 = self.searchNextType(operation, bounds2.end, nova_garbageData);
			rh = bounds3.extractString(operation);
		}
		if (bounds3.end != operation.count) {
		}
	};
	
	this.this = function (left, operator, right) {
		var leftOperator;
		var rightOperator;
		leftOperator = self.decodeOperand(left);
		rightOperator = self.decodeOperand(right);
		if (left == null) {
			;
		} else {
			;
		}
		self.this(self.leftOperand, operator, self.rightOperand);
	};
	
	this.this = function (left, operator, right) {
		self = left;
		self = right;
		self = operator;
	};
	
	this.decodeOperand = function (operand) {
		return null;
	};
	
	this.getType = function (s) {
		if (s.count <= 0) {
			return 0;
		}
		return self.getType(s.chars.get(0));
	};
	
	this.getType = function (c) {
		if (self.isNumeric(c)) {
			return self.NUMBER;
		}
		if (self.isOperator(c)) {
			return self.OPERATOR;
		}
		if (self.contains(self.INVALID_OPERATORS, c)) {
			return 0;
		}
		return self.VARIABLE;
	};
	
	this.searchNextType = function (str, start) {
		var operators;
		var minIndex;
		var minRank;
		var index;
		var nova_local_0;
		operators = new IntArray();
		minIndex = Int.MAX_VALUE;
		minRank = Int.MIN_VALUE;
		index = self.nextOperator(str, start);
		while (index >= 0) {
			var operator;
			var rank;
			operator = str.chars.get(index);
			rank = self.getOperatorRank(operator);
			if (rank > minRank) {
				minIndex = index;
				minRank = rank;
			}
			index = self.nextOperator(str, index + 1);
		}
		if (minIndex >= str.count) {
			return null;
		}
		minIndex = self.nextNonWhitespaceIndex(str, minIndex - 1, -1) + 1;
		nova_local_0 = new Bounds(start, minIndex);
		ret1 = index;
		return nova_local_0;
	};
	
	this.nextOperator = function (str, start) {
		var i;
		i = start;
		for (; i < str.count; i++) {
			if (self.isOperator(str.chars.get(i))) {
				return i;
			}
		}
		return -1;
	};
	
	this.getOperatorRank = function (operator) {
		switch (operator)
		{
			case '-':
			;
			
			case '+':
			return self.ADDITION;
			
			case '/':
			;
			
			case '*':
			return self.MULTIPLICATION;
			
			case '^':
			return self.EXPONENT;
			
			case '[':
			;
			
			case '(':
				return self.GROUPING;
				
				;
			}
		};
		
		this.nextNonWhitespaceIndex = function (str, start, direction) {
			while (start >= 0 && start < str.count && self.isWhitespace(str.chars.get(start))) {
				start = start + direction;
			}
			if (start < 0 || start >= str.count) {
				return -1;
			} else {
				return start - direction;
			}
		};
		
		this.isLetter = function (c) {
			return !self.isOperator(c) && !self.isWhitespace(c);
		};
		
		this.isNumeric = function (c) {
			return self.contains(self.NUMERIC_CHARS, c);
		};
		
		this.isOperator = function (c) {
			return self.contains(self.VALID_OPERATORS, c);
		};
		
		this.isWhitespace = function (c) {
			return self.contains(self.WHITESPACE_CHARS, c);
		};
		
		this.contains = function (array, c) {
			var i;
			i = 0;
			for (; i < array.count; i++) {
				if (c == array.get(i)) {
					return true;
				}
			}
			return false;
		};
		
		this.toString = function () {
			return concat(self.operator.concat(self.rightOperand.toString()));
		};
		
		this.generated2 = function () {
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
		
		this.generated3 = function () {
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
		
		this.generated4 = function () {
			var temp;
			temp = [];
			temp = ' ';
			temp = '\n';
			temp = '\r';
			temp = '\t';
			return new CharArray(temp, 4);
		};
		
		this.generated5 = function () {
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
		
		this.super = function () {
		};
		
		
	};
	
	(function () {
			self.GROUPING = 1;
			self.EXPONENT = 2;
			self.MULTIPLICATION = 3;
			self.DIVISION = 3;
			self.ADDITION = 4;
			self.SUBTRACTION = 4;
			self.MAX = 5;
			self.INVALID = -1;
			self.OPERATOR = 1;
			self.VALID_OPERATORS = self.generated2();
			self.INVALID_OPERATORS = self.generated3();
			self.WHITESPACE_CHARS = self.generated4();
			self.NUMBER = 3;
			self.NUMERIC_CHARS = self.generated5();
			self.VARIABLE = 4;
	})();
	
		