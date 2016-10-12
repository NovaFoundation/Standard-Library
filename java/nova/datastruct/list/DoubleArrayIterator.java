package nova.datastruct.list;

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
import nova.datastruct.list.Iterator;
import nova.datastruct.list.NoSuchElementException;

public class DoubleArrayIterator extends NovaObject implements Iterator
{
	private DoubleArray array;
	
	public int position;
	
	
	
	
	public DoubleArrayIterator(DoubleArray array)
	{
		init(array);
	}
	
	public boolean accessor_hasNext()
	{
		return array.count > position;
	}
	
	private boolean mutator_hasNext()
	{
	}
	
	public double accessor_next()
	{
		if (accessor_hasNext())
		{
			return array.get(position++);
		}
		throw new NoSuchElementException();
		return 0;
	}
	
	private double mutator_next()
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
