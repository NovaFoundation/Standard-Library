var HashMap = function () {
	this.buckets = nova_null;
	this.bucketSize = 0;
	this.size = 0;
	
	
};

HashMap.prototype.HashMap = function () {
	this.this();
};

HashMap.prototype.HashMap = function (bucketCount, bucketSize) {
	this.this(bucketCount, bucketSize);
};

HashMap.prototype.destroy = function () {
};

HashMap.prototype.this = function () {
	this.this(5, 5);
};

HashMap.prototype.this = function (bucketCount, bucketSize) {
	var contextArg6;
	this.buckets = new Array(bucketCount).map(this.testLambda6);
	this = bucketSize;
};

HashMap.prototype.toArray = function () {
	var contextArg1;
	return this.map(this.testLambda1);
};

HashMap.prototype.contains = function (value) {
	var pair;
	pair = this.getPair(value.key);
	if (pair != null) {
		return pair.value == value.value;
	}
	return false;
};

HashMap.prototype.any = function (func) {
	var nova_local_0;
	var bucket;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				if (func(pair)) {
					return true;
				}
			}
		}
	}
	return false;
};

HashMap.prototype.all = function (func) {
	var nova_local_0;
	var bucket;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				if (!func(pair)) {
					return false;
				}
			}
		}
	}
	return true;
};

HashMap.prototype.map = function (func) {
	var array;
	var i;
	var nova_local_0;
	var bucket;
	array = new Array();
	i = 0;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				array.add(func(pair, i++, this));
			}
		}
	}
	return array;
};

HashMap.prototype.filter = function (func) {
	var array;
	var i;
	var nova_local_0;
	var bucket;
	array = new Array();
	i = 0;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				if (func(pair, i++, this)) {
					array.add(pair);
				}
			}
		}
	}
	return array;
};

HashMap.prototype.join = function (delimiter) {
	var i;
	var output;
	var nova_local_0;
	var bucket;
	i = 0;
	output = "";
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				if (i > 0) {
					output = output.concat(delimiter);
				}
				output = output.concat(pair.toString());
			}
		}
	}
	return output;
};

HashMap.prototype.skip = function (num) {
	var contextArg2;
	return skip(num);
};

HashMap.prototype.take = function (num) {
	var contextArg3;
	return take(num);
};

HashMap.prototype.reverse = function () {
	var contextArg4;
	return reverse();
};

HashMap.prototype.firstWhere = function (func) {
	var nova_local_0;
	var bucket;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				if (func(pair)) {
					return pair;
				}
			}
		}
	}
	return null;
};

HashMap.prototype.forEach = function (func) {
	var i;
	var nova_local_0;
	var bucket;
	i = 0;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var pair;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			pair = nova_local_1.next();
			if (pair != null && pair != 0) {
				func(pair, i++, this);
			}
		}
	}
};

HashMap.prototype.getBucket = function (key) {
	return get((key.hashCodeLong() & (this.buckets.count - 1)));
};

HashMap.prototype.put = function (key, value) {
	var bucket;
	bucket = this.getBucket(key);
	bucket.add(new Pair(key, value));
	return this;
};

HashMap.prototype.getPair = function (key) {
	var contextArg5;
	return first();
};

HashMap.prototype.get = function (key) {
	var pair;
	pair = this.getPair(key);
	if (pair != null) {
		return value;
	}
	return null;
};

HashMap.prototype.remove = function (key) {
	var bucket;
	var i;
	var nova_local_0;
	var pair;
	bucket = this.getBucket(key);
	i = 0;
	nova_local_0 = (bucket).iterator();
	while (nova_local_0.hasNext()) {
		pair = nova_local_0.next();
		if (pair.key.equals(key)) {
			bucket.remove(i);
			return value;
		}
		i++;
	}
	return null;
};

HashMap.prototype.containsKey = function (key) {
	return this.getPair(key) != null;
};

HashMap.prototype.testLambda1 = function (_1, _2, _3) {
	return _1;
};

HashMap.prototype.testLambda2 = function (_1, _2, _3) {
	return _1;
};

HashMap.prototype.testLambda3 = function (_1, _2, _3) {
	return _1;
};

HashMap.prototype.testLambda4 = function (_1, _2, _3) {
	return _1;
};

HashMap.prototype.testLambda5 = function (x, _2, _3) {
	return x != 0 && x != null && x.key.equals(key);
};

HashMap.prototype.testLambda6 = function (_1, _2, _3) {
	return new Array(bucketSize);
};

HashMap.prototype.super = function () {
};

HashMap.prototype.put = function (key, value) {
};



