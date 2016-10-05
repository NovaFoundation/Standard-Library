var File = function () {
	var self = this;
	
	this.fp = nova_null;
	this.location = nova_null;
	
	this.File = function (location) {
		self.this(location);
	};
	
	this.File = function (fp) {
		self.this(fp);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (location) {
		self = location;
		self.fp = self.fopen(location.chars.data, "r+");
	};
	
	this.this = function (fp) {
		self = fp;
	};
	
	this.delete = function () {
		self.close();
		return self.remove(self.location.chars.data) == 0;
	};
	
	this.reopen = function () {
		self.close();
		self.fp = self.fopen(self.location.chars.data, "r+");
	};
	
	this.rewind = function () {
		self.extRewind(self.fp);
	};
	
	this.clearContents = function () {
		if (self.accessor_exists()) {
			self.fp = self.fopen(self.location.chars.data, "w");
		}
	};
	
	this.create = function () {
		if (!self.accessor_exists()) {
			self.fp = self.fopen(self.location.chars.data, "w");
			if (!self.accessor_exists()) {
				;
				return false;
			}
			self.reopen();
			if (!self.accessor_exists()) {
				;
				return false;
			}
			return true;
		}
		return false;
	};
	
	this.readAllContents = function () {
		var data;
		var line;
		data = "";
		line = self.readLine();
		while (line != null) {
			if (data.count > 0) {
				data = data.concat(new String("\n"));
			}
			data = data.concat(line);
			line = self.readLine();
		}
		return data;
	};
	
	this.readLine = function () {
		var buf;
		var size;
		var line;
		var c;
		var index;
		buf = 5;
		size = buf;
		line = [];
		c = self.getc(self.fp);
		if (c == self.EOF) {
			return null;
		}
		index = 0;
		while (c != '\n' && c != self.EOF) {
			if (index >= size) {
				size = size + buf;
				line = self.realloc(line, size);
			}
			line = c;
			c = self.getc(self.fp);
		}
		if (index >= size) {
			size++;
			line = self.realloc(line, size);
		}
		line = '\0';
		line = self.realloc(line, index);
		return new String(line);
	};
	
	this.writeLine = function (line) {
		self.write(line.concat(new String("\n")));
	};
	
	this.write = function (data) {
		self.fputs(data.chars.data, self.fp);
		self.flush();
	};
	
	this.flush = function () {
		self.fflush(self.fp);
	};
	
	this.close = function () {
		if (self.accessor_exists()) {
			self.fclose(self.fp);
		}
	};
	
	this.accessor_exists = function () {
		return self.fp != 0;
	};
	
	this.mutator_exists = function () {
	};
	
	this.accessor_maxOpenFiles = function () {
		return self.extGetMaxOpenFiles();
	};
	
	this.mutator_maxOpenFiles = function (value) {
		var min;
		var max;
		min = 20;
		max = 2048;
		if (value > max || value < min) {
			Console.writeLine(new String("Invalid max number of open files: ").concat(Int.toString(value).concat(new String("\nValid values include ").concat(Short.toString(min).concat(new String("-").concat(Short.toString(max)))))));
		} else {
			self.extSetMaxOpenFiles(value);
		}
		return value;
	};
	
	this.super = function () {
	};
	
	
};

(function () {
		var exitLog;
		exitLog = new File(new String("log").concat(Long.toString(Time.accessor_currentTimeMillis())));
})();

