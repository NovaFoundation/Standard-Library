var Timer = function () {
	this.startTime = 0;
	this.endTime = 0;
	
	
};

Timer.prototype.Timer = function () {
	this.this();
};

Timer.prototype.destroy = function () {
};

Timer.prototype.this = function () {
};

Timer.prototype.start = function () {
	this.startTime = Time.accessor_currentTimeMillis();
	this.endTime = 0;
	return this;
};

Timer.prototype.stop = function () {
	this.endTime = Time.accessor_currentTimeMillis();
	return this;
};

Timer.prototype.reset = function () {
	this.startTime = 0;
	this.endTime = 0;
	return this;
};

Timer.prototype.toString = function () {
	return concat(Long.toString((this.accessor_duration())).concat(new String(" }")));};

Timer.prototype.accessor_duration = function () {
	return this.endTime - this.startTime;
};

Timer.prototype.mutator_duration = function () {
};

Timer.prototype.super = function () {
};



