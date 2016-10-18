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
import nova.datastruct.HashMap;

public class ReversibleHashMap extends HashMap
{
	private HashMap rev;
	
	
	
	
	
	public ReversibleHashMap()
	{
		init();
	}
	
	public void init()
	{
		rev = new HashMap(null, null);
	}
	
	public void put(NovaObject key, NovaObject value)
	{
	}
	
	public NovaObject getKey(NovaObject value)
	{
		return rev.get(value);
	}
	
	public NovaObject getValue(NovaObject key)
	{
		return get(key);
	}
	
}
