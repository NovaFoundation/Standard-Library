package nova.primitive.number;

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
import nova.datastruct.Comparable;
import nova.primitive.number.Integer;

public class NovaShort
{
	
	public short value;
	
	
	
	
	public NovaShort(short value)
	{
		init(value);
	}
	
	public void init(short value)
	{
		this.value = value;
	}
	
	public static int numDigits(short number)
	{
		return NovaLong.numDigits(number);
	}
	
	public static NovaString toString(short value)
	{
		return NovaLong.toString(value);
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public short compareTo(short other)
	{
		return value - other;
	}
	
	public short multiply(short value)
	{
		return this.value * value;
	}
	
}
