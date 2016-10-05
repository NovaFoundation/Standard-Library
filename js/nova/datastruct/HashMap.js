var HashMap = function () {
	var self = this;
	
	this.buckets = nova_null;
	this.bucketSize = 0;
	this.size = 0;
	
	this.HashMap = function () {
		self.this();
	};
	
	this.HashMap = function (bucketCount, bucketSize) {
		self.this(bucketCount, bucketSize);
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.this(5, 5);
	};
	
	this.this = function (bucketCount, bucketSize) {
		var contextArg6;
		self.buckets = new Array(bucketCount).map(self.testLambda6);
		self = bucketSize;
	};
	
	this.toArray = function () {
		var contextArg1;
		return self.map(self.testLambda1);
	};
	
	this.contains = function (value) {
		var pair;
		pair = self.getPair(value.key);
		if (pair != null) {
			return pair.value == value.value;
		}
		return false;
	};
	
	this.any = function (func) {
		var nova_local_0;
		var bucket;
		nova_local_0 = (self.buckets).iterator();
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
	
	this.all = function (func) {
		var nova_local_0;
		var bucket;
		nova_local_0 = (self.buckets).iterator();
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
			var pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext()) {
				pair = nova_local_1.next();
				if (pair != null && pair != 0) {
					array.add(func(pair, i++, self));
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
			var pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext()) {
				pair = nova_local_1.next();
				if (pair != null && pair != 0) {
					if (func(pair, i++, self)) {
						array.add(pair);
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
	
	this.skip = function (num) {
		var contextArg2;
		return skip(num);
	};
	
	this.take = function (num) {
		var contextArg3;
		return take(num);
	};
	
	this.reverse = function () {
		var contextArg4;
		return reverse();
	};
	
	this.firstWhere = function (func) {
		var nova_local_0;
		var bucket;
		nova_local_0 = (self.buckets).iterator();
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
	
	this.forEach = function (func) {
		var i;
		var nova_local_0;
		var bucket;
		i = 0;
		nova_local_0 = (self.buckets).iterator();
		while (nova_local_0.hasNext()) {
			var nova_local_1;
			var pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext()) {
				pair = nova_local_1.next();
				if (pair != null && pair != 0) {
					func(pair, i++, self);
				}
			}
		}
	};
	
	this.getBucket = function (key) {
		return get((key.hashCodeLong() & (self.buckets.count - 1)));
	};
	
	this.put = function (key, value) {
		var bucket;
		bucket = self.getBucket(key);
		bucket.add(new Pair(key, value));
		return self;
	};
	
	this.getPair = function (key) {
		var contextArg5;
		return first();
	};
	
	this.get = function (key) {
		var pair;
		pair = self.getPair(key);
		if (pair != null) {
			return value;
		}
		return null;
	};
	
	this.remove = function (key) {
		var bucket;
		var i;
		var nova_local_0;
		var pair;
		bucket = self.getBucket(key);
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
	
	this.containsKey = function (key) {
		return self.getPair(key) != null;
	};
	
	this.testLambda1 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda2 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda3 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda4 = function (_1, _2, _3) {
		return _1;
	};
	
	this.testLambda5 = function (x, _2, _3) {
		return x != 0 && x != null && x.key.equals(key);
	};
	
	this.testLambda6 = function (_1, _2, _3) {
		return new Array(bucketSize);
	};
	
	this.super = function () {
	};
	
	this.put = function (key, value) {
	};
	
	
};


