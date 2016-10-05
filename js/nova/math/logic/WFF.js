var WFF = function () {
	this.letters = nova_null;
	this.hypotheses = nova_null;
	this.conclusion = nova_null;
	this.wff = nova_null;
	
	
};

WFF.prototype.WFF = function (wellFormedFormula, letters) {
	this.this(wellFormedFormula, letters);
};

WFF.prototype.destroy = function () {
};

WFF.prototype.this = function (wellFormedFormula, letters) {
	this = wellFormedFormula.trim();
	this = letters;
	this.hypotheses = new Array();
	this.decodeFormula();
};

WFF.prototype.decodeFormula = function () {
	var conclusionGroup;
	var conclusion;
	var statements;
	var i;
	var n;
	conclusionGroup = this.searchForConclusion(this.wff);
	if (conclusionGroup == null) {
		;
	}
	conclusion = conclusionGroup.statement;
	Console.writeLine(new String("Conclusion: ").concat(conclusion.toString()));
	this.wff = conclusionGroup.bounds.extractPreString(this.wff);
	statements = this.decodeHypotheses(this.wff);
	i = 0;
	for (; i < statements.count; i++) {
		var group;
		group = statements.get(i);
		this.hypotheses.add(group.statement);
	}
	n = 0;
	for (; n < this.hypotheses.count; n++) {
		Console.writeLine(this.hypotheses.get(n));
	}
};

WFF.prototype.searchForConclusion = function (wff) {
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
	first = this.findEndingMatch(wff, '(', ')', wff.count - 1, -1);
}
conclusionStart = this.nextNonWhitespaceIndex(wff, index + 2, 1);
bounds = new Bounds(conclusionStart, wff.count);
conclusion = new Conclusion(bounds.extractString(wff));
bounds.start = this.nextNonWhitespaceIndex(wff, index - 1, -1) + 1;
group = new StatementGroup(conclusion, bounds);
return group;};

WFF.prototype.decodeHypotheses = function (wff) {
	var list;
	var next;
	var prev;
	var index;
	list = new Array();
	next = 0;
	prev = 0;
	index = wff.indexOf("&");
	while (index >= 0) {
		next = this.nextNonWhitespaceIndex(wff, index - 1, -1);
		list.add(this.generateHypothesis(wff, prev, next + 1));
		prev = this.nextNonWhitespaceIndex(wff, index + 1, 1);
		index = wff.indexOf("&", prev + 1);
	}
	list.add(this.generateHypothesis(wff, prev, wff.count));
	return list;
};

WFF.prototype.generateHypothesis = function (wff, start, end) {
	var bounds;
	var h;
	var group;
	bounds = new Bounds(start, end);
	h = new Hypothesis(bounds.extractString(wff));
	group = new StatementGroup(h, bounds);
	return group;
};

WFF.prototype.searchForStatement = function (wff) {
	return null;
};

WFF.prototype.nextNonWhitespaceIndex = function (wff, index, direction) {
	return this.nextWhitespaceIndex(wff, index, direction, true);
};

WFF.prototype.nextWhitespaceIndex = function (wff, index, direction) {
	return this.nextWhitespaceIndex(wff, index, direction, false);
};

WFF.prototype.nextWhitespaceIndex = function (wff, index, direction, opposite) {
	var i;
	i = index;
	while (i < wff.count && i >= 0) {
		var c;
		c = wff.charAt(i);
		if (this.containsChar(c, this.whitespace) != opposite) {
			return i;
		}
		i = i + direction;
	}
	return -1;
};

WFF.prototype.containsChar = function (needle, chars) {
	var i;
	i = 0;
	for (; i < chars.count; i++) {
		if (needle == chars.data) {
			return true;
		}
	}
	return false;
};

WFF.prototype.findEndingMatch = function (wff, start, end, index, direction) {
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

WFF.prototype.generated8 = function () {
	var temp;
	temp = [];
	temp = ' ';
	temp = '\t';
	temp = '\n';
	temp = '\r';
	return new CharArray(temp, 4);
};

WFF.prototype.super = function () {
};


(function () {
		this.whitespace = this.generated8();
})();

