var DBConnector = function () {
	var self = this;
	
	this.mysql = nova_null;
	this.result = nova_null;
	this.error = nova_null;
	
	this.DBConnector = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.this = function () {
		self.error = "";
	};
	
	this.connect = function (host, user, password) {
		self.mysql = self.nova_db_connect1(host.chars.data, user.chars.data, password.chars.data);
		self.updateError();
	};
	
	this.connect = function (host, user, password, database) {
		self.mysql = self.nova_db_connect2(host.chars.data, user.chars.data, password.chars.data, database.chars.data);
		self.updateError();
	};
	
	this.connect = function (host, user, password, database, port, unixSocket, clientFlag) {
		self.mysql = self.nova_db_connect3(host.chars.data, user.chars.data, password.chars.data, database.chars.data, port, unixSocket.chars.data, clientFlag);
		self.updateError();
	};
	
	this.updateError = function () {
		self.error = new String(self.nova_db_error(self.mysql));
	};
	
	this.changeUser = function (username, password, database) {
		self.nova_user_select(self.mysql, username.chars.data, password.chars.data, database.chars.data);
		self.updateError();
	};
	
	this.query = function (query) {
		var arrays;
		self.result = self.nova_exec_query(self.mysql, query.chars.data);
		if (self.result == 0) {
			self.updateError();
			return null;
		}
		arrays = self.nova_get_results(self.mysql, self.result);
		if (arrays != 0) {
			var numRows;
			var numCols;
			var rows;
			var r;
			var i;
			numRows = self.nova_num_rows(self.mysql);
			numCols = self.nova_num_cols(self.result);
			rows = new Array(numRows);
			i = 0;
			for (; i < numRows; i++) {
				var j;
				rows.set(i, new Array(numCols));
				j = 0;
				for (; j < numCols; j++) {
					rows.get(i).set(j, new String(arrays));
				}
			}
			r = new ResultSet(rows, numCols);
			self.updateError();
			return r;
		}
		self.updateError();
		return null;
	};
	
	this.close = function () {
		self.nova_db_close(self.mysql);
		self.updateError();
	};
	
	this.super = function () {
	};
	
	
};


