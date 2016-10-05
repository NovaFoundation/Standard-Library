var Node = function () {
	this.data = nova_null;
	this.children = nova_null;
	
	
};

Node.prototype.Node = function (data, numChildren) {
	this.this(data, numChildren);
};

Node.prototype.destroy = function () {
};

Node.prototype.this = function (data, numChildren) {
	data = typeof data == 'undefined' ? null : data;
	numChildren = typeof numChildren == 'undefined' ? 5 : numChildren;
	this.children = new Array(numChildren);
	this = data;
};

Node.prototype.notNull = function (value) {
	return value != null;
};

Node.prototype.preorder = function () {
	var array;
	array = new Array();
	this.preorder(array);
	return array;
};

Node.prototype.preorder = function (array) {
	var contextArg12;
	array.add(this.data);
	this.children.filter(this.notNull).forEach(this.testLambda12);
};

Node.prototype.inorder = function () {
	var array;
	array = new Array();
	return this.inorder(array);
};

Node.prototype.inorder = function (array) {
	var half;
	var contextArg13;
	var contextArg14;
	half = Math.ceil(this.children.count / 2.0);
	this.children.take(half).filter(this.notNull).forEach(this.testLambda13);
	array.add(this.data);
	this.children.skip(half).filter(this.notNull).forEach(this.testLambda14);
	return array;
};

Node.prototype.postorder = function () {
	var array;
	array = new Array();
	return this.postorder(array);
};

Node.prototype.postorder = function (array) {
	var contextArg15;
	this.children.filter(this.notNull).forEach(this.testLambda15);
	array.add(this.data);
	return array;
};

Node.prototype.levelorder = function () {
	var array;
	array = new Array();
	return this.levelorder(array);
};

Node.prototype.levelorder = function (array) {
	var queue;
	queue = new Queue(this.generated9());
	while (!queue.accessor_empty()) {
		var current;
		var contextArg16;
		current = queue.dequeue();
		array.add(current.data);
		current.children.filter(this.notNull).forEach(this.testLambda16);
	}
	return array;
};

Node.prototype.toString = function () {
	return toString();
};

Node.prototype.testLambda12 = function (_1, _2, _3) {
	_1.preorder(array);
};

Node.prototype.testLambda13 = function (_1, _2, _3) {
	_1.inorder(array);
};

Node.prototype.testLambda14 = function (_1, _2, _3) {
	_1.inorder(array);
};

Node.prototype.testLambda15 = function (_1, _2, _3) {
	_1.postorder(array);
};

Node.prototype.generated9 = function () {
	var temp;
	temp = [];
	temp = this;
	return new Array(temp, 1);
};

Node.prototype.testLambda16 = function (_1, _2, _3) {
	queue.enqueue(_1);
};

Node.prototype.super = function () {
};



