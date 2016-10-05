var Date = function () {
	this.year = 0;
	this.month = 0;
	this.day = 0;
	this.hour = 0;
	this.minute = 0;
	this.second = 0;
	
	
};

Date.prototype.Date = function () {
	this.this();
};

Date.prototype.destroy = function () {
};

Date.prototype.this = function () {
	this.updateTime();
};

Date.prototype.decodeDate = function (prototype, date) {
};

Date.prototype.updateTime = function () {
	this.nova_updateTime();
	this.year = this.nova_getYear();
	this.month = this.nova_getMonth();
	this.day = this.nova_getDay();
	this.hour = this.nova_getHour();
	this.minute = this.nova_getMinute();
	this.second = this.nova_getSecond();
};

Date.prototype.formatDate = function (str) {
	return this.formatDate(str, this.month, this.day, this.year, this.hour, this.minute, this.second);
};

Date.prototype.formatDate = function (str, first, second, third, fourth, fifth, sixth) {
	var data;
	data = this.nova_formatDate(str.chars.data, first, second, third, fourth, fifth, sixth);
	return new String(data);
};

Date.prototype.super = function () {
};



