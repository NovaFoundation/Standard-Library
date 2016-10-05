var Node = function () {
	var self = this;
	
	this.data = nova_null;
	this.children = nova_null;
	
	this.Node = function (data, numChildren) {
		self.this(data, numChildren);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (data, numChildren) {
		data = typeof data == 'undefined' ? null : data;
		numChildren = typeof numChildren == 'undefined' ? 5 : numChildren;
		self.children = new Array(numChildren);
		self = data;
	};
	
	this.notNull = function (value) {
		return value != null;
	};
	
	this.preorder = function () {
		var array;
		array = new Array();
		self.preorder(array);
		return array;
	};
	
	this.preorder = function (array) {
		var contextArg12;
		array.add(self.data);
		self.children.filter(self.notNull).forEach(self.testLambda12);
	};
	
	this.inorder = function () {
		var array;
		array = new Array();
		return self.inorder(array);
	};
	
	this.inorder = function (array) {
		var half;
		var contextArg13;
		var contextArg14;
		half = Math.ceil(self.children.count / 2.0);
		self.children.take(half).filter(self.notNull).forEach(self.testLambda13);
		array.add(self.data);
		self.children.skip(half).filter(self.notNull).forEach(self.testLambda14);
		return array;
	};
	
	this.postorder = function () {
		var array;
		array = new Array();
		return self.postorder(array);
	};
	
	this.postorder = function (array) {
		var contextArg15;
		self.children.filter(self.notNull).forEach(self.testLambda15);
		array.add(self.data);
		return array;
	};
	
	this.levelorder = function () {
		var array;
		array = new Array();
		return self.levelorder(array);
	};
	
	this.levelorder = function (array) {
		var queue;
		queue = new Queue(self.generated9());
		while (!queue.accessor_empty()) {
			var current;
			var contextArg16;
			current = queue.dequeue();
			array.add(current.data);
			current.children.filter(self.notNull).forEach(self.testLambda16);
		}
		return array;
	};
	
	this.toString = function () {
		return toString();
	};
	
	this.testLambda12 = function (_1, _2, _3) {
		_1.preorder(array);
	};
	
	this.testLambda13 = function (_1, _2, _3) {
		_1.inorder(array);
	};
	
	this.testLambda14 = function (_1, _2, _3) {
		_1.inorder(array);
	};
	
	this.testLambda15 = function (_1, _2, _3) {
		_1.postorder(array);
	};
	
	this.generated9 = function () {
		var temp;
		temp = [];
		temp = self;
		return new Array(temp, 1);
	};
	
	this.testLambda16 = function (_1, _2, _3) {
		queue.enqueue(_1);
	};
	
	this.super = function () {
	};
	
	
};


