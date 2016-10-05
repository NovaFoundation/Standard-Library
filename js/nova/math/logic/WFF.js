var WFF = function () {
	var self = this;
	
	this.letters = nova_null;
	this.hypotheses = nova_null;
	this.conclusion = nova_null;
	this.wff = nova_null;
	
	this.WFF = function (wellFormedFormula, letters) {
		self.this(wellFormedFormula, letters);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (wellFormedFormula, letters) {
		self = wellFormedFormula.trim();
		self = letters;
		self.hypotheses = new Array();
		self.decodeFormula();
	};
	
	this.decodeFormula = function () {
		var conclusionGroup;
		var conclusion;
		var statements;
		var i;
		var n;
		conclusionGroup = self.searchForConclusion(self.wff);
		if (conclusionGroup == null) {
			;
		}
		conclusion = conclusionGroup.statement;
		Console.writeLine(new String("Conclusion: ").concat(conclusion.toString()));
		self.wff = conclusionGroup.bounds.extractPreString(self.wff);
		statements = self.decodeHypotheses(self.wff);
		i = 0;
		for (; i < statements.count; i++) {
			var group;
			group = statements.get(i);
			self.hypotheses.add(group.statement);
		}
		n = 0;
		for (; n < self.hypotheses.count; n++) {
			Console.writeLine(self.hypotheses.get(n));
		}
	};
	
	this.searchForConclusion = function (wff) {
		var index;
		var conclusionStart;
		var bounds;
		var conclusion;
		var group;
		index = wff.lastIndexOf("->");
		if (index < 0) {
			return null;
		}
		if (wff.lastChar() == ')') {
		var first;
		first = self.findEndingMatch(wff, '(', ')', wff.count - 1, -1);
	}
	conclusionStart = self.nextNonWhitespaceIndex(wff, index + 2, 1);
	bounds = new Bounds(conclusionStart, wff.count);
	conclusion = new Conclusion(bounds.extractString(wff));
	bounds.start = self.nextNonWhitespaceIndex(wff, index - 1, -1) + 1;
	group = new StatementGroup(conclusion, bounds);
	return group;
};

this.decodeHypotheses = function (wff) {
	var list;
	var next;
	var prev;
	var index;
	list = new Array();
	next = 0;
	prev = 0;
	index = wff.indexOf("&");
	while (index >= 0) {
		next = self.nextNonWhitespaceIndex(wff, index - 1, -1);
		list.add(self.generateHypothesis(wff, prev, next + 1));
		prev = self.nextNonWhitespaceIndex(wff, index + 1, 1);
		index = wff.indexOf("&", prev + 1);
	}
	list.add(self.generateHypothesis(wff, prev, wff.count));
	return list;
};

this.generateHypothesis = function (wff, start, end) {
	var bounds;
	var h;
	var group;
	bounds = new Bounds(start, end);
	h = new Hypothesis(bounds.extractString(wff));
	group = new StatementGroup(h, bounds);
	return group;
};

this.searchForStatement = function (wff) {
	return null;
};

this.nextNonWhitespaceIndex = function (wff, index, direction) {
	return self.nextWhitespaceIndex(wff, index, direction, true);
};

this.nextWhitespaceIndex = function (wff, index, direction) {
	return self.nextWhitespaceIndex(wff, index, direction, false);
};

this.nextWhitespaceIndex = function (wff, index, direction, opposite) {
	var i;
	i = index;
	while (i < wff.count && i >= 0) {
		var c;
		c = wff.charAt(i);
		if (self.containsChar(c, self.whitespace) != opposite) {
			return i;
		}
		i = i + direction;
	}
	return -1;
};

this.containsChar = function (needle, chars) {
	var i;
	i = 0;
	for (; i < chars.count; i++) {
		if (needle == chars.data) {
			return true;
		}
	}
	return false;
};

this.findEndingMatch = function (wff, start, end, index, direction) {
	var scope;
	var i;
	if (direction < 0) {
		var temp;
		temp = start;
		start = end;
		end = temp;
	}
	scope = 0;
	i = index;
	while (i < wff.count && i >= 0) {
		var c;
		c = wff.charAt(i);
		if (c == start) {
			scope++;
		} else {
			scope--;
		}
		if (scope == 0) {
			return i;
		}
		i = i + direction;
	}
	return -1;
};

this.generated8 = function () {
	var temp;
	temp = [];
	temp = ' ';
	temp = '\t';
	temp = '\n';
	temp = '\r';
	return new CharArray(temp, 4);
};

this.super = function () {
};

};

(function () {
		self.whitespace = self.generated8();
})();

