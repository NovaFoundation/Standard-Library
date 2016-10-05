var String = function () {
	this.count = 0;
	this.chars = nova_null;
	
	
};

String.prototype.String = function (c) {
	this.this(c);
};

String.prototype.String = function (chars) {
	this.this(chars);
};

String.prototype.String = function (chars) {
	this.this(chars);
};

String.prototype.destroy = function () {
};

String.prototype.this = function (c) {
	var chars;
	chars = [];
	chars = c;
	chars = '\0';
	this.this(chars);
};

String.prototype.this = function (chars) {
	this.count = this.calculateSize(chars);
	this = new CharArray(chars, this.count);
	if (chars != '\0') {
		chars = '\0';
	}
};

String.prototype.this = function (chars) {
	this.count = chars.count;
	this = chars;
};

String.prototype.calculateSize = function (chars) {
	return this.strlen(chars);
};

String.prototype.concat = function (str) {
	var sz;
	var newData;
	sz = str.count + this.count + 1;
	newData = [];
	this.strcpy(newData, this.chars.data);
	this.strcat(newData, str.chars.data);
	newData = '\0';
	return new String(newData);
};

String.prototype.equals = function (other) {
	return this.compareTo(other) == 0;
};

String.prototype.replace = function (search, replace) {
	var output;
	var index;
	output = this;
	index = 0;
	while ((index = output.indexOf(search)) >= 0) {
		output = output.substring(0, index).concat(replace.concat(output.substring(index + search.count)));
	}
	return output;
};

String.prototype.startsWith = function (search) {
	return this.indexOf(search) == 0;
};

String.prototype.endsWith = function (search) {
	return this.count > 0 && this.indexOf(search) == this.count - search.count - 1;
};

String.prototype.contains = function (search) {
	return this.indexOf(search) >= 0;
};

String.prototype.indexOf = function (search, start, direction) {
	var i;
	start = typeof start == 'undefined' ? 0 : start;
	direction = typeof direction == 'undefined' ? 1 : direction;
	i = start;
	while (i < this.count && i >= 0) {
		var found;
		var j;
		found = true;
		j = 0;
		while (j < search.count && i + j < this.count && found) {
			if (search.chars.get(j) != this.chars.get(i + j)) {
				found = false;
			}
			j++;
		}
		if (found) {
			return i;
		}
		i = i + direction;
	}
	return -1;
};

String.prototype.lastIndexOf = function (search) {
	return this.indexOf(search, this.count - 1, -1);
};

String.prototype.substring = function (start, end) {
	var buf;
	var arr;
	end = typeof end == 'undefined' ? this.count : end;
	if (end - start <= 0) {
		if (end - start < 0) {
			;
		}
		return "";
	}
	buf = [];
	arr = this.chars.data;
	this.memcpy(buf, arr, end - start);
	buf = '\0';
	return new String(buf);
};

String.prototype.lastChar = function () {
	return this.charAt(this.count - 1);
};

String.prototype.charAt = function (index) {
	return get(index);
};

String.prototype.trim = function () {
	var start;
	var end;
	start = 0;
	end = this.count - 1;
	while (start < this.count && this.whitespace.contains(this.chars.get(start))) {
		start++;
	}
	while (end >= 0 && this.whitespace.contains(this.chars.get(end))) {
		end--;
	}
	if (end == 0) {
		return "";
	}
	if (start == 0 && end == this.count - 1) {
		return this;
	}
	return this.substring(start, end + 1);
};

String.prototype.toLowerCase = function () {
	return this.transform(Char.toLowerCase);
};

String.prototype.toUpperCase = function () {
	return this.transform(Char.toUpperCase);
};

String.prototype.capitalize = function () {
	if (this.count == 0) {
		return this;
	}
	return concat(this.substring(1));
};

String.prototype.transform = function (transform) {
	var newData;
	var i;
	newData = [];
	i = 0;
	for (; i < this.count; i++) {
		newData = transform(this.chars.get(i), i);
	}
	return new String(newData);
};

String.prototype.getStringBetween = function (before, after, start) {
	var s;
	var e;
	start = typeof start == 'undefined' ? 0 : start;
	s = this.indexOf(before, start);
	e = this.indexOf(after, s + 1);
	if (s >= 0 && e > 0) {
		return this.substring(s + before.count, e);
	}
	return "";
};

String.prototype.surroundWith = function (str, symmetrical) {
	symmetrical = typeof symmetrical == 'undefined' ? false : symmetrical;
	if (symmetrical) {
		return concat(this);
	} else {
		return concat(this);
	}
};

String.prototype.compareTo = function (other) {
	var min;
	var i;
	min = Math.min(this.count, other.count);
	i = 0;
	for (; i < min; i++) {
		if (this.chars.get(i) - other.chars.get(i) != 0) {
			return this.chars.get(i) - other.chars.get(i);
		}
	}
	return this.count - other.count;
};

String.prototype.toString = function () {
	return this;
};

String.prototype.generated1 = function () {
	var temp;
	temp = [];
	temp = ' ';
	temp = '\t';
	temp = '\n';
	temp = '\r';
	return new CharArray(temp, 4);
};

String.prototype.accessor_hashCodeLong = function () {
	return hashCodeLong();
};

String.prototype.mutator_hashCodeLong = function () {
};

String.prototype.super = function () {
};

String.prototype.concat = function (str) {
};


(function () {
		this.whitespace = this.generated1();
		this.pool = new HashSet(121, 1);
})();

