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

public class NovaDouble extends Number implements Comparable, RealNumber
{
	
	public double value;
	
	
	
	
	public NovaDouble(double value)
	{
		init(value);
	}
	
	
	
	
	
	public void init(double value)
	{
		this.value = value;
	}
	
	public static int numDigits(double number)
	{
		int size;
		size = number < 0 ? 2 : 1;
		number /= 10;
		while (number > 0)
		{
			number /= 10;
			size++;
		}
		return size;
	}
	
	public static NovaString genString(char[] buffer, int lastIndex)
	{
		buffer = realloc(buffer, ++lastIndex + 1);
		buffer[lastIndex] = '\0';
		return new NovaString(buffer);
	}
	
	public static char[] genBuffer(double value)
	{
		int size;
		char[] buffer;
		size = 11 + 1 + 15;
		buffer = new char[size];
		sprintf(buffer, new NovaString("%.15f"), value);
		return buffer;
	}
	
	public static int repetition(char[] buffer, int start)
	{
		int index;
		char c;
		index = start;
		c = buffer[index];
		while (buffer[--index] == c);
		return start - index - 1;
	}
	
	public static int lastSignificantDigit(char[] buffer, int start)
	{
		while (buffer[start--] == '0');
		return start + 1;
	}
	
	public static char[] toCharArray(double value)
	{
	}
	
	public static NovaString toString(double value)
	{
		char[] buffer;
		int size;
		int lastIndex;
		char c;
		buffer = genBuffer(value);
		size = strlen(buffer);
		lastIndex = size - 1;
		c = buffer[--lastIndex];
		if (c == '0' || c == '9')
		{
			while (buffer[lastIndex--] == c);
			if (buffer[++lastIndex] == '.')
			{
				lastIndex++;
				return genString(buffer, lastIndex);
			}
			else
			{
				if (lastIndex >= size - 3 - 4)
				{
					lastIndex = size - 1;
				}
				else if (c == '9')
				{
					buffer[lastIndex]++;
					return genString(buffer, lastIndex);
				}
			}
		}
		else
		{
			int rep;
			rep = repetition(buffer, lastIndex);
			if (rep > 5)
			{
				buffer[lastIndex] = c;
				if (c >= '5')
				{
					c++;
				}
				buffer[++lastIndex] = c;
				return genString(buffer, lastIndex);
			}
		}
		lastIndex = lastSignificantDigit(buffer, size - 1);
		return genString(buffer, lastIndex);
	}
	
	public static double parseDouble(NovaString str)
	{
		char[] pEnd;
		return strtod(str.chars.data, pEnd);
	}
	
	public double compareTo(double other)
	{
		return value - other;
	}
	
	public double multiply(double value)
	{
		return this.value * value;
	}
	
	public NovaString toString()
	{
		return toString(value);
	}
	
}
