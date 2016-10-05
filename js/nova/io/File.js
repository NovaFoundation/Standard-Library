var File = function () {
	this.fp = nova_null;
	this.location = nova_null;
	
	
};

File.prototype.File = function (location) {
	this.this(location);
};

File.prototype.File = function (fp) {
	this.this(fp);
};

File.prototype.destroy = function () {
};

File.prototype.this = function (location) {
	this = location;
	this.fp = this.fopen(location.chars.data, "r+");
};

File.prototype.this = function (fp) {
	this = fp;
};

File.prototype.delete = function () {
	this.close();
	return this.remove(this.location.chars.data) == 0;
};

File.prototype.reopen = function () {
	this.close();
	this.fp = this.fopen(this.location.chars.data, "r+");
};

File.prototype.rewind = function () {
	this.extRewind(this.fp);
};

File.prototype.clearContents = function () {
	if (this.accessor_exists()) {
		this.fp = this.fopen(this.location.chars.data, "w");
	}
};

File.prototype.create = function () {
	if (!this.accessor_exists()) {
		this.fp = this.fopen(this.location.chars.data, "w");
		if (!this.accessor_exists()) {
			;
			return false;
		}
		this.reopen();
		if (!this.accessor_exists()) {
			;
			return false;
		}
		return true;
	}
	return false;
};

File.prototype.readAllContents = function () {
	var data;
	var line;
	data = "";
	line = this.readLine();
	while (line != null) {
		if (data.count > 0) {
			data = data.concat(new String("\n"));
		}
		data = data.concat(line);
		line = this.readLine();
	}
	return data;
};

File.prototype.readLine = function () {
	var buf;
	var size;
	var line;
	var c;
	var index;
	buf = 5;
	size = buf;
	line = [];
	c = this.getc(this.fp);
	if (c == this.EOF) {
		return null;
	}
	index = 0;
	while (c != '\n' && c != this.EOF) {
		if (index >= size) {
			size = size + buf;
			line = this.realloc(line, size);
		}
		line = c;
		c = this.getc(this.fp);
	}
	if (index >= size) {
		size++;
		line = this.realloc(line, size);
	}
	line = '\0';
	line = this.realloc(line, index);
	return new String(line);
};

File.prototype.writeLine = function (line) {
	this.write(line.concat(new String("\n")));
};

File.prototype.write = function (data) {
	this.fputs(data.chars.data, this.fp);
	this.flush();
};

File.prototype.flush = function () {
	this.fflush(this.fp);
};

File.prototype.close = function () {
	if (this.accessor_exists()) {
		this.fclose(this.fp);
	}
};

File.prototype.accessor_exists = function () {
	return this.fp != 0;
};

File.prototype.mutator_exists = function () {
};

File.prototype.accessor_maxOpenFiles = function () {
	return this.extGetMaxOpenFiles();
};

File.prototype.mutator_maxOpenFiles = function (value) {
	var min;
	var max;
	min = 20;
	max = 2048;
	if (value > max || value < min) {
		Console.writeLine(new String("Invalid max number of open files: ").concat(Int.toString(value).concat(new String("\nValid values include ").concat(Short.toString(min).concat(new String("-").concat(Short.toString(max)))))));
	} else {
		this.extSetMaxOpenFiles(value);
	}
	return value;
};

File.prototype.super = function () {
};


(function () {
		var exitLog;
		exitLog = new File(new String("log").concat(Long.toString(Time.accessor_currentTimeMillis())));
})();

