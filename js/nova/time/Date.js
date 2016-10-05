var Date = function () {
	var self = this;
	
	this.year = 0;
	this.month = 0;
	this.day = 0;
	this.hour = 0;
	this.minute = 0;
	this.second = 0;
	
	this.Date = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.updateTime();
	};
	
	this.decodeDate = function (prototype, date) {
	};
	
	this.updateTime = function () {
		self.nova_updateTime();
		self.year = self.nova_getYear();
		self.month = self.nova_getMonth();
		self.day = self.nova_getDay();
		self.hour = self.nova_getHour();
		self.minute = self.nova_getMinute();
		self.second = self.nova_getSecond();
	};
	
	this.formatDate = function (str) {
		return self.formatDate(str, self.month, self.day, self.year, self.hour, self.minute, self.second);
	};
	
	this.formatDate = function (str, first, second, third, fourth, fifth, sixth) {
		var data;
		data = self.nova_formatDate(str.chars.data, first, second, third, fourth, fifth, sixth);
		return new String(data);
	};
	
	this.super = function () {
	};
	
	
};


