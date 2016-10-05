var System = function () {
	
	
};

System.prototype.System = function () {
	this.this();
};

System.prototype.destroy = function () {
};

System.prototype.exit = function (code) {
	this.externalExit(code);
};

System.prototype.exit = function (code, message) {
	this.exit(code, message, false);
};

System.prototype.exit = function (code, message, log) {
	if (log) {
		var f;
		f = new File(new String("Log").concat(Long.toString(Time.accessor_currentTimeMillis()).concat(new String(".txt"))));
		if (f.create()) {
			f.writeLine(message);
		}
	}
	Console.writeLine(message);
	this.exit(code);
};

System.prototype.execute = function (command) {
	var pipe;
	var f;
	pipe = this.getPipe(command.chars.data, this.exit);
	f = new File(pipe);
	if (!f.accessor_exists()) {
		this.exit(1, "Unable to open pipe");
	}
	return new Process(new StreamReader(f));
};

System.prototype.this = function () {
};

System.prototype.super = function () {
};



