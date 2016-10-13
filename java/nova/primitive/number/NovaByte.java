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

public class NovaByte extends Number implements Comparable, Integer
{
	
	public byte value;
	
	
	
	
	public NovaByte(byte value)
	{
		init(value);
	}
	
	public void init(byte value)
	{
		this.value = value;
	}
	
	public static int numDigits(byte number)
	{
		return NovaLong.numDigits(number);
	}
	
	public static NovaString toString(byte value)
	{
		return NovaLong.toString(value);
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public byte compareTo(byte other)
	{
		return value - other;
	}
	
	public byte multiply(byte value)
	{
		return this.value * value;
	}
	
}