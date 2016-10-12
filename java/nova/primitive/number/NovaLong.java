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

public class NovaLong extends Number implements Comparable, Integer
{
	
	public long value;
	
	
	public static long MAX_VALUE;
	public static long MIN_VALUE;
	
	
	public NovaLong(long value)
	{
		init(value);
	}
	
	public void init(long value)
	{
		this.value = value;
	}
	
	public static int numDigits(long number)
	{
		int size;
		size = 1;
		if (number < 0)
		{
			size++;
		}
		number = number / 10;
		while (number != 0)
		{
			number = number / 10;
			size++;
		}
		return size;
	}
	
	public static char[] toCharArray(long value)
	{
	}
	
	public static NovaString toString(long value)
	{
		int charOffset;
		int digits;
		char[] data;
		int offset;
		int nums;
		int index;
		charOffset = '0';
		digits = numDigits(value);
		data = new char[digits + 1];
		data[digits] = '\0';
		offset = 0;
		if (value < 0)
		{
			data[0] = '-';
			offset = 1;
		}
		nums = digits-- - offset;
		index = (int)0;
		for (; index < (int)nums; index++)
		{
			data[digits - index] = (char)(charOffset + NovaMath.abs(value % 10));
			value = value / 10;
		}
		return new NovaString(data);
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public long compareTo(long other)
	{
		return value - other;
	}
	
	public long multiply(long value)
	{
		return this.value * value;
	}
	
}
