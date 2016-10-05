var HashSet = function () {
	var self = this;
	
	this.buckets = nova_null;
	this.bucketSize = 0;
	this.size = 0;
	
	this.HashSet = function () {
		self.this();
	};
	
	this.HashSet = function (bucketCount, bucketSize) {
		self.this(bucketCount, bucketSize);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.this(5, 5);
	};
	
	this.this = function (bucketCount, bucketSize) {
		var contextArg11;
		self.buckets = new Array(bucketCount).map(self.testLambda11);
		self = bucketSize;
	};
	
	this.toArray = function () {
		var contextArg7;
		return self.map(self.testLambda7);
	};
	
	this.any = function (func) {
		var nova_local_0;
		var bucket;
		nova_local_0 = (self.buckets).iterator();
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
	
	this.all = function (func) {
		var nova_local_0;
		var bucket;
		nova_local_0 = (self.buckets).iterator();
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
	
	this.map = function (func) {
		var array;
		var i;
		var nova_local_0;
		var bucket;
		array = new Array();
		i = 0;
		nova_local_0 = (self.buckets).iterator();
		while (nova_local_0.hasNext()) {
			var nova_local_1;
			var v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext()) {
				v = nova_local_1.next();
				if (v != null) {
					array.add(func(v, i++, self));
				}
			}
		}
		return array;
	};
	
	this.filter = function (func) {
		var array;
		var i;
		var nova_local_0;
		var bucket;
		array = new Array();
		i = 0;
		nova_local_0 = (self.buckets).iterator();
		while (nova_local_0.hasNext()) {
			var nova_local_1;
			var v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext()) {
				v = nova_local_1.next();
				if (v != null) {
					if (func(v, i++, self)) {
						array.add(v);
					}
				}
			}
		}
		return array;
	};
	
	this.join = function (delimiter) {
		var i;
		var output;
		var nova_local_0;
		var bucket;
		i = 0;
		output = "";
		nova_local_0 = (self.buckets).iterator();
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
	
	this.skip = function (num) {
		var contextArg8;
		return skip(num);
	};
	
	this.take = function (num) {
		var contextArg9;
		return take(num);
	};
	
	this.reverse = function () {
		var contextArg10;
		return reverse();
	};
	
	this.firstWhere = function (func) {
		var nova_local_0;
		var bucket;
		nova_local_0 = (self.buckets).iterator();
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
	
	this.forEach = function (func) {
		var i;
		var nova_local_0;
		var bucket;
		i = 0;
		nova_local_0 = (self.buckets).iterator();
		while (nova_local_0.hasNext()) {
			var nova_local_1;
			var v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext()) {
				v = nova_local_1.next();
				if (v != null) {
					func(v, i++, self);
				}
			}
		}
	};
	
	this.getBucket = function (value) {
		return get((value.hashCodeLong() & (self.buckets.count - 1)));
	};
	
	this.add = function (value) {
		self.getBucket(value).add(value);
		return self;
	};
	
	this.get = function (value) {
		var nova_local_0;
		var v;
		nova_local_0 = (self.getBucket(value)).iterator();
		while (nova_local_0.hasNext()) {
			v = nova_local_0.next();
			if (v.equals(value)) {
				return v;
			}
		}
		return null;
	};
	
	this.remove = function (value) {
		var bucket;
		var i;
		var nova_local_0;
		var v;
		bucket = self.getBucket(value);
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
	
	this.contains = function (value) {
		return self.get(value) != null;
	};
	
	this.toString = function () {
		return concat((self.join(new String(", "))).concat(new String("]")));
	};
	
	this.testLambda7 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda8 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda9 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda10 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda11 = function (_1, _2, _3) {
		return new Array(bucketSize);
	};
	
	this.super = function () {
	};
	
	
};


