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
import nova.datastruct.list.CharArrayIterator;

public class CharArray
{
	
	
	
	
	
	public CharArray()
	{
		init();
	}
	
	public CharArray(int count)
	{
		init(count);
	}
	
	public CharArray(char[] data, int count)
	{
		init(data, count);
	}
	
	public CharArrayIterator iterator()
	{
		return new CharArrayIterator(this);
	}
	
	private CharArrayIterator iterator()
	{
	}
	
	public char first()
	{
		if (count > 0)
		{
			return data[0];
		}
		return 0;
	}
	
	private char first()
	{
	}
	
	public char last()
	{
		if (count > 0)
		{
			return data[count - 1];
		}
		return 0;
	}
	
	public long hashCodeLong()
	{
		long hash;
		int i;
		hash = 0;
		i = (int)0;
		for (; i < (int)count; i++)
		{
			hash = 31 * hash + (int)get(i);
		}
		return hash;
	}
	
	private long hashCodeLong()
	{
	}
	
	public void init()
	{
		init();
	}
	
	public void init(int count)
	{
		init(count);
	}
	
	public char get(int index)
	{
		return ((char[])data)[index];
	}
	
	public void set(int index, char value)
	{
		((char[])data)[index] = value;
	}
	
	public void init(char[] data, int count)
	{
		init(data, count);
	}
	
	public NovaArray map(NovaObject mapFunc)
	{
		NovaArray array;
		int i;
		CharArrayIterator nova_local_0;
		char element;
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
			func((char)get(i), i, this);
		}
	}
	
	public boolean any(boolean anyFunc)
	{
		CharArrayIterator nova_local_0;
		char element;
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
		CharArrayIterator nova_local_0;
		char element;
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
	
	public CharArray filter(boolean filterFunc)
	{
		CharArray filtered;
		int i;
		CharArrayIterator nova_local_0;
		char element;
		filtered = new CharArray();
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
	
	public CharArray take(int howMany)
	{
		CharArray list;
		int i;
		if (howMany > count)
		{
			howMany = count;
		}
		list = new CharArray();
		i = (int)0;
		for (; i < (int)howMany; i++)
		{
			list.add(get(i));
		}
		return list;
	}
	
	public CharArray skip(int howMany)
	{
		CharArray list;
		int i;
		list = new CharArray();
		i = (int)howMany;
		for (; i < (int)count; i++)
		{
			list.add(get(i));
		}
		return list;
	}
	
	public char firstWhere(boolean func)
	{
		CharArrayIterator nova_local_0;
		char element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (func(element))
			{
				return element;
			}
		}
		return 0;
	}
	
	public CharArray reverse()
	{
		CharArray array;
		int i;
		CharArrayIterator nova_local_0;
		char element;
		array = new CharArray(count);
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			array.set(count - ++i, element);
		}
		return array;
	}
	
}
