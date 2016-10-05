var Stack = function () {
	this.top = nova_null;
	this.size = 0;
	
	
};

Stack.prototype.Stack = function () {
	this.this();
};

Stack.prototype.destroy = function () {
};

Stack.prototype.push = function (data) {
	var node;
	node = new ListNode(data);
	node.next = this.top;
	this.top = node;
	this.size++;
};

Stack.prototype.pop = function () {
	var data;
	if (this.accessor_empty()) {
		;
	}
	data = this.top.data;
	this.top = this.top.next;
	this.size--;
	return data;
};

Stack.prototype.this = function () {
};

Stack.prototype.accessor_empty = function () {
	return this.size <= 0;
};

Stack.prototype.mutator_empty = function () {
};

Stack.prototype.super = function () {
};



