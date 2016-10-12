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

public class NovaMath extends NovaObject
{
	
	
	
	public static double PI;
	
	
	public NovaMath()
	{
		init();
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	public static long max(long a, long b)
	{
		return a > b ? a : b;
	}
	
	public static long min(long a, long b)
	{
		return a < b ? a : b;
	}
	
	public static byte sign(long num)
	{
		if (num > 0)
		{
			return 1;
		}
		else if (num < 0)
		{
			return -1;
		}
		return 0;
	}
	
	public static int random(long range)
	{
		return extRand() % range;
	}
	
	public static long abs(long number)
	{
		return extAbs(number);
	}
	
	public static double abs(double number)
	{
		return extFabs(number);
	}
	
	public static double sqrt(double number)
	{
		return extSqrt(number);
	}
	
	public static double pow(double base, double power)
	{
		return extPow(base, power);
	}
	
	public static double sin(double number)
	{
		return extSin(number);
	}
	
	public static double cos(double number)
	{
		return extCos(number);
	}
	
	public static double tan(double number)
	{
		return extTan(number);
	}
	
	public static double asin(double number)
	{
		return extAsin(number);
	}
	
	public static double acos(double number)
	{
		return extAcos(number);
	}
	
	public static double atan(double number)
	{
		return extAtan(number);
	}
	
	public static long round(double number)
	{
		return floor(number + 0.5);
	}
	
	public static long floor(double number)
	{
		return extFloor(number);
	}
	
	public static long ceil(double number)
	{
		return extCeil(number);
	}
	
	public void init()
	{
	}
	
}
