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

public class Bounds extends NovaObject
{
	
	public int start;
	public int end;
	
	
	
	
	public Bounds()
	{
		init();
	}
	
	public Bounds(int start, int end)
	{
		init(start, end);
	}
	
	public int accessor_size()
	{
		return end - start;
	}
	
	private int mutator_size()
	{
	}
	
	public boolean accessor_valid()
	{
		return start >= 0 && end > 0;
	}
	
	private boolean mutator_valid()
	{
	}
	
	public boolean accessor_endless()
	{
		return end < 0;
	}
	
	private boolean mutator_endless()
	{
	}
	
	public boolean accessor_optional()
	{
		return start == 0;
	}
	
	private boolean mutator_optional()
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
	
	public NovaString extractString(NovaString source)
	{
		if (!accessor_valid())
		{
			return null;
		}
		return source.substring(Optional.ofNullable(start), Optional.ofNullable(end));
	}
	
	public NovaString extractPreString(NovaString source)
	{
		if (!accessor_valid())
		{
			return null;
		}
		return source.substring(Optional.ofNullable(0), Optional.ofNullable(start));
	}
	
	public NovaString extractPostString(NovaString source)
	{
		if (!accessor_valid())
		{
			return source;
		}
		return source.substring(Optional.ofNullable(end), null);
	}
	
	public NovaString trimString(NovaString source)
	{
		if (!accessor_valid())
		{
			return source;
		}
		return extractPreString(source).concat(extractPostString(source));
	}
	
	public void invalidate()
	{
		start = -1;
		end = -1;
	}
	
	public boolean equals(Bounds bounds)
	{
		return bounds != null && bounds.start == start && bounds.end == end;
	}
	
	public NovaString toString()
	{
		return new NovaString("[").concat(NovaInt.toString(start).concat(new NovaString(", ").concat(NovaInt.toString(end).concat(new NovaString("]")))));
	}
	
	public void cloneTo(Bounds bounds)
	{
		bounds.start = start;
		bounds.end = end;
	}
	
	public Bounds clone()
	{
		return new Bounds(start, end);
	}
	
}
