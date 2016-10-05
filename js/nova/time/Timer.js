var Timer = function () {
	var self = this;
	
	this.startTime = 0;
	this.endTime = 0;
	
	this.Timer = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
	};
	
	this.start = function () {
		self.startTime = Time.accessor_currentTimeMillis();
		self.endTime = 0;
		return self;
	};
	
	this.stop = function () {
		self.endTime = Time.accessor_currentTimeMillis();
		return self;
	};
	
	this.reset = function () {
		self.startTime = 0;
		self.endTime = 0;
		return self;
	};
	
	this.toString = function () {
		return concat(Long.toString((self.accessor_duration())).concat(new String(" }")));
};

this.accessor_duration = function () {
	return self.endTime - self.startTime;
};

this.mutator_duration = function () {
};

this.super = function () {
};

};


