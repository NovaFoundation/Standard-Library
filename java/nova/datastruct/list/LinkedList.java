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
import nova.datastruct.list.ArrayIterator;
import nova.datastruct.list.LinkedListIterator;
import nova.datastruct.list.List;
import nova.datastruct.list.ListNode;

public class LinkedList
{
	private ListNode start;
	private ListNode current;
	
	public int size;
	
	
	
	
	public LinkedList()
	{
		init();
	}
	
	public LinkedListIterator iterator()
	{
		return new LinkedListIterator(this);
	}
	
	private LinkedListIterator iterator()
	{
	}
	
	public ListNode first()
	{
		return start;
	}
	
	private ListNode first()
	{
	}
	
	public ListNode last()
	{
		return current;
	}
	
	private ListNode last()
	{
	}
	
	public LinkedList addAll(NovaArray data)
	{
		ArrayIterator nova_local_0;
		NovaObject d;
		nova_local_0 = (data).iterator();
		while (nova_local_0.hasNext())
		{
			d = nova_local_0.next();
			add(d);
		}
		return this;
	}
	
	public LinkedList add(NovaObject data)
	{
		ListNode node;
		node = new ListNode(data);
		if (start == null)
		{
			start = node;
			current = node;
		}
		else
		{
			current.next = node;
		}
		current = node;
		size++;
		return this;
	}
	
	public LinkedList remove(NovaObject data)
	{
		ListNode prev;
		ListNode cur;
		if (start.data == data)
		{
			start = start.next;
		}
		prev = start;
		cur = start.next;
		while (cur != null)
		{
			NovaObject d;
			d = cur.data;
			if (d == data)
			{
				prev.next = cur.next;
				size--;
			}
			cur = cur.next;
		}
		return this;
	}
	
	public boolean contains(NovaObject value)
	{
		void contextArg17;
		return any(testLambda17);
	}
	
	public NovaArray toArray()
	{
		NovaArray array;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		array = new NovaArray(size);
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			array.set(i++, element);
		}
		return array;
	}
	
	public LinkedList map(NovaObject mapFunc)
	{
		LinkedList array;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		array = new LinkedList();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			array.add(mapFunc(element, i++, this));
		}
		return array;
	}
	
	public void forEach(void func)
	{
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			func(element, i++, this);
		}
	}
	
	public boolean any(boolean anyFunc)
	{
		LinkedListIterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (anyFunc(element))
			{
				return true;
			}
		}
		return false;
	}
	
	public boolean all(boolean allFunc)
	{
		LinkedListIterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (!allFunc(element))
			{
				return false;
			}
		}
		return true;
	}
	
	public LinkedList filter(boolean filterFunc)
	{
		LinkedList filtered;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		filtered = new LinkedList();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (filterFunc(element, i++, this))
			{
				filtered.add(element);
			}
		}
		return filtered;
	}
	
	public LinkedList take(int howMany)
	{
		LinkedList list;
		LinkedListIterator nova_local_0;
		NovaObject element;
		if (howMany > size)
		{
			howMany = size;
		}
		list = new LinkedList();
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (list.size == howMany)
			{
				break;
			}
			list.add(element);
		}
		return list;
	}
	
	public LinkedList skip(int howMany)
	{
		NovaArray list;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		list = new NovaArray();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (i++ > howMany)
			{
				list.add(element);
			}
		}
		return list;
	}
	
	public NovaObject firstWhere(boolean func)
	{
		LinkedListIterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (func(element))
			{
				return element;
			}
		}
		return null;
	}
	
	public LinkedList reverse()
	{
		LinkedList list;
		ListNode prev;
		ListNode current;
		ListNode next;
		list = new LinkedList();
		prev = null;
		current = null;
		next = null;
		if (start != null)
		{
			current = start.clone();
		}
		while (current != null)
		{
			next = current.next;
			current.next = null;
			if (next != null)
			{
				next = next.clone();
			}
			if (prev != null)
			{
				current.next = prev.clone();
			}
			prev = current;
			current = next;
		}
		list.start = prev;
		return list;
	}
	
	public void init()
	{
	}
	
	private static boolean testLambda17(NovaObject _1)
	{
		return _1 == value;
	}
	
}
