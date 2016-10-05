var Stack = function () {
	var self = this;
	
	this.top = nova_null;
	this.size = 0;
	
	this.Stack = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.push = function (data) {
		var node;
		node = new ListNode(data);
		node.next = self.top;
		self.top = node;
		self.size++;
	};
	
	this.pop = function () {
		var data;
		if (self.accessor_empty()) {
			;
		}
		data = self.top.data;
		self.top = self.top.next;
		self.size--;
		return data;
	};
	
	this.this = function () {
	};
	
	this.accessor_empty = function () {
		return self.size <= 0;
	};
	
	this.mutator_empty = function () {
	};
	
	this.super = function () {
	};
	
	
};


