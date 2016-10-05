var System = function () {
	var self = this;
	
	
	this.System = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.exit = function (code) {
		self.externalExit(code);
	};
	
	this.exit = function (code, message) {
		self.exit(code, message, false);
	};
	
	this.exit = function (code, message, log) {
		if (log) {
			var f;
			f = new File(new String("Log").concat(Long.toString(Time.accessor_currentTimeMillis()).concat(new String(".txt"))));
			if (f.create()) {
				f.writeLine(message);
			}
		}
		Console.writeLine(message);
		self.exit(code);
	};
	
	this.execute = function (command) {
		var pipe;
		var f;
		pipe = self.getPipe(command.chars.data, self.exit);
		f = new File(pipe);
		if (!f.accessor_exists()) {
			self.exit(1, "Unable to open pipe");
		}
		return new Process(new StreamReader(f));
	};
	
	this.this = function () {
	};
	
	this.super = function () {
	};
	
	
};


