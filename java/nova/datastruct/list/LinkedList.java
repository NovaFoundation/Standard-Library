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
import nova.datastruct.list.ArrayIterator;
import nova.datastruct.list.LinkedListIterator;
import nova.datastruct.list.List;
import nova.datastruct.list.ListNode;

public class LinkedList extends NovaObject implements List
{
	private ListNode start;
	private ListNode current;
	
	public int size;
	
	
	
	
	public LinkedList()
	{
		init();
	}
	
	public LinkedListIterator accessor_iterator()
	{
		return new LinkedListIterator(this);
	}
	
	private LinkedListIterator mutator_iterator()
	{
	}
	
	public ListNode accessor_first()
	{
		return start;
	}
	
	private ListNode mutator_first()
	{
	}
	
	public ListNode accessor_last()
	{
		return current;
	}
	
	private ListNode mutator_last()
	{
	}
	
	public LinkedList addAll(NovaArray data)
	{
		ArrayIterator nova_local_0;
		NovaObject d;
		nova_local_0 = (data).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			d = nova_local_0.accessor_next();
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
		return any(testLambda32);
	}
	
	public NovaArray toArray()
	{
		NovaArray array;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		array = new NovaArray(size);
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			array.set(i++, element);
		}
		return array;
	}
	
	public LinkedList map(NovaUtilities.Function3<E, Int, LinkedList, Out> mapFunc)
	{
		LinkedList array;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		array = new LinkedList();
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			array.add(mapFunc.call(element, i++, this));
		}
		return array;
	}
	
	public LinkedList forEach(NovaUtilities.Consumer3<E, Int, LinkedList> func)
	{
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			func.call(element, i++, this);
		}
		return this;
	}
	
	public boolean any(NovaUtilities.Function1<E, Bool> anyFunc)
	{
		LinkedListIterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (anyFunc.call(element))
			{
				return true;
			}
		}
		return false;
	}
	
	public boolean all(NovaUtilities.Function1<E, Bool> allFunc)
	{
		LinkedListIterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (!allFunc.call(element))
			{
				return false;
			}
		}
		return true;
	}
	
	public LinkedList filter(NovaUtilities.Function3<E, Int, LinkedList, Bool> filterFunc)
	{
		LinkedList filtered;
		int i;
		LinkedListIterator nova_local_0;
		NovaObject element;
		filtered = new LinkedList();
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (filterFunc.call(element, i++, this))
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
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
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
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (i++ > howMany)
			{
				list.add(element);
			}
		}
		return list;
	}
	
	public NovaObject firstWhere(NovaUtilities.Function1<E, Bool> func)
	{
		LinkedListIterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (func.call(element))
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
	
	private static boolean testLambda32(NovaObject _1)
	{
		return _1 == value;
	}
	
}
