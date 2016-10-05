var Console = function () {
	
	
};

Console.prototype.Console = function () {
	this.this();
};

Console.prototype.destroy = function () {
};

Console.prototype.writeLine = function () {
	this.writeLine("");
};

Console.prototype.writeLine = function (text) {
	this.write(text.concat(new String("\n")));
};

Console.prototype.writeLine = function (obj) {
	this.writeLine(obj.toString());
};

Console.prototype.writeLine = function (num) {
	this.writeLine(Double.toString(num));
};

Console.prototype.writeLine = function (num) {
	this.writeLine(Double.toString(num));
};

Console.prototype.writeLine = function (num) {
	this.writeLine(Long.toString(num));
};

Console.prototype.writeLine = function (num) {
	this.writeLine(Int.toString(num));
};

Console.prototype.writeLine = function (num) {
	this.writeLine(Int.toString(num));
};

Console.prototype.writeLine = function (num) {
	this.writeLine(Byte.toString(num));
};

Console.prototype.writeLine = function (c) {
	this.writeLine(Char.toString(c));
};

Console.prototype.write = function (text) {
	var cText;
	cText = text.chars;
	this.fputs(cText.data, this.stdout);
	this.flushOutput();
};

Console.prototype.write = function (obj) {
	this.write(obj.toString());
};

Console.prototype.write = function (num) {
	this.write(Double.toString(num));
};

Console.prototype.write = function (num) {
	this.write(Double.toString(num));
};

Console.prototype.write = function (num) {
	this.write(Long.toString(num));
};

Console.prototype.write = function (num) {
	this.write(Int.toString(num));
};

Console.prototype.write = function (num) {
	this.write(Int.toString(num));
};

Console.prototype.write = function (num) {
	this.write(Byte.toString(num));
};

Console.prototype.write = function (c) {
	this.write(Char.toString(c));
};

Console.prototype.readInt = function () {
	var s;
	s = this.readLine();
	return parseInt(s);
};

Console.prototype.readDouble = function () {
	var s;
	s = this.readLine();
	return parseDouble(s);
};

Console.prototype.readChar = function () {
	var c;
	c = this.getchar();
	this.flushInput();
	return c;
};

Console.prototype.flushInput = function () {
	this.fseek(this.stdin, 0, this.SEEK_END);
};

Console.prototype.flushOutput = function () {
	this.fflush(this.stdout);
};

Console.prototype.readLine = function () {
	var line;
	var s;
	line = this.ufgets(this.stdin);
	s = new String(line);
	return s;
};

Console.prototype.readPassword = function () {
	var pass;
	this.setEcho(false);
	pass = this.readLine();
	this.setEcho(true);
	this.write("\n");
	return pass;
};

Console.prototype.setEcho = function (echo) {
	this.nova_setEcho(echo);
};

Console.prototype.clearScreen = function () {
	this.nova_clearScreen();
};

Console.prototype.waitForEnter = function () {
	var c;
	this.flushInput();
	c = [];
	this.fgets(c, 2, this.stdin);
};

Console.prototype.this = function () {
};

Console.prototype.super = function () {
};



