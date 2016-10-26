package nova.datastruct;

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
import nova.datastruct.list.List;
import nova.datastruct.list.ArrayIterator;

public class Tuple extends NovaObject implements List
{
	
	public NovaArray items;
	
	
	
	
	public Tuple(NovaArray items)
	{
		init(items);
	}
	
	public ArrayIterator accessor_iterator()
	{
		return new ArrayIterator(items);
	}
	
	private ArrayIterator mutator_iterator()
	{
	}
	
	public NovaObject accessor_first()
	{
		return items.first();
	}
	
	private NovaObject mutator_first()
	{
	}
	
	public NovaObject accessor_last()
	{
		return items.last();
	}
	
	private NovaObject mutator_last()
	{
	}
	
	public void init(NovaArray items)
	{
		this.items = items;
	}
	
	public boolean contains(NovaObject value)
	{
		return items.contains(value);
	}
	
	public NovaArray toArray()
	{
		return items.toArray();
	}
	
	public List map(NovaUtilities.Function3<Object, Int, List, Out> mapFunc)
	{
		return items.map(mapFunc);
	}
	
	public NovaArray forEach(NovaUtilities.Consumer3<Object, Int, List> func)
	{
		return items.forEach(func);
	}
	
	public boolean any(NovaUtilities.Function1<Object, Bool> anyFunc)
	{
		return items.any(anyFunc);
	}
	
	public boolean all(NovaUtilities.Function1<Object, Bool> allFunc)
	{
		return items.all(allFunc);
	}
	
	public NovaArray filter(NovaUtilities.Function3<Object, Int, Object[], Bool> filterFunc)
	{
		return items.filter(filterFunc);
	}
	
	public NovaArray take(int howMany)
	{
		return items.take(howMany);
	}
	
	public NovaArray skip(int howMany)
	{
		return items.skip(howMany);
	}
	
	public NovaObject firstWhere(NovaUtilities.Function1<Object, Bool> func)
	{
		return items.firstWhere(func);
	}
	
	public Tuple reverse()
	{
		return new Tuple(items.reverse());
	}
	
}
