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

public class Char extends Number implements Comparable, Integer
{
	
	public char value;
	
	
	
	
	public Char(char value)
	{
		init(value);
	}
	
	public void init(char value)
	{
		this.value = value;
	}
	
	public static char toLowerCase(char c)
	{
		int id;
		id = (int)c;
		if (id >= 65 && id <= 90)
		{
			return (char)(id + 32);
		}
		return c;
	}
	
	public static char toUpperCase(char c)
	{
		int id;
		id = (int)c;
		if (id >= 97 && id <= 122)
		{
			return (char)(id - 32);
		}
		return c;
	}
	
	public char toLowerCase()
	{
		return toLowerCase(value);
	}
	
	public char toUpperCase()
	{
		return toUpperCase(value);
	}
	
	public char compareTo(char other)
	{
		return value - other;
	}
	
	public char multiply(char value)
	{
		return this.value * value;
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public static NovaString toString(char c)
	{
		return new NovaString(c);
	}
	
}
