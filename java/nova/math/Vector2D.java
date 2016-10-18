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
import nova.math.Vector3D;

public class Vector2D extends Vector
{
	
	
	
	
	
	public Vector2D()
	{
		init();
	}
	
	public Vector2D(double x, double y)
	{
		init(x, y);
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
	
	public void init()
	{
		init(2);
	}
	
	public void init(double x, double y)
	{
		init();
		this.mutator_x(x);
		this.mutator_y(y);
	}
	
	public double dotProduct(Vector3D other)
	{
		return ((Vector)this).dotProduct(other);
	}
	
}
