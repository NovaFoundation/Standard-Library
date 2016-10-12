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

public class Queue extends NovaObject
{
	private NovaArray data;
	
	
	
	
	
	public Queue()
	{
		init();
	}
	
	public Queue(NovaArray data)
	{
		init(data);
	}
	
	public int accessor_size()
	{
		return data.position;
	}
	
	private int mutator_size()
	{
	}
	
	public boolean accessor_empty()
	{
		return accessor_size() <= 0;
	}
	
	private boolean mutator_empty()
	{
	}
	
	public void init()
	{
		data = new NovaArray();
	}
	
	public void init(NovaArray data)
	{
		this.data = data;
	}
	
	public NovaObject dequeue()
	{
		return data.remove(0);
	}
	
	public void enqueue(NovaObject element)
	{
		data.add(element);
	}
	
	public NovaString toString()
	{
		NovaString s;
		int i;
		s = new NovaString("");
		i = accessor_size() - 1;
		while (i >= 0)
		{
			if (i < accessor_size() - 1)
			{
				s = s.concat(new NovaString(", "));
			}
			s = s.concat(data.get(i--).toString());
		}
		return s;
	}
	
}
