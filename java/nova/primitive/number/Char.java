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

public class Char
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
	
	public static NovaString toString(char c)
	{
		return new NovaString(c);
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
	public char toLowerCase()
	{
		return toLowerCase(value);
	}
	
	public char toUpperCase()
	{
		return toUpperCase(value);
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
	
	public int compareTo(char other)
	{
		return value - other;
	}
	
	public char multiply(char value)
	{
		return this.value * value;
	}
	
}
