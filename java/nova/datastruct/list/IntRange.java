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
import nova.datastruct.list.IntRangeIterator;
import nova.datastruct.list.List;

public class IntRange extends NovaObject implements List
{
	
	public int start;
	public int end;
	
	
	
	
	public IntRange()
	{
		init();
	}
	
	public IntRange(int start, int end)
	{
		init(start, end);
	}
	
	private int accessor_first()
	{
		return start;
	}
	
	private int mutator_first()
	{
	}
	
	private int accessor_last()
	{
		return end - 1;
	}
	
	private int mutator_last()
	{
	}
	
	public int accessor_size()
	{
		return end - start;
	}
	
	private int mutator_size()
	{
	}
	
	public IntRangeIterator accessor_iterator()
	{
		return new IntRangeIterator(this);
	}
	
	private IntRangeIterator mutator_iterator()
	{
	}
	
	public void init()
	{
		init(0, 0);
	}
	
	public void init(int start, int end)
	{
		this.start = start;
		this.end = end;
	}
	
	public int contains(int value)
	{
		return value >= start && value < end;
	}
	
	public IntArray toArray()
	{
		IntArray ints;
		int i;
		ints = new IntArray(accessor_size());
		i = start;
		while (i < end)
		{
			ints.set(i - start, i++);
		}
		return ints;
	}
	
	public void forEach(NovaUtilities.Consumer3<Int, Int, IntRange> func)
	{
		int i;
		IntRangeIterator nova_local_0;
		int value;
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			value = nova_local_0.accessor_next();
			func.call(value, i++, this);
		}
	}
	
	public NovaArray map(NovaUtilities.Function3<Int, Int, IntRange, Out> mapFunc)
	{
		NovaArray array;
		int i;
		IntRangeIterator nova_local_0;
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
	
	public boolean any(NovaUtilities.Function1<Int, Bool> anyFunc)
	{
		IntRangeIterator nova_local_0;
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
		IntRangeIterator nova_local_0;
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
	
	public IntArray filter(NovaUtilities.Function3<Int, Int, IntRange, Bool> filterFunc)
	{
		IntArray list;
		int i;
		IntRangeIterator nova_local_0;
		int value;
		list = new IntArray();
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			value = nova_local_0.accessor_next();
			if (filterFunc.call(value, i++, this))
			{
				list.add(value);
			}
		}
		return list;
	}
	
	public IntRange take(int howMany)
	{
		return new IntRange(start, (int)NovaMath.min(start + howMany, end));
	}
	
	public IntRange skip(int howMany)
	{
		return new IntRange((int)NovaMath.min(start + howMany, end), end);
	}
	
	public int firstWhere(NovaUtilities.Function1<Int, Bool> func)
	{
		IntRangeIterator nova_local_0;
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
	
	public IntRange reverse()
	{
		return new IntRange(end, start);
	}
	
	public NovaString join(NovaString delimiter)
	{
		NovaString str;
		boolean passed;
		IntRangeIterator nova_local_0;
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
	
	public NovaString toString()
	{
		return NovaInt.toString((start)).concat(new NovaString("..").concat(NovaInt.toString((end)).concat(new NovaString(""))));
	}
	
}
