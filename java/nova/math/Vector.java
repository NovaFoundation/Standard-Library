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

public class Vector extends NovaObject
{
	
	public DoubleArray data;
	
	
	
	
	public Vector(int size)
	{
		init(size);
	}
	
	public Vector(DoubleArray data)
	{
		init(data);
	}
	
	public double accessor_magnitude()
	{
		return NovaMath.sqrt(data.sum(testLambda11));
	}
	
	private double mutator_magnitude()
	{
	}
	
	public void init(int size)
	{
		init(new DoubleArray(size));
	}
	
	public void init(DoubleArray data)
	{
		this.data = data;
	}
	
	public double dotProduct(Vector other)
	{
		return data.sum(testLambda8);
	}
	
	public double innerProduct(Vector other)
	{
		return dotProduct(other);
	}
	
	public DoubleArray scale(double scalar)
	{
		return data.forEach(testLambda9);
	}
	
	public DoubleArray normalize()
	{
		return data.forEach(testLambda10);
	}
	
	public NovaString toString()
	{
		return new NovaString("<").concat((data.join(new NovaString(", "))).concat(new NovaString(">")));
	}
	
	private static double testLambda8(double x, int i, DoubleArray _3)
	{
		return x * other.data.get(i);
	}
	
	private static void testLambda9(double n, int i, DoubleArray d)
	{
		d.set(i, n * scalar);
	}
	
	private static void testLambda10(double n, int i, DoubleArray d)
	{
		double nova_zero_check1;
		double nova_zero_check2;
		nova_zero_check1 = accessor_magnitude();
		if (nova_zero_check1 == 0)
		{
			throw new DivideByZeroException();
		}
		d.set(i, n / nova_zero_check2);
		nova_zero_check2 = nova_zero_check1;
		if (nova_zero_check2 == 0)
		{
			throw new DivideByZeroException();
		}
	}
	
	private static double testLambda11(double n, int _2, DoubleArray _3)
	{
		return n * n;
	}
	
}
