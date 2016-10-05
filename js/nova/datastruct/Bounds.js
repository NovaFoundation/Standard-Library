var Bounds = function () {
	this.start = 0;
	this.end = 0;
	
	
};

Bounds.prototype.Bounds = function () {
	this.this();
};

Bounds.prototype.Bounds = function (start, end) {
	this.this(start, end);
};

Bounds.prototype.destroy = function () {
};

Bounds.prototype.this = function () {
	this.this(0, 0);
};

Bounds.prototype.this = function (start, end) {
	this = start;
	this = end;
};

Bounds.prototype.extractString = function (source) {
	if (!this.accessor_valid()) {
		return null;
	}
	return substring(this.start, this.end);
};

Bounds.prototype.extractPreString = function (source) {
	if (!this.accessor_valid()) {
		return null;
	}
	return substring(0, this.start);
};

Bounds.prototype.extractPostString = function (source) {
	if (!this.accessor_valid()) {
		return source;
	}
	return substring(this.end);
};

Bounds.prototype.trimString = function (source) {
	if (!this.accessor_valid()) {
		return source;
	}
	return concat(this.extractPostString(source));
};

Bounds.prototype.invalidate = function () {
	this.start = -1;
	this.end = -1;
};

Bounds.prototype.equals = function (bounds) {
	return bounds != null && bounds.start == this.start && bounds.end == this.end;
};

Bounds.prototype.toString = function () {
	return concat(Int.toString(this.start).concat(new String(", ").concat(Int.toString(this.end).concat(new String("]")))));
};

Bounds.prototype.cloneTo = function (bounds) {
	bounds.start = this.start;
	bounds.end = this.end;
};

Bounds.prototype.clone = function () {
	return new Bounds(this.start, this.end);
};

Bounds.prototype.accessor_size = function () {
	return this.end - this.start;
};

Bounds.prototype.mutator_size = function () {
};

Bounds.prototype.accessor_valid = function () {
	return this.start >= 0 && this.end > 0;
};

Bounds.prototype.mutator_valid = function () {
};

Bounds.prototype.accessor_endless = function () {
	return this.end < 0;
};

Bounds.prototype.mutator_endless = function () {
};

Bounds.prototype.accessor_optional = function () {
	return this.start == 0;
};

Bounds.prototype.mutator_optional = function () {
};

Bounds.prototype.super = function () {
};



