var Queue = function () {
	var self = this;
	
	this.data = nova_null;
	
	this.Queue = function () {
		self.this();
	};
	
	this.Queue = function (data) {
		self.this(data);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.data = new Array();
	};
	
	this.this = function (data) {
		self = data;
	};
	
	this.dequeue = function () {
		return remove(0);
	};
	
	this.enqueue = function (element) {
		self.data.add(element);
	};
	
	this.toString = function () {
		var s;
		var i;
		s = "";
		i = self.accessor_size() - 1;
		while (i >= 0) {
			if (i < self.accessor_size() - 1) {
				s = s.concat(new String(", "));
			}
			s = s.concat(self.data.get(i--).toString());
		}
		return s;
	};
	
	this.accessor_size = function () {
		return position;
	};
	
	this.mutator_size = function () {
	};
	
	this.accessor_empty = function () {
		return self.accessor_size() <= 0;
	};
	
	this.mutator_empty = function () {
	};
	
	this.super = function () {
	};
	
	
};


