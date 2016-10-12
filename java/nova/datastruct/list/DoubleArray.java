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
import nova.datastruct.list.DoubleArrayIterator;

public class DoubleArray extends NovaArray
{
	
	
	
	
	
	public DoubleArray()
	{
		init();
	}
	
	public DoubleArray(int count)
	{
		init(count);
	}
	
	public DoubleArray(double[] data, int count)
	{
		init(data, count);
	}
	
	public DoubleArrayIterator accessor_iterator()
	{
		return new DoubleArrayIterator(this);
	}
	
	private DoubleArrayIterator mutator_iterator()
	{
	}
	
	public double accessor_first()
	{
		if (count > 0)
		{
			return data[0];
		}
		return 0;
	}
	
	private double mutator_first()
	{
	}
	
	public double accessor_last()
	{
		if (count > 0)
		{
			return data[count - 1];
		}
		return 0;
	}
	
	public void init()
	{
		init();
	}
	
	public void init(int count)
	{
		init(count);
	}
	
	public void init(double[] data, int count)
	{
		init(data, count);
	}
	
	public double get(int index)
	{
		return ((double[])data)[index];
	}
	
	public void set(int index, double value)
	{
		((double[])data)[index] = value;
	}
	
	public NovaArray map(NovaObject mapFunc)
	{
		NovaArray array;
		int i;
		DoubleArrayIterator nova_local_0;
		double element;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
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
			func((double)get(i), i, this);
		}
	}
	
	public boolean any(boolean anyFunc)
	{
		DoubleArrayIterator nova_local_0;
		double element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (anyFunc(element))
			{
				return true;
			}
		}
		return false;
	}
	
	public boolean all(boolean allFunc)
	{
		DoubleArrayIterator nova_local_0;
		double element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (!allFunc(element))
			{
				return false;
			}
		}
		return true;
	}
	
	public DoubleArray filter(boolean filterFunc)
	{
		DoubleArray filtered;
		int i;
		DoubleArrayIterator nova_local_0;
		double element;
		filtered = new DoubleArray();
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (filterFunc(element, i++, this))
			{
				filtered.add(element);
			}
		}
		return filtered;
	}
	
	public DoubleArray take(int howMany)
	{
		DoubleArray list;
		int i;
		if (howMany > count)
		{
			howMany = count;
		}
		list = new DoubleArray();
		i = (int)0;
		for (; i < (int)howMany; i++)
		{
			list.add(get(i));
		}
		return list;
	}
	
	public DoubleArray skip(int howMany)
	{
		DoubleArray list;
		int i;
		list = new DoubleArray();
		i = (int)howMany;
		for (; i < (int)count; i++)
		{
			list.add(get(i));
		}
		return list;
	}
	
	public double firstWhere(boolean func)
	{
		DoubleArrayIterator nova_local_0;
		double element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (func(element))
			{
				return element;
			}
		}
		return 0;
	}
	
	public DoubleArray reverse()
	{
		DoubleArray array;
		int i;
		DoubleArrayIterator nova_local_0;
		double element;
		array = new DoubleArray(count);
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
		DoubleArrayIterator nova_local_0;
		double element;
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
			str = str.concat(NovaDouble.toString(element));
		}
		return str;
	}
	
}
