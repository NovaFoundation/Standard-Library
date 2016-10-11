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
import nova.datastruct.list.Iterable;
import nova.datastruct.list.Iterator;

public class List
{
	
	public int size;
	public NovaObject first;
	public NovaObject last;
	
	
	
	
	public Iterator iterator()
	{
		return null;
	}
	
	private Iterator iterator()
	{
	}
	
	public NovaArray toArray()
	{
		NovaArray array;
		Iterator nova_local_0;
		NovaObject value;
		array = new NovaArray();
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			value = nova_local_0.next();
			array.add(value);
		}
		return array;
	}
	
	public boolean contains(NovaObject value)
	{
		void contextArg18;
		return any(testLambda18);
	}
	
	public void forEach(void func)
	{
		int i;
		Iterator nova_local_0;
		NovaObject value;
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			value = nova_local_0.next();
			func(value, i++, this);
		}
	}
	
	public List map(NovaObject mapFunc)
	{
		NovaArray array;
		int i;
		Iterator nova_local_0;
		NovaObject element;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			array.add(mapFunc(element, i++, this));
		}
		return array;
	}
	
	public boolean any(boolean anyFunc)
	{
		Iterator nova_local_0;
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
		Iterator nova_local_0;
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
	
	public List filter(boolean filterFunc)
	{
		NovaArray list;
		int i;
		Iterator nova_local_0;
		NovaObject value;
		list = new NovaArray();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			value = nova_local_0.next();
			if (filterFunc(value, i++, this))
			{
				list.add(value);
			}
		}
		return list;
	}
	
	public List take(int howMany)
	{
		NovaArray list;
		int i;
		Iterator nova_local_0;
		NovaObject value;
		list = new NovaArray();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			value = nova_local_0.next();
			if (i++ >= howMany)
			{
				return list;
			}
			list.add(value);
		}
		return list;
	}
	
	public List skip(int howMany)
	{
		NovaArray list;
		int i;
		Iterator nova_local_0;
		NovaObject value;
		list = new NovaArray();
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			value = nova_local_0.next();
			if (i++ >= howMany)
			{
				list.add(value);
			}
		}
		return list;
	}
	
	public NovaObject firstWhere(boolean func)
	{
		Iterator nova_local_0;
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
	
	public NovaArray zip(List other, NovaObject zipper)
	{
		Iterator i1;
		Iterator i2;
		NovaArray array;
		i1 = iterator();
		i2 = other.iterator();
		array = new NovaArray();
		while (i1.hasNext() && i2.hasNext())
		{
			array.add(zipper(i1.next(), i2.next()));
		}
		return array;
	}
	
	
	public NovaString join(NovaString delimiter)
	{
		NovaString str;
		boolean passed;
		Iterator nova_local_0;
		NovaObject element;
		str = new NovaString("");
		passed = false;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (passed)
			{
				str = str.concat(delimiter);
			}
			else
			{
				passed = true;
			}
			str = str.concat(element.toString());
		}
		return str;
	}
	
	private static boolean testLambda18(NovaObject _1)
	{
		return _1 == value;
	}
	
}
