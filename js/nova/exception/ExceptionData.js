var ExceptionData = function () {
	this.buf = nova_null;
	this.parent = nova_null;
	this.codes = nova_null;
	this.thrownException = nova_null;
	
	
};

ExceptionData.prototype.ExceptionData = function (buf) {
	this.this(buf);
};

ExceptionData.prototype.destroy = function () {
};

ExceptionData.prototype.this = function (buf) {
	this = buf;
	this.codes = new IntArray();
};

ExceptionData.prototype.addCode = function (code) {
	this.codes.add(code);
};

ExceptionData.prototype.getDataByCode = function (code) {
	var data;
	data = this;
	;
	return null;
};

ExceptionData.prototype.jumpToBuffer = function (code) {
	var data;
	data = this.getDataByCode(code);
	if (data == this.NULL) {
		Console.writeLine("Could not get exception buffer!");
		return;
	}
	if (data.parent == null) {
		code = 1;
	}
	this.jump(data.buf, code);
};

ExceptionData.prototype.testLambda19 = function (_1) {
	return _1 == code;
};

ExceptionData.prototype.super = function () {
};



