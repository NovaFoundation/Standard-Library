var ListNode = function () {
	var self = this;
	
	this.data = nova_null;
	this.next = nova_null;
	
	this.ListNode = function (data) {
		self.this(data);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (data) {
		self = data;
	};
	
	this.clone = function () {
		var clone;
		clone = new ListNode(self.data);
		clone.next = self.next;
		return clone;
	};
	
	this.super = function () {
	};
	
	
};


