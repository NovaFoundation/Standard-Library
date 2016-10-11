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

public class Queue
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
	
	public int size()
	{
		return data.position;
	}
	
	private int size()
	{
	}
	
	public boolean empty()
	{
		return size() <= 0;
	}
	
	private boolean empty()
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
		i = size() - 1;
		while (i >= 0)
		{
			if (i < size() - 1)
			{
				s = s.concat(new NovaString(", "));
			}
			s = s.concat(data.get(i--).toString());
		}
		return s;
	}
	
}
