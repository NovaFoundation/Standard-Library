package nova.datastruct.list;

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
import nova.datastruct.list.Iterator;
import nova.datastruct.list.NoSuchElementException;

public class DoubleArrayIterator
{
	private DoubleArray array;
	
	public int position;
	
	
	
	
	public DoubleArrayIterator(DoubleArray array)
	{
		init(array);
	}
	
	public boolean hasNext()
	{
		return array.count > position;
	}
	
	private boolean hasNext()
	{
	}
	
	public double next()
	{
		if (hasNext())
		{
			return array.get(position++);
		}
		throw new NoSuchElementException();
		return 0;
	}
	
	private double next()
	{
	}
	
	public void init(DoubleArray array)
	{
		this.array = array;
		reset();
	}
	
	public Iterator reset()
	{
		position = 0;
		return this;
	}
	
}
