package nova.io;

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

public class NovaConsole
{
	
	
	
	
	
	public NovaConsole()
	{
		init();
	}
	
	
	
	
	
	
	
	
	
	public static void writeLine()
	{
		writeLine(new NovaString(""));
	}
	
	public static void writeLine(NovaString text)
	{
		write(text.concat(new NovaString("\n")));
	}
	
	public static void writeLine(NovaObject obj)
	{
		writeLine(obj.toString());
	}
	
	public static void writeLine(double num)
	{
		writeLine(NovaDouble.toString(num));
	}
	
	public static void writeLine(float num)
	{
		writeLine(NovaDouble.toString(num));
	}
	
	public static void writeLine(long num)
	{
		writeLine(NovaLong.toString(num));
	}
	
	public static void writeLine(int num)
	{
		writeLine(NovaInt.toString(num));
	}
	
	public static void writeLine(short num)
	{
		writeLine(NovaInt.toString(num));
	}
	
	public static void writeLine(byte num)
	{
		writeLine(NovaByte.toString(num));
	}
	
	public static void writeLine(char c)
	{
		writeLine(Char.toString(c));
	}
	
	public static void write(NovaString text)
	{
		CharArray cText;
		cText = text.chars;
		flushOutput();
	}
	
	public static void write(NovaObject obj)
	{
		write(obj.toString());
	}
	
	public static void write(double num)
	{
		write(NovaDouble.toString(num));
	}
	
	public static void write(float num)
	{
		write(NovaDouble.toString(num));
	}
	
	public static void write(long num)
	{
		write(NovaLong.toString(num));
	}
	
	public static void write(int num)
	{
		write(NovaInt.toString(num));
	}
	
	public static void write(short num)
	{
		write(NovaInt.toString(num));
	}
	
	public static void write(byte num)
	{
		write(NovaByte.toString(num));
	}
	
	public static void write(char c)
	{
		write(Char.toString(c));
	}
	
	public static int readInt()
	{
		NovaString s;
		s = readLine();
		return NovaInt.parseInt(s);
	}
	
	public static double readDouble()
	{
		NovaString s;
		s = readLine();
		return NovaDouble.parseDouble(s);
	}
	
	public static char readChar()
	{
		char c;
		c = getchar();
		flushInput();
		return c;
	}
	
	private static void flushInput()
	{
	}
	
	private static void flushOutput()
	{
	}
	
	public static NovaString readLine()
	{
		char[] line;
		NovaString s;
		s = new NovaString(line);
		return s;
	}
	
	public static NovaString readPassword()
	{
		NovaString pass;
		setEcho(false);
		pass = readLine();
		setEcho(true);
		write(new NovaString("\n"));
		return pass;
	}
	
	public static void setEcho(boolean echo)
	{
		nova_setEcho(echo);
	}
	
	public static void clearScreen()
	{
		nova_clearScreen();
	}
	
	public static void waitForEnter()
	{
		char[] c;
		flushInput();
		c = new char[2];
	}
	
	public void init()
	{
	}
	
}
