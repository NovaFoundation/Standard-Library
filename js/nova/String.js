var String = function () {
	var self = this;
	
	this.count = 0;
	this.chars = nova_null;
	
	this.String = function (c) {
		self.this(c);
	};
	
	this.String = function (chars) {
		self.this(chars);
	};
	
	this.String = function (chars) {
		self.this(chars);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (c) {
		var chars;
		chars = [];
		chars = c;
		chars = '\0';
		self.this(chars);
	};
	
	this.this = function (chars) {
		self.count = self.calculateSize(chars);
		self = new CharArray(chars, self.count);
		if (chars != '\0') {
			chars = '\0';
		}
	};
	
	this.this = function (chars) {
		self.count = chars.count;
		self = chars;
	};
	
	this.calculateSize = function (chars) {
		return self.strlen(chars);
	};
	
	this.concat = function (str) {
		var sz;
		var newData;
		sz = str.count + self.count + 1;
		newData = [];
		self.strcpy(newData, self.chars.data);
		self.strcat(newData, str.chars.data);
		newData = '\0';
		return new String(newData);
	};
	
	this.equals = function (other) {
		return self.compareTo(other) == 0;
	};
	
	this.replace = function (search, replace) {
		var output;
		var index;
		output = self;
		index = 0;
		while ((index = output.indexOf(search)) >= 0) {
			output = output.substring(0, index).concat(replace.concat(output.substring(index + search.count)));
		}
		return output;
	};
	
	this.startsWith = function (search) {
		return self.indexOf(search) == 0;
	};
	
	this.endsWith = function (search) {
		return self.count > 0 && self.indexOf(search) == self.count - search.count - 1;
	};
	
	this.contains = function (search) {
		return self.indexOf(search) >= 0;
	};
	
	this.indexOf = function (search, start, direction) {
		var i;
		start = typeof start == 'undefined' ? 0 : start;
		direction = typeof direction == 'undefined' ? 1 : direction;
		i = start;
		while (i < self.count && i >= 0) {
			var found;
			var j;
			found = true;
			j = 0;
			while (j < search.count && i + j < self.count && found) {
				if (search.chars.get(j) != self.chars.get(i + j)) {
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
	
	this.lastIndexOf = function (search) {
		return self.indexOf(search, self.count - 1, -1);
	};
	
	this.substring = function (start, end) {
		var buf;
		var arr;
		end = typeof end == 'undefined' ? self.count : end;
		if (end - start <= 0) {
			if (end - start < 0) {
				;
			}
			return "";
		}
		buf = [];
		arr = self.chars.data;
		self.memcpy(buf, arr, end - start);
		buf = '\0';
		return new String(buf);
	};
	
	this.lastChar = function () {
		return self.charAt(self.count - 1);
	};
	
	this.charAt = function (index) {
		return get(index);
	};
	
	this.trim = function () {
		var start;
		var end;
		start = 0;
		end = self.count - 1;
		while (start < self.count && self.whitespace.contains(self.chars.get(start))) {
			start++;
		}
		while (end >= 0 && self.whitespace.contains(self.chars.get(end))) {
			end--;
		}
		if (end == 0) {
			return "";
		}
		if (start == 0 && end == self.count - 1) {
			return self;
		}
		return self.substring(start, end + 1);
	};
	
	this.toLowerCase = function () {
		return self.transform(Char.toLowerCase);
	};
	
	this.toUpperCase = function () {
		return self.transform(Char.toUpperCase);
	};
	
	this.capitalize = function () {
		if (self.count == 0) {
			return self;
		}
		return concat(self.substring(1));
	};
	
	this.transform = function (transform) {
		var newData;
		var i;
		newData = [];
		i = 0;
		for (; i < self.count; i++) {
			newData = transform(self.chars.get(i), i);
		}
		return new String(newData);
	};
	
	this.getStringBetween = function (before, after, start) {
		var s;
		var e;
		start = typeof start == 'undefined' ? 0 : start;
		s = self.indexOf(before, start);
		e = self.indexOf(after, s + 1);
		if (s >= 0 && e > 0) {
			return self.substring(s + before.count, e);
		}
		return "";
	};
	
	this.surroundWith = function (str, symmetrical) {
		symmetrical = typeof symmetrical == 'undefined' ? false : symmetrical;
		if (symmetrical) {
			return concat(self);
		} else {
			return concat(self);
		}
	};
	
	this.compareTo = function (other) {
		var min;
		var i;
		min = Math.min(self.count, other.count);
		i = 0;
		for (; i < min; i++) {
			if (self.chars.get(i) - other.chars.get(i) != 0) {
				return self.chars.get(i) - other.chars.get(i);
			}
		}
		return self.count - other.count;
	};
	
	this.toString = function () {
		return self;
	};
	
	this.generated1 = function () {
		var temp;
		temp = [];
		temp = ' ';
		temp = '\t';
		temp = '\n';
		temp = '\r';
		return new CharArray(temp, 4);
	};
	
	this.accessor_hashCodeLong = function () {
		return hashCodeLong();
	};
	
	this.mutator_hashCodeLong = function () {
	};
	
	this.super = function () {
	};
	
	this.concat = function (str) {
	};
	
	
};

(function () {
		self.whitespace = self.generated1();
		self.pool = new HashSet(121, 1);
})();

