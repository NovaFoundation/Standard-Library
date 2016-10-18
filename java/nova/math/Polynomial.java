package nova.math;

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

public class Polynomial extends NovaObject
{
	
	public DoubleArray coefficients;
	public DoubleArray degrees;
	public NovaArray signs;
	
	private static CharArray SYMBOLS_CHARS;
	private static CharArray WHITESPACE_CHARS;
	
	
	
	public Polynomial(NovaString polynomial)
	{
		init(polynomial);
	}
	
	public void init(NovaString polynomial)
	{
		int start;
		boolean reading;
		int i;
		start = 0;
		reading = false;
		coefficients = new DoubleArray();
		degrees = new DoubleArray();
		signs = new NovaArray();
		i = (int)0;
		for (; i < (int)polynomial.count; i++)
		{
			if (!isLetter(polynomial.chars.get(i)))
			{
				reading = false;
			}
			else if (!reading)
			{
				start = i;
				reading = true;
			}
			else
			{
			}
		}
	}
	
	private static boolean isLetter(char c)
	{
		return !isSymbol(c) && !isWhitespace(c);
	}
	
	private static boolean isSymbol(char c)
	{
		return SYMBOLS_CHARS.contains(c);
	}
	
	private static boolean isWhitespace(char c)
	{
		return WHITESPACE_CHARS.contains(c);
	}
	
	private static CharArray generated6()
	{
		char[] temp;
		temp = new char[23];
		temp[0] = '-';
		temp[1] = '+';
		temp[2] = '~';
		temp[3] = '!';
		temp[4] = '=';
		temp[5] = '%';
		temp[6] = '^';
		temp[7] = '&';
		temp[8] = '|';
		temp[9] = '*';
		temp[10] = '/';
		temp[11] = '>';
		temp[12] = '<';
		temp[13] = ',';
		temp[14] = '"';
		temp[15] = '\'';
		temp[16] = '[';
		temp[17] = ']';
		temp[18] = '{';
		temp[19] = '}';
		temp[20] = ';';
		temp[21] = '(';
		temp[22] = ')';
		return new CharArray(temp, 23);
	}
	
	private static CharArray generated7()
	{
		char[] temp;
		temp = new char[4];
		temp[0] = ' ';
		temp[1] = '\n';
		temp[2] = '\r';
		temp[3] = '\t';
		return new CharArray(temp, 4);
	}
	
}
