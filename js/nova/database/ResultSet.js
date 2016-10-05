var ResultSet = function () {
	var self = this;
	
	this.numCols = 0;
	this.rows = nova_null;
	
	this.ResultSet = function (rows, numCols) {
		self.this(rows, numCols);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (rows, numCols) {
		self = rows;
		self = numCols;
	};
	
	this.accessor_numRows = function () {
		return count;
	};
	
	this.super = function () {
	};
	
	
};


