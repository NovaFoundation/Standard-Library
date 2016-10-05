var DBConnector = function () {
	this.mysql = nova_null;
	this.result = nova_null;
	this.error = nova_null;
	
	
};

DBConnector.prototype.DBConnector = function () {
	this.this();
};

DBConnector.prototype.destroy = function () {
};

DBConnector.prototype.this = function () {
	this.error = "";
};

DBConnector.prototype.connect = function (host, user, password) {
	this.mysql = this.nova_db_connect1(host.chars.data, user.chars.data, password.chars.data);
	this.updateError();
};

DBConnector.prototype.connect = function (host, user, password, database) {
	this.mysql = this.nova_db_connect2(host.chars.data, user.chars.data, password.chars.data, database.chars.data);
	this.updateError();
};

DBConnector.prototype.connect = function (host, user, password, database, port, unixSocket, clientFlag) {
	this.mysql = this.nova_db_connect3(host.chars.data, user.chars.data, password.chars.data, database.chars.data, port, unixSocket.chars.data, clientFlag);
	this.updateError();
};

DBConnector.prototype.updateError = function () {
	this.error = new String(this.nova_db_error(this.mysql));
};

DBConnector.prototype.changeUser = function (username, password, database) {
	this.nova_user_select(this.mysql, username.chars.data, password.chars.data, database.chars.data);
	this.updateError();
};

DBConnector.prototype.query = function (query) {
	var arrays;
	this.result = this.nova_exec_query(this.mysql, query.chars.data);
	if (this.result == 0) {
		this.updateError();
		return null;
	}
	arrays = this.nova_get_results(this.mysql, this.result);
	if (arrays != 0) {
		var numRows;
		var numCols;
		var rows;
		var r;
		var i;
		numRows = this.nova_num_rows(this.mysql);
		numCols = this.nova_num_cols(this.result);
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
		this.updateError();
		return r;
	}
	this.updateError();
	return null;
};

DBConnector.prototype.close = function () {
	this.nova_db_close(this.mysql);
	this.updateError();
};

DBConnector.prototype.super = function () {
};



