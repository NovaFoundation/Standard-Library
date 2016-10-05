var Double = function () {
	this.value = 0;
	
	
};

Double.prototype.Double = function (value) {
	this.this(value);
};

Double.prototype.destroy = function () {
};

Double.prototype.this = function (value) {
	this = value;
};

Double.prototype.numDigits = function (number) {
	var size;
	if (number < 0) {
		return this.numDigits(-number) + 1;
	}
	number = number / 10;
	size = 1;
	while (number > 0) {
		number = number / 10;
		size++;
	}
	return size;
};

Double.prototype.genString = function (buffer, lastIndex) {
	buffer = this.realloc(buffer, ++lastIndex + 1);
	buffer = '\0';
	return new String(buffer);
};

Double.prototype.genBuffer = function (value) {
	var size;
	var buffer;
	size = 11 + 1 + 15;
	buffer = [];
	this.sprintf(buffer, "%.15f", value);
	return buffer;
};

Double.prototype.repetition = function (buffer, start) {
	var index;
	var c;
	index = start;
	c = buffer;
	while (buffer == c); return start - index - 1;
};

Double.prototype.lastSignificantDigit = function (buffer, start) {
	while (buffer == '0'); return start + 1;
};

Double.prototype.toString = function (value) {
	var buffer;
	var size;
	var lastIndex;
	var c;
	buffer = this.genBuffer(value);
	size = this.strlen(buffer);
	lastIndex = size - 1;
	c = buffer;
	if (c == '0' || c == '9') {
		while (buffer == c); if (buffer == '.') {
			lastIndex++;
			return this.genString(buffer, lastIndex);
		} else {
			if (lastIndex >= size - 3 - 4) {
				lastIndex = size - 1;
			} else {
				buffer++;
				return this.genString(buffer, lastIndex);
			}
		}
	} else {
		var rep;
		rep = this.repetition(buffer, lastIndex);
		if (rep > 5) {
			buffer = c;
			if (c >= '5') {
				c++;
			}
			buffer = c;
			return this.genString(buffer, lastIndex);
		}
	}
	lastIndex = this.lastSignificantDigit(buffer, size - 1);
	return this.genString(buffer, lastIndex);
};

Double.prototype.toString = function () {
	return this.toString(this.value);
};

Double.prototype.parseDouble = function (str) {
	var pEnd;
	return this.strtod(str.chars.data, pEnd);
};

Double.prototype.compareTo = function (other) {
	return this.value - other;
};

Double.prototype.multiply = function (value) {
	return this * value;
};

Double.prototype.super = function () {
};



