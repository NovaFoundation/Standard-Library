var Console = function () {
	var self = this;
	
	
	this.Console = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.writeLine = function () {
		self.writeLine("");
	};
	
	this.writeLine = function (text) {
		self.write(text.concat(new String("\n")));
	};
	
	this.writeLine = function (obj) {
		self.writeLine(obj.toString());
	};
	
	this.writeLine = function (num) {
		self.writeLine(Double.toString(num));
	};
	
	this.writeLine = function (num) {
		self.writeLine(Double.toString(num));
	};
	
	this.writeLine = function (num) {
		self.writeLine(Long.toString(num));
	};
	
	this.writeLine = function (num) {
		self.writeLine(Int.toString(num));
	};
	
	this.writeLine = function (num) {
		self.writeLine(Int.toString(num));
	};
	
	this.writeLine = function (num) {
		self.writeLine(Byte.toString(num));
	};
	
	this.writeLine = function (c) {
		self.writeLine(Char.toString(c));
	};
	
	this.write = function (text) {
		var cText;
		cText = text.chars;
		self.fputs(cText.data, self.stdout);
		self.flushOutput();
	};
	
	this.write = function (obj) {
		self.write(obj.toString());
	};
	
	this.write = function (num) {
		self.write(Double.toString(num));
	};
	
	this.write = function (num) {
		self.write(Double.toString(num));
	};
	
	this.write = function (num) {
		self.write(Long.toString(num));
	};
	
	this.write = function (num) {
		self.write(Int.toString(num));
	};
	
	this.write = function (num) {
		self.write(Int.toString(num));
	};
	
	this.write = function (num) {
		self.write(Byte.toString(num));
	};
	
	this.write = function (c) {
		self.write(Char.toString(c));
	};
	
	this.readInt = function () {
		var s;
		s = self.readLine();
		return parseInt(s);
	};
	
	this.readDouble = function () {
		var s;
		s = self.readLine();
		return parseDouble(s);
	};
	
	this.readChar = function () {
		var c;
		c = self.getchar();
		self.flushInput();
		return c;
	};
	
	this.flushInput = function () {
		self.fseek(self.stdin, 0, self.SEEK_END);
	};
	
	this.flushOutput = function () {
		self.fflush(self.stdout);
	};
	
	this.readLine = function () {
		var line;
		var s;
		line = self.ufgets(self.stdin);
		s = new String(line);
		return s;
	};
	
	this.readPassword = function () {
		var pass;
		self.setEcho(false);
		pass = self.readLine();
		self.setEcho(true);
		self.write("\n");
		return pass;
	};
	
	this.setEcho = function (echo) {
		self.nova_setEcho(echo);
	};
	
	this.clearScreen = function () {
		self.nova_clearScreen();
	};
	
	this.waitForEnter = function () {
		var c;
		self.flushInput();
		c = [];
		self.fgets(c, 2, self.stdin);
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	
};


