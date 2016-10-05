var LinkedListIterator = function () {
	var self = this;
	
	this.list = nova_null;
	this.position = nova_null;
	
	this.LinkedListIterator = function (list) {
		self.this(list);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (list) {
		self = list;
		self.reset();
	};
	
	this.reset = function () {
		self.position = self.list.accessor_first();
		return self;
	};
	
	this.accessor_hasNext = function () {
		return self.position != null;
	};
	
	this.mutator_hasNext = function () {
	};
	
	this.accessor_next = function () {
		if (self.hasNext()) {
			var data;
			data = self.position.data;
			self.position = self.position.next;
			return data;
		}
		;
		return null;
	};
	
	this.mutator_next = function () {
	};
	
	this.super = function () {
	};
	
	
};


