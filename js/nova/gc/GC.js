var GC = function () {
	var self = this;
	
	
	this.GC = function () {
		self.this();
	};
	
	this.destroy = function () {
	};
	
	this.init = function () {
		self.nova_gc_init();
	};
	
	this.collect = function () {
		self.nova_gc_collect();
	};
	
	this.enableIncremental = function () {
		self.nova_gc_enableIncremental();
	};
	
	this.dump = function () {
		self.nova_gc_dump();
	};
	
	this.this = function () {
	};
	
	this.accessor_freeBytes = function () {
		return self.nova_gc_getFreeBytes();
	};
	
	this.mutator_freeBytes = function () {
	};
	
	this.accessor_totalBytes = function () {
		return self.nova_gc_getTotalBytes();
	};
	
	this.mutator_totalBytes = function () {
	};
	
	this.accessor_heapSize = function () {
		return self.nova_gc_getHeapSize();
	};
	
	this.mutator_heapSize = function () {
	};
	
	this.accessor_bytesSinceGC = function () {
		return self.nova_gc_getBytesSinceGC();
	};
	
	this.mutator_bytesSinceGC = function () {
	};
	
	this.super = function () {
	};
	
	
};


