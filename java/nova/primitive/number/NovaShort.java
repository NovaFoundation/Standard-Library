package nova.primitive.number;

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
import nova.datastruct.Comparable;
import nova.primitive.number.Integer;

public class NovaShort extends Number implements Comparable, Integer
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
	
	public short compareTo(short other)
	{
		return value - other;
	}
	
	public short multiply(short value)
	{
		return this.value * value;
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public static int numDigits(short number)
	{
		return NovaLong.numDigits(number);
	}
	
	public static NovaString toString(short value)
	{
		return NovaLong.toString(value);
	}
	
}
