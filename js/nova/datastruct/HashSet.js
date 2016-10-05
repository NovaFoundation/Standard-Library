var HashSet = function () {
	this.buckets = nova_null;
	this.bucketSize = 0;
	this.size = 0;
	
	
};

HashSet.prototype.HashSet = function () {
	this.this();
};

HashSet.prototype.HashSet = function (bucketCount, bucketSize) {
	this.this(bucketCount, bucketSize);
};

HashSet.prototype.destroy = function () {
};

HashSet.prototype.this = function () {
	this.this(5, 5);
};

HashSet.prototype.this = function (bucketCount, bucketSize) {
	var contextArg11;
	this.buckets = new Array(bucketCount).map(this.testLambda11);
	this = bucketSize;
};

HashSet.prototype.toArray = function () {
	var contextArg7;
	return this.map(this.testLambda7);
};

HashSet.prototype.any = function (func) {
	var nova_local_0;
	var bucket;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				if (func(v)) {
					return true;
				}
			}
		}
	}
	return false;
};

HashSet.prototype.all = function (func) {
	var nova_local_0;
	var bucket;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				if (!func(v)) {
					return false;
				}
			}
		}
	}
	return true;
};

HashSet.prototype.map = function (func) {
	var array;
	var i;
	var nova_local_0;
	var bucket;
	array = new Array();
	i = 0;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				array.add(func(v, i++, this));
			}
		}
	}
	return array;
};

HashSet.prototype.filter = function (func) {
	var array;
	var i;
	var nova_local_0;
	var bucket;
	array = new Array();
	i = 0;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				if (func(v, i++, this)) {
					array.add(v);
				}
			}
		}
	}
	return array;
};

HashSet.prototype.join = function (delimiter) {
	var i;
	var output;
	var nova_local_0;
	var bucket;
	i = 0;
	output = "";
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				if (i > 0) {
					output = output.concat(delimiter);
				}
				output = output.concat(v.toString());
			}
		}
	}
	return output;
};

HashSet.prototype.skip = function (num) {
	var contextArg8;
	return skip(num);
};

HashSet.prototype.take = function (num) {
	var contextArg9;
	return take(num);
};

HashSet.prototype.reverse = function () {
	var contextArg10;
	return reverse();
};

HashSet.prototype.firstWhere = function (func) {
	var nova_local_0;
	var bucket;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				if (func(v)) {
					return v;
				}
			}
		}
	}
	return null;
};

HashSet.prototype.forEach = function (func) {
	var i;
	var nova_local_0;
	var bucket;
	i = 0;
	nova_local_0 = (this.buckets).iterator();
	while (nova_local_0.hasNext()) {
		var nova_local_1;
		var v;
		bucket = nova_local_0.next();
		nova_local_1 = (bucket).iterator();
		while (nova_local_1.hasNext()) {
			v = nova_local_1.next();
			if (v != null) {
				func(v, i++, this);
			}
		}
	}
};

HashSet.prototype.getBucket = function (value) {
	return get((value.hashCodeLong() & (this.buckets.count - 1)));
};

HashSet.prototype.add = function (value) {
	this.getBucket(value).add(value);
	return this;
};

HashSet.prototype.get = function (value) {
	var nova_local_0;
	var v;
	nova_local_0 = (this.getBucket(value)).iterator();
	while (nova_local_0.hasNext()) {
		v = nova_local_0.next();
		if (v.equals(value)) {
			return v;
		}
	}
	return null;
};

HashSet.prototype.remove = function (value) {
	var bucket;
	var i;
	var nova_local_0;
	var v;
	bucket = this.getBucket(value);
	i = 0;
	nova_local_0 = (bucket).iterator();
	while (nova_local_0.hasNext()) {
		v = nova_local_0.next();
		if (v.equals(value)) {
			bucket.remove(i);
			return v;
		}
		i++;
	}
	return null;
};

HashSet.prototype.contains = function (value) {
	return this.get(value) != null;
};

HashSet.prototype.toString = function () {
	return concat((this.join(new String(", "))).concat(new String("]")));
};

HashSet.prototype.testLambda7 = function (_1, _2, _3) {
	return _1;
};

HashSet.prototype.testLambda8 = function (_1, _2, _3) {
	return _1;
};

HashSet.prototype.testLambda9 = function (_1, _2, _3) {
	return _1;
};

HashSet.prototype.testLambda10 = function (_1, _2, _3) {
	return _1;
};

HashSet.prototype.testLambda11 = function (_1, _2, _3) {
	return new Array(bucketSize);
};

HashSet.prototype.super = function () {
};



