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
import nova.datastruct.list.CharArrayIterator;

public class CharArray extends NovaArray
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
	
	public CharArrayIterator accessor_iterator()
	{
		return new CharArrayIterator(this);
	}
	
	private CharArrayIterator mutator_iterator()
	{
	}
	
	public char accessor_first()
	{
		return count > 0 ? this.get(0) : (char)0;
	}
	
	private char mutator_first()
	{
	}
	
	public char accessor_last()
	{
		return count > 0 ? this.get(count - 1) : (char)0;
	}
	
	private char mutator_last()
	{
	}
	
	public long accessor_hashCodeLong()
	{
		return reduce(testLambda6, 0);
	}
	
	private long mutator_hashCodeLong()
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
	
	public void init(char[] data, int count)
	{
		init(data, count);
	}
	
	public long sum(NovaUtilities.Function4<Char, Int, CharArray, Long, Long> func)
	{
		long sum;
		int i;
		CharArrayIterator nova_local_0;
		char value;
		sum = 0;
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			value = nova_local_0.accessor_next();
			sum += func.call(value, i++, this, sum);
		}
		return sum;
	}
	
	public long reduce(NovaUtilities.Function4<Long, Char, Int, CharArray, Long> func, long initialValue)
	{
		long value;
		int i;
		CharArrayIterator nova_local_0;
		char element;
		value = initialValue;
		i = 0;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			value = func.call(value, element, i++, this);
		}
		return value;
	}
	
	public boolean contains(char value)
	{
		return any(testLambda31);
	}
	
	public NovaArray map(NovaUtilities.Function3<Char, Int, CharArray, Out> mapFunc)
	{
		NovaArray array;
		int i;
		CharArrayIterator nova_local_0;
		char element;
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
	
	public CharArray forEach(NovaUtilities.Consumer3<Char, Int, CharArray> func)
	{
		int i;
		i = (int)0;
		for (; i < (int)count; i++)
		{
			func.call((char)get(i), i, this);
		}
		return this;
	}
	
	public boolean any(NovaUtilities.Function1<Char, Bool> anyFunc)
	{
		CharArrayIterator nova_local_0;
		char element;
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
	
	public boolean all(NovaUtilities.Function1<Char, Bool> allFunc)
	{
		CharArrayIterator nova_local_0;
		char element;
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
	
	public CharArray filter(NovaUtilities.Function3<Char, Int, CharArray, Bool> filterFunc)
	{
		CharArray filtered;
		int i;
		CharArrayIterator nova_local_0;
		char element;
		filtered = new CharArray();
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
	
	public char firstWhere(NovaUtilities.Function1<Char, Bool> func)
	{
		CharArrayIterator nova_local_0;
		char element;
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			if (func.call(element))
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
		nova_local_0 = (this).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			array.set(count - ++i, element);
		}
		return array;
	}
	
	public char get(int index)
	{
		return ((char[])data)[index];
	}
	
	public char set(int index, char value)
	{
		((char[])data)[index] = value;
		return value;
	}
	
	private static long testLambda6(long v, char c, int i, CharArray a)
	{
		return 31 * v + (int)c;
	}
	
	private static boolean testLambda31(char _1)
	{
		return _1 == value;
	}
	
}
