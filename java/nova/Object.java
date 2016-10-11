package nova;

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
import nova.operators.Equals;

public class NovaObject
{
	
	
	
	
	
	public NovaObject()
	{
		init();
	}
	
	public NovaString hashCode()
	{
	}
	
	private NovaString hashCode()
	{
	}
	
	public long hashCodeLong()
	{
		return strtol(hashCode(this), NULL, 16);
	}
	
	private long hashCodeLong()
	{
	}
	
	
	
	public NovaString toString()
	{
		return new NovaString("[Object @").concat((hashCode()).concat(new NovaString("]")));
	}
	
	public boolean equals(NovaObject another)
	{
		return this == another;
	}
	
	public void init()
	{
	}
	
}
