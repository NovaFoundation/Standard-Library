var Object = function () {
	var self = this;
	
	
	this.Object = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.toString = function () {
		return concat((self.accessor_hashCode()).concat(new String("]")));
	};
	
	this.equals = function (another) {
		return self == another;
	};
	
	this.this = function () {
	};
	
	this.accessor_hashCode = function () {
		return new String(self.hashCode(self));
	};
	
	this.mutator_hashCode = function () {
	};
	
	this.accessor_hashCodeLong = function () {
		return self.strtol(self.hashCode(self), self.NULL, 16);
	};
	
	this.mutator_hashCodeLong = function () {
	};
	
	this.super = function () {
	};
	
	this.toString = function () {
	};
	
	this.hashCodeLong = function () {
	};
	
	
};


