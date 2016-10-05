var Bounds = function () {
	var self = this;
	
	this.start = 0;
	this.end = 0;
	
	this.Bounds = function () {
		self.this();
	};
	
	this.Bounds = function (start, end) {
		self.this(start, end);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.this(0, 0);
	};
	
	this.this = function (start, end) {
		self = start;
		self = end;
	};
	
	this.extractString = function (source) {
		if (!self.accessor_valid()) {
			return null;
		}
		return substring(self.start, self.end);
	};
	
	this.extractPreString = function (source) {
		if (!self.accessor_valid()) {
			return null;
		}
		return substring(0, self.start);
	};
	
	this.extractPostString = function (source) {
		if (!self.accessor_valid()) {
			return source;
		}
		return substring(self.end);
	};
	
	this.trimString = function (source) {
		if (!self.accessor_valid()) {
			return source;
		}
		return concat(self.extractPostString(source));
	};
	
	this.invalidate = function () {
		self.start = -1;
		self.end = -1;
	};
	
	this.equals = function (bounds) {
		return bounds != null && bounds.start == self.start && bounds.end == self.end;
	};
	
	this.toString = function () {
		return concat(Int.toString(self.start).concat(new String(", ").concat(Int.toString(self.end).concat(new String("]")))));
	};
	
	this.cloneTo = function (bounds) {
		bounds.start = self.start;
		bounds.end = self.end;
	};
	
	this.clone = function () {
		return new Bounds(self.start, self.end);
	};
	
	this.accessor_size = function () {
		return self.end - self.start;
	};
	
	this.mutator_size = function () {
	};
	
	this.accessor_valid = function () {
		return self.start >= 0 && self.end > 0;
	};
	
	this.mutator_valid = function () {
	};
	
	this.accessor_endless = function () {
		return self.end < 0;
	};
	
	this.mutator_endless = function () {
	};
	
	this.accessor_optional = function () {
		return self.start == 0;
	};
	
	this.mutator_optional = function () {
	};
	
	this.super = function () {
	};
	
	
};


