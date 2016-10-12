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
import nova.primitive.number.RealNumber;

public class NovaFloat extends Number implements Comparable, RealNumber
{
	
	public float value;
	
	
	
	
	public NovaFloat(int value)
	{
		init(value);
	}
	
	public void init(int value)
	{
		this.value = value;
	}
	
	public static int numDigits(float number)
	{
		return NovaDouble.numDigits(number);
	}
	
	public static NovaString toString(float value)
	{
		return NovaDouble.toString(value);
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public float compareTo(float other)
	{
		return value - other;
	}
	
	public float multiply(float value)
	{
		return this.value * value;
	}
	
}
