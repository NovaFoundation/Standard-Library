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

public class Vector4D extends Vector
{
	
	
	
	
	
	public Vector4D()
	{
		init();
	}
	
	public Vector4D(double x, double y, double z, double w)
	{
		init(x, y, z, w);
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
	
	public double accessor_w()
	{
		return data.get(3);
	}
	
	public double mutator_w(double value)
	{
		data.set(3, value);
		return value;
	}
	
	public void init()
	{
		init(4);
	}
	
	public void init(double x, double y, double z, double w)
	{
		init();
		this.mutator_x(x);
		this.mutator_y(y);
		this.mutator_z(z);
		this.mutator_w(w);
	}
	
}
