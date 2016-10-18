package nova;

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
import nova.operators.Equals;

public class NovaObject implements Equals
{
	
	
	
	
	
	public NovaObject()
	{
		init();
	}
	
	public NovaString accessor_hashCode()
	{
		return new NovaString("No hashcode available");
	}
	
	private NovaString mutator_hashCode()
	{
	}
	
	public long accessor_hashCodeLong()
	{
		return strtol(hashCode(this), NULL, 16);
	}
	
	private long mutator_hashCodeLong()
	{
	}
	
	
	
	public boolean equals(NovaObject another)
	{
		return this == another;
	}
	
	public NovaString toString()
	{
		return new NovaString("[Object @").concat((accessor_hashCode()).concat(new NovaString("]")));
	}
	
	public void init()
	{
	}
	
}
