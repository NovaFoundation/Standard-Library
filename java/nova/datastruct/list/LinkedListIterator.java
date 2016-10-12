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
import nova.datastruct.list.LinkedList;
import nova.datastruct.list.ListNode;
import nova.datastruct.list.NoSuchElementException;

public class LinkedListIterator extends NovaObject implements Iterator
{
	private LinkedList list;
	
	public ListNode position;
	
	
	
	
	public LinkedListIterator(LinkedList list)
	{
		init(list);
	}
	
	public boolean accessor_hasNext()
	{
		return position != null;
	}
	
	private boolean mutator_hasNext()
	{
	}
	
	public NovaObject accessor_next()
	{
		if (accessor_hasNext())
		{
			NovaObject data;
			data = position.data;
			position = position.next;
			return data;
		}
		throw new NoSuchElementException();
		return null;
	}
	
	private NovaObject mutator_next()
	{
	}
	
	public void init(LinkedList list)
	{
		this.list = list;
		reset();
	}
	
	public Iterator reset()
	{
		position = list.accessor_first();
		return this;
	}
	
}
