package nova.gc;

import java.util.Optional;
import nova.exception.ExceptionData;
import nova.exception.Exception;
import nova.exception.DivideByZeroException;
import nova.io.Console;
import nova.primitive.number.Number;
import nova.primitive.number.Byte;
import nova.primitive.number.Short;
import nova.primitive.number.Int;
import nova.primitive.number.Long;
import nova.primitive.number.Float;
import nova.primitive.number.Double;
import nova.primitive.Null;
import nova.primitive.number.Char;
import nova.primitive.Bool;
import nova.datastruct.list.Array;
import nova.datastruct.list.IntArray;
import nova.datastruct.list.CharArray;
import nova.datastruct.list.DoubleArray;
import nova.datastruct.list.IntRange;
import nova.thread.Thread;
import nova.thread.async.Async;
import nova.gc.GC;
import nova.math.Math;
import nova.Object;
import nova.String;
import nova.System;
import nova.Class;

public class GC
{
	
	
	
	
	
	public GC()
	{
		init();
	}
	
	public int freeBytes()
	{
		return nova_gc_getFreeBytes();
	}
	
	private int freeBytes()
	{
	}
	
	public int totalBytes()
	{
		return nova_gc_getTotalBytes();
	}
	
	private int totalBytes()
	{
	}
	
	public int heapSize()
	{
		return nova_gc_getHeapSize();
	}
	
	private int heapSize()
	{
	}
	
	public int bytesSinceGC()
	{
		return nova_gc_getBytesSinceGC();
	}
	
	private int bytesSinceGC()
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
