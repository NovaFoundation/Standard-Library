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

public class NovaInt
{
	
	public int value;
	
	
	public static int MAX_VALUE;
	public static int MIN_VALUE;
	
	
	public NovaInt(int value)
	{
		init(value);
	}
	
	
	public void init(int value)
	{
		this.value = value;
	}
	
	public long getHashCodeLong()
	{
		return value;
	}
	
	public static int numDigits(int number)
	{
		return NovaLong.numDigits(number);
	}
	
	public static NovaString toString(int value)
	{
		return NovaLong.toString(value);
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public static int parseInt(NovaString num)
	{
		return atoi(num.chars.data);
	}
	
	public int compareTo(int other)
	{
		return value - other;
	}
	
	public int multiply(int value)
	{
		return this.value * value;
	}
	
}
