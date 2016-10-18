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
import nova.math.Vector;

public class Vector3D extends Vector
{
	
	
	
	
	
	public Vector3D()
	{
		init();
	}
	
	public Vector3D(double x, double y, double z)
	{
		init(x, y, z);
	}
	
	public double accessor_x()
	{
		return data.get(0);
	}
	
	public double mutator_x(double value)
	{
		data.set(0, value);
		return value;
	}
	
	public double accessor_y()
	{
		return data.get(1);
	}
	
	public double mutator_y(double value)
	{
		data.set(1, value);
		return value;
	}
	
	public double accessor_z()
	{
		return data.get(2);
	}
	
	public double mutator_z(double value)
	{
		data.set(2, value);
		return value;
	}
	
	public void init()
	{
		init(3);
	}
	
	public void init(double x, double y, double z)
	{
		init();
		this.mutator_x(x);
		this.mutator_y(y);
		this.mutator_z(z);
	}
	
	public Vector3D crossProduct(Vector3D other)
	{
		return new Vector3D(accessor_y() * other.accessor_z() - accessor_z() * other.accessor_y(), accessor_z() * other.accessor_x() - accessor_x() * other.accessor_z(), accessor_x() * other.accessor_y() - accessor_y() * other.accessor_x());
	}
	
}
