var ExceptionData = function () {
	var self = this;
	
	this.buf = nova_null;
	this.parent = nova_null;
	this.codes = nova_null;
	this.thrownException = nova_null;
	
	this.ExceptionData = function (buf) {
		self.this(buf);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (buf) {
		self = buf;
		self.codes = new IntArray();
	};
	
	this.addCode = function (code) {
		self.codes.add(code);
	};
	
	this.getDataByCode = function (code) {
		var data;
		data = self;
		;
		return null;
	};
	
	this.jumpToBuffer = function (code) {
		var data;
		data = self.getDataByCode(code);
		if (data == self.NULL) {
			Console.writeLine("Could not get exception buffer!");
			return;
		}
		if (data.parent == null) {
			code = 1;
		}
		self.jump(data.buf, code);
	};
	
	this.testLambda19 = function (_1) {
		return _1 == code;
	};
	
	this.super = function () {
	};
	
	
};


