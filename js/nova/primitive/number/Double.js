var Double = function () {
	var self = this;
	
	this.value = 0;
	
	this.Double = function (value) {
		self.this(value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (value) {
		self = value;
	};
	
	this.numDigits = function (number) {
		var size;
		if (number < 0) {
			return self.numDigits(-number) + 1;
		}
		number = number / 10;
		size = 1;
		while (number > 0) {
			number = number / 10;
			size++;
		}
		return size;
	};
	
	this.genString = function (buffer, lastIndex) {
		buffer = self.realloc(buffer, ++lastIndex + 1);
		buffer = '\0';
		return new String(buffer);
	};
	
	this.genBuffer = function (value) {
		var size;
		var buffer;
		size = 11 + 1 + 15;
		buffer = [];
		self.sprintf(buffer, "%.15f", value);
		return buffer;
	};
	
	this.repetition = function (buffer, start) {
		var index;
		var c;
		index = start;
		c = buffer;
		while (buffer == c); return start - index - 1;
	};
	
	this.lastSignificantDigit = function (buffer, start) {
		while (buffer == '0'); return start + 1;
	};
	
	this.toString = function (value) {
		var buffer;
		var size;
		var lastIndex;
		var c;
		buffer = self.genBuffer(value);
		size = self.strlen(buffer);
		lastIndex = size - 1;
		c = buffer;
		if (c == '0' || c == '9') {
			while (buffer == c); if (buffer == '.') {
				lastIndex++;
				return self.genString(buffer, lastIndex);
			} else {
				if (lastIndex >= size - 3 - 4) {
					lastIndex = size - 1;
				} else {
					buffer++;
					return self.genString(buffer, lastIndex);
				}
			}
		} else {
			var rep;
			rep = self.repetition(buffer, lastIndex);
			if (rep > 5) {
				buffer = c;
				if (c >= '5') {
					c++;
				}
				buffer = c;
				return self.genString(buffer, lastIndex);
			}
		}
		lastIndex = self.lastSignificantDigit(buffer, size - 1);
		return self.genString(buffer, lastIndex);
	};
	
	this.toString = function () {
		return self.toString(self.value);
	};
	
	this.parseDouble = function (str) {
		var pEnd;
		return self.strtod(str.chars.data, pEnd);
	};
	
	this.compareTo = function (other) {
		return self.value - other;
	};
	
	this.multiply = function (value) {
		return self * value;
	};
	
	this.super = function () {
	};
	
	
};


