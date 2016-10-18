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
import nova.datastruct.list.IntArrayIterator;

public class IntArray extends NovaArray
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
	
	public IntArrayIterator accessor_iterator()
	{
		return new IntArrayIterator(this);
	}
	
	private IntArrayIterator mutator_iterator()
	{
	}
	
	public int accessor_first()
	{
		return count > 0 ? this.get(0) : 0;
	}
	
	private int mutator_first()
	{
	}
	
	public int accessor_last()
	{
		return count > 0 ? this.get(count - 1) : 0;
	}
	
	private int mutator_last()
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
	
	public void init(int[] data, int count)
	{
		init(data, count);
	}
	
	public NovaArray map(NovaUtilities.Function3<Int, Int, IntArray, Out> mapFunc)
	{
		NovaArray array;
		int i;
		IntArrayIterator nova_local_0;
		int element;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			array.add(mapFunc.call(element, i++, this));
		}
		return array;
	}
	
	public IntArray forEach(NovaUtilities.Consumer3<Int, Int, IntArray> func)
	{
		int i;
		i = (int)0;
		for (; i < (int)count; i++)
		{
			func.call((int)get(i), i, this);
		}
		return this;
	}
	
	public boolean any(NovaUtilities.Function1<Int, Bool> anyFunc)
	{
		IntArrayIterator nova_local_0;
		int element;
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
	
	public boolean all(NovaUtilities.Function1<Int, Bool> allFunc)
	{
		IntArrayIterator nova_local_0;
		int element;
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
	
	public IntArray filter(NovaUtilities.Function3<Int, Int, IntArray, Bool> filterFunc)
	{
		IntArray filtered;
		int i;
		IntArrayIterator nova_local_0;
		int element;
		filtered = new IntArray();
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
	
	public int firstWhere(NovaUtilities.Function1<Int, Bool> func)
	{
		IntArrayIterator nova_local_0;
		int element;
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
	
	public IntArray reverse()
	{
		IntArray array;
		int i;
		IntArrayIterator nova_local_0;
		int element;
		array = new IntArray(count);
		array.count = count;
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
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
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
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
	
	public int get(int index)
	{
		return ((int[])data)[index];
	}
	
	public int set(int index, int value)
	{
		((int[])data)[index] = value;
		return value;
	}
	
}
