var No3Selection = function () {
	var self = this;
	
	this.selection = nova_null;
	
	this.No3Selection = function (selection) {
		self.this(selection);
	};
	
	this.destroy = function () {
	};
	
	this.this = function (selection) {
		self = selection;
	};
	
	this.toJs = function () {
		return concat((self.selection).concat(new String("')")));
};

this.super = function () {
};

};


