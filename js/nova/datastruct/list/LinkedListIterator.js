var LinkedListIterator = function () {
	this.list = nova_null;
	this.position = nova_null;
	
	
};

LinkedListIterator.prototype.LinkedListIterator = function (list) {
	this.this(list);
};

LinkedListIterator.prototype.destroy = function () {
};

LinkedListIterator.prototype.this = function (list) {
	this = list;
	this.reset();
};

LinkedListIterator.prototype.reset = function () {
	this.position = this.list.accessor_first();
	return this;
};

LinkedListIterator.prototype.accessor_hasNext = function () {
	return this.position != null;
};

LinkedListIterator.prototype.mutator_hasNext = function () {
};

LinkedListIterator.prototype.accessor_next = function () {
	if (this.hasNext()) {
		var data;
		data = this.position.data;
		this.position = this.position.next;
		return data;
	}
	;
	return null;
};

LinkedListIterator.prototype.mutator_next = function () {
};

LinkedListIterator.prototype.super = function () {
};



