var Queue = function () {
	this.data = nova_null;
	
	
};

Queue.prototype.Queue = function () {
	this.this();
};

Queue.prototype.Queue = function (data) {
	this.this(data);
};

Queue.prototype.destroy = function () {
};

Queue.prototype.this = function () {
	this.data = new Array();
};

Queue.prototype.this = function (data) {
	this = data;
};

Queue.prototype.dequeue = function () {
	return remove(0);
};

Queue.prototype.enqueue = function (element) {
	this.data.add(element);
};

Queue.prototype.toString = function () {
	var s;
	var i;
	s = "";
	i = this.accessor_size() - 1;
	while (i >= 0) {
		if (i < this.accessor_size() - 1) {
			s = s.concat(new String(", "));
		}
		s = s.concat(this.data.get(i--).toString());
	}
	return s;
};

Queue.prototype.accessor_size = function () {
	return position;
};

Queue.prototype.mutator_size = function () {
};

Queue.prototype.accessor_empty = function () {
	return this.accessor_size() <= 0;
};

Queue.prototype.mutator_empty = function () {
};

Queue.prototype.super = function () {
};



