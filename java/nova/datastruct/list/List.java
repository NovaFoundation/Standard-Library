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
import nova.datastruct.list.Iterable;
import nova.datastruct.list.Iterator;

public class List implements Iterable
{
	
	public int size;
	public NovaObject first;
	public NovaObject last;
	
	
	
	
	public Iterator accessor_iterator()
	{
		return null;
	}
	
	private Iterator mutator_iterator()
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
		return any(testLambda33);
	}
	
	public List forEach(NovaUtilities.Consumer3<Type, Int, List> func)
	{
		int i;
		Iterator nova_local_0;
		NovaObject value;
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			value = nova_local_0.next();
			func.call(value, i++, this);
		}
		return this;
	}
	
	public List map(NovaUtilities.Function3<Type, Int, List, Out> mapFunc)
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
			array.add(mapFunc.call(element, i++, this));
		}
		return array;
	}
	
	public boolean any(NovaUtilities.Function1<Type, Bool> anyFunc)
	{
		Iterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (anyFunc.call(element))
			{
				return true;
			}
		}
		return false;
	}
	
	public boolean all(NovaUtilities.Function1<Type, Bool> allFunc)
	{
		Iterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (!allFunc.call(element))
			{
				return false;
			}
		}
		return true;
	}
	
	public List filter(NovaUtilities.Function3<Type, Int, List, Bool> filterFunc)
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
			if (filterFunc.call(value, i++, this))
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
	
	public NovaObject firstWhere(NovaUtilities.Function1<Type, Bool> func)
	{
		Iterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			if (func.call(element))
			{
				return element;
			}
		}
		return null;
	}
	
	public NovaObject firstNonNull(NovaUtilities.Function1<Type, Out> func)
	{
		Iterator nova_local_0;
		NovaObject element;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			NovaObject value;
			element = nova_local_0.next();
			value = func.call(element);
			if (value != null)
			{
				return value;
			}
		}
		return null;
	}
	
	public NovaArray zip(List other, NovaUtilities.Function2<Type, OtherType, Out> zipper)
	{
		Iterator i1;
		Iterator i2;
		NovaArray array;
		i1 = iterator();
		i2 = other.iterator();
		array = new NovaArray();
		while (i1.hasNext() && i2.hasNext())
		{
			array.add(zipper.call(i1.next(), i2.next()));
		}
		return array;
	}
	
	
	public NovaObject reduce(NovaUtilities.Function4<Out, Type, Int, List, Out> func, NovaObject initialValue)
	{
		NovaObject value;
		int i;
		Iterator nova_local_0;
		NovaObject element;
		value = initialValue;
		i = 0;
		nova_local_0 = (this).iterator();
		while (nova_local_0.hasNext())
		{
			element = nova_local_0.next();
			value = func.call(value, element, i++, this);
		}
		return value;
	}
	
	public NovaString join(NovaString delimiter)
	{
		return reduce(testLambda5, new NovaString(""));
	}
	
	private static NovaString testLambda5(NovaObject str, NovaObject e, int i, List _4)
	{
		return str.toString().concat((i > 0 ? delimiter : new NovaString("")).concat(e.toString()));
	}
	
	private static boolean testLambda33(NovaObject _1)
	{
		return _1 == value;
	}
	
}
