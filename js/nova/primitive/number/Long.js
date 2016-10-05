var Long = function () {
	var self = this;
	
	this.value = 0;
	
	this.Long = function (value) {
		self.this(value);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (value) {
		self = value;
	};
	
	this.numDigits = function (number) {
		var size;
		size = 1;
		if (number < 0) {
			size++;
		}
		number = number / 10;
		while (number != 0) {
			number = number / 10;
			size++;
		}
		return size;
	};
	
	this.toString = function (value) {
		var charOffset;
		var digits;
		var data;
		var offset;
		var nums;
		var index;
		charOffset = '0';
		digits = self.numDigits(value);
		data = [];
		data = '\0';
		offset = 0;
		if (value < 0) {
			data = '-';
			offset = 1;
		}
		nums = digits-- - offset;
		index = 0;
		for (; index < nums; index++) {
			data = (charOffset + Math.abs(value % 10));
			value = value / 10;
		}
		return new String(data);
	};
	
	this.toString = function () {
		return self.toString(self.value);
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

(function () {
		self.MAX_VALUE = 9223372036854775807;
		self.MIN_VALUE = -9223372036854775808;
})();

