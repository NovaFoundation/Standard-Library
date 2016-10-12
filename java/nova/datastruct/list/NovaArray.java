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
import nova.datastruct.list.List;

public class NovaArray extends NovaObject implements List
{
	
	public int capacity;
	public int count;
	public int position;
	public NovaObject[] data;
	
	
	
	
	public NovaArray()
	{
		init();
	}
	
	public NovaArray(int count)
	{
		init(count);
	}
	
	public NovaArray(NovaObject[] data, int count)
	{
		init(data, count);
	}
	
	public boolean accessor_empty()
	{
		return count <= 0;
	}
	
	private boolean mutator_empty()
	{
	}
	
	public ArrayIterator accessor_iterator()
	{
		return new ArrayIterator(this);
	}
	
	private ArrayIterator mutator_iterator()
	{
	}
	
	public NovaObject accessor_first()
	{
		if (count > 0)
		{
			return data[0];
		}
		return null;
	}
	
	private NovaObject mutator_first()
	{
	}
	
	public NovaObject accessor_last()
	{
		if (count > 0)
		{
			return data[count - 1];
		}
		return null;
	}
	
	
	public void init()
	{
		init(0);
		increaseSize(10);
	}
	
	public void init(int count)
	{
		this.position = 0;
		this.capacity = 0;
		increaseSize(count);
		this.count = count;
	}
	
	public void init(NovaObject[] data, int count)
	{
		int i;
		init(count);
		i = (int)0;
		for (; i < (int)count; i++)
		{
			add(data[i]);
		}
	}
	
	public NovaArray fillRemaining(NovaObject value)
	{
		while (count < capacity)
		{
			add(value);
		}
		return this;
	}
	
	public NovaArray addAll(NovaArray data)
	{
		ArrayIterator nova_local_0;
		NovaObject d;
		nova_local_0 = (data).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			d = nova_local_0.accessor_next();
			add(d);
		}
		return this;
	}
	
	public NovaArray add(NovaObject element)
	{
		if (position >= capacity)
		{
			increaseSize();
		}
		data[position++] = element;
		count = NovaMath.max(position, count);
		return this;
	}
	
	public void add(int index, NovaObject element)
	{
		if (index >= capacity)
		{
			increaseSize(index + 1);
		}
		add(null);
		shiftRight(index, position);
		data[index] = element;
		if (index >= position - 1)
		{
			position = index + 1;
		}
		count = NovaMath.max(position, count);
	}
	
	public NovaObject remove(int index)
	{
		NovaObject element;
		element = data[index];
		shiftLeft(index + 1, position--);
		return element;
	}
	
	public NovaObject remove(NovaObject element)
	{
		int index;
		index = indexOf(element);
		if (index >= 0)
		{
			shiftLeft(index + 1, position--);
			return element;
		}
		return null;
	}
	
	public int indexOf(NovaObject element)
	{
		int i;
		ArrayIterator nova_local_0;
		NovaObject e;
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			e = nova_local_0.accessor_next();
			if (element == e)
			{
				return i;
			}
			i++;
		}
		return -1;
	}
	
	private void shiftRight(int left, int right)
	{
		int i;
		i = right - 1;
		while (i > left)
		{
			data[i] = data[i - 1];
			i--;
		}
		data[left] = null;
	}
	
	private void shiftLeft(int left, int right)
	{
		int i;
		left--;
		right--;
		i = (int)left;
		for (; i < (int)right; i++)
		{
			data[i] = data[i + 1];
		}
		data[right] = null;
	}
	
	public void swap(int index1, int index2)
	{
		NovaObject temp;
		temp = data[index1];
		data[index1] = data[index2];
		data[index2] = temp;
	}
	
	private void increaseSize()
	{
		increaseSize(capacity + 3);
	}
	
	private void increaseSize(int count)
	{
		NovaObject[] tmp;
	}
	
	public NovaObject get(int index)
	{
		return data[index];
	}
	
	public void set(int index, NovaObject value)
	{
		data[index] = value;
	}
	
	public NovaArray toArray()
	{
		NovaArray array;
		int i;
		array = new NovaArray(count);
		i = (int)0;
		for (; i < (int)count; i++)
		{
			array.set(i, data[i]);
		}
		return array;
	}
	
	public NovaArray map(NovaObject mapFunc)
	{
		NovaArray array;
		int i;
		ArrayIterator nova_local_0;
		NovaObject element;
		array = new NovaArray(count);
		i = 0;
		nova_local_0 = (this).iterator();
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
			func(data[i], i, this);
		}
	}
	
	public NovaArray filter(boolean filterFunc)
	{
		NovaArray filtered;
		int i;
		ArrayIterator nova_local_0;
		NovaObject element;
		filtered = new NovaArray();
		i = 0;
		nova_local_0 = (this).iterator();
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
	
	public NovaArray take(int howMany)
	{
		NovaArray list;
		int i;
		howMany = howMany > count ? count : howMany;
		list = new NovaArray();
		i = (int)0;
		for (; i < (int)howMany; i++)
		{
			list.add(data[i]);
		}
		return list;
	}
	
	public NovaArray skip(int howMany)
	{
		NovaArray list;
		int i;
		list = new NovaArray();
		i = (int)howMany;
		for (; i < (int)count; i++)
		{
			list.add(data[i]);
		}
		return list;
	}
	
	public long sumSize()
	{
		long sum;
		ArrayIterator nova_local_0;
		NovaObject value;
		sum = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			value = nova_local_0.accessor_next();
			sum = sum + ((NovaString)value).count;
		}
		return sum;
	}
	
	public NovaArray reverse()
	{
		NovaArray array;
		int i;
		ArrayIterator nova_local_0;
		NovaObject element;
		array = new NovaArray(count);
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			element = nova_local_0.accessor_next();
			array.data[count - ++i] = element;
		}
		return array;
	}
	
	public NovaString toString()
	{
		return new NovaString("Array [").concat((join(new NovaString(", "))).concat(new NovaString("]")));
	}
	
}
