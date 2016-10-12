package nova.gc;

import java.util.Optional;
import nova.exception.ExceptionData;
import nova.exception.Exception;
import nova.exception.DivideByZeroException;
import nova.io.NovaConsole;
import nova.primitive.number.Number;
import nova.primitive.number.NovaByte;
import nova.primitive.number.NovaShort;
import nova.primitive.number.NovaInt;
import nova.primitive.number.NovaLong;
import nova.primitive.number.NovaFloat;
import nova.primitive.number.NovaDouble;
import nova.primitive.Null;
import nova.primitive.number.Char;
import nova.primitive.Bool;
import nova.datastruct.list.NovaArray;
import nova.datastruct.list.IntArray;
import nova.datastruct.list.CharArray;
import nova.datastruct.list.DoubleArray;
import nova.datastruct.list.IntRange;
import nova.thread.Thread;
import nova.thread.async.Async;
import nova.gc.GC;
import nova.math.NovaMath;
import nova.NovaObject;
import nova.NovaString;
import nova.System;
import nova.Class;

public class GC extends NovaObject
{
	
	
	
	
	
	public GC()
	{
		init();
	}
	
	public int accessor_freeBytes()
	{
		return nova_gc_getFreeBytes();
	}
	
	private int mutator_freeBytes()
	{
	}
	
	public int accessor_totalBytes()
	{
		return nova_gc_getTotalBytes();
	}
	
	private int mutator_totalBytes()
	{
	}
	
	public int accessor_heapSize()
	{
		return nova_gc_getHeapSize();
	}
	
	private int mutator_heapSize()
	{
	}
	
	public int accessor_bytesSinceGC()
	{
		return nova_gc_getBytesSinceGC();
	}
	
	private int mutator_bytesSinceGC()
	{
	}
	
	
	
	
	
	
	
	
	
	public static void init()
	{
		nova_gc_init();
	}
	
	public static void collect()
	{
		nova_gc_collect();
	}
	
	public static void enableIncremental()
	{
		nova_gc_enableIncremental();
	}
	
	public static void dump()
	{
		nova_gc_dump();
	}
	
	public void init()
	{
	}
	
}
