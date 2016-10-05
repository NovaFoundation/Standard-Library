var GC = function () {
	
	
};

GC.prototype.GC = function () {
	this.this();
};

GC.prototype.destroy = function () {
};

GC.prototype.init = function () {
	this.nova_gc_init();
};

GC.prototype.collect = function () {
	this.nova_gc_collect();
};

GC.prototype.enableIncremental = function () {
	this.nova_gc_enableIncremental();
};

GC.prototype.dump = function () {
	this.nova_gc_dump();
};

GC.prototype.this = function () {
};

GC.prototype.accessor_freeBytes = function () {
	return this.nova_gc_getFreeBytes();
};

GC.prototype.mutator_freeBytes = function () {
};

GC.prototype.accessor_totalBytes = function () {
	return this.nova_gc_getTotalBytes();
};

GC.prototype.mutator_totalBytes = function () {
};

GC.prototype.accessor_heapSize = function () {
	return this.nova_gc_getHeapSize();
};

GC.prototype.mutator_heapSize = function () {
};

GC.prototype.accessor_bytesSinceGC = function () {
	return this.nova_gc_getBytesSinceGC();
};

GC.prototype.mutator_bytesSinceGC = function () {
};

GC.prototype.super = function () {
};



