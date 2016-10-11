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
import nova.datastruct.list.IntArrayIterator;

public class IntArray
{
	
	
	
	
	
	public IntArray()
	{
		init();
	}
	
	public IntArray(int count)
	{
		init(count);
	}
	
	public IntArray(int[] data, int count)
	{
		init(data, count);
	}
	
	public IntArrayIterator iterator()
	{
		return new IntArrayIterator(this);
	}
	
	private IntArrayIterator iterator()
	{
	}
	
	public int first()
	{
		if (count > 0)
		{
			return data[0];
		}
		return null;
	}
	
	private int first()
	{
	}
	
	public int last()
	{
		if (count > 0)
		{
			return data[count - 1];
		}
		return null;
	}
	
	public void init()
	{
		init();
	}
	
	public void init(int count)
	{
		init(count);
	}
	
	public void init(int[] data, int count)
	{
		init(data, count);
	}
	
	public NovaArray map(NovaObject mapFunc)
	{
		NovaArray array;
		int i;
		IntArrayIterator nova_local_0;
		int element;
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
	
	public void forEach(void func)
	{
		int i;
		i = (int)0;
		for (; i < (int)count; i++)
		{
			func((int)get(i), i, this);
		}
	}
	
	public boolean any(boolean anyFunc)
	{
		IntArrayIterator nova_local_0;
		int element;
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
		IntArrayIterator nova_local_0;
		int element;
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
	
	public IntArray filter(boolean filterFunc)
	{
		IntArray filtered;
		int i;
		IntArrayIterator nova_local_0;
		int element;
		filtered = new IntArray();
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
	
	public IntArray take(int howMany)
	{
		IntArray list;
		int i;
		if (howMany > count)
		{
			howMany = count;
		}
		list = new IntArray();
		i = (int)0;
		for (; i < (int)howMany; i++)
		{
			list.add(data[i]);
		}
		return list;
	}
	
	public IntArray skip(int howMany)
	{
		IntArray list;
		int i;
		list = new IntArray();
		i = (int)howMany;
		for (; i < (int)count; i++)
		{
			list.add(data[i]);
		}
		return list;
	}
	
	public int firstWhere(boolean func)
	{
		IntArrayIterator nova_local_0;
		int element;
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
	
	public IntArray reverse()
	{
		IntArray array;
		int i;
		IntArrayIterator nova_local_0;
		int element;
		array = new IntArray(count);
		array.count = count;
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			array.set(count - ++i, element);
		}
		return array;
	}
	
	public NovaString join(NovaString delimiter)
	{
		NovaString str;
		boolean passed;
		IntArrayIterator nova_local_0;
		int element;
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
			str = str.concat(NovaInt.toString(element));
		}
		return str;
	}
	
}
