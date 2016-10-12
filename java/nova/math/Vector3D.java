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

public class Vector3D extends NovaObject
{
	
	public double x;
	public double y;
	public double z;
	
	
	
	
	public Vector3D()
	{
		init();
	}
	
	public Vector3D(double x, double y, double z)
	{
		init(x, y, z);
	}
	
	public void init()
	{
		init(0, 0, 0);
	}
	
	public void init(double x, double y, double z)
	{
		this.x = x;
		this.y = y;
		this.z = z;
	}
	
	public Vector3D crossProduct(Vector3D other)
	{
		return new Vector3D(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
	}
	
	public NovaString toString()
	{
		return new NovaString("<").concat(NovaDouble.toString((x)).concat(new NovaString(", ").concat(NovaDouble.toString((y)).concat(new NovaString(", ").concat(NovaDouble.toString((z)).concat(new NovaString(">")))))));
	}
	
}
