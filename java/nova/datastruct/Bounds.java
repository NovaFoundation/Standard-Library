package nova.datastruct;

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

public class Bounds
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
	
	public int size()
	{
		return end - start;
	}
	
	private int size()
	{
	}
	
	public boolean valid()
	{
		return start >= 0 && end > 0;
	}
	
	private boolean valid()
	{
	}
	
	public boolean endless()
	{
		return end < 0;
	}
	
	private boolean endless()
	{
	}
	
	public boolean optional()
	{
		return start == 0;
	}
	
	private boolean optional()
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
		if (!valid())
		{
			return null;
		}
		return source.substring(start, Optional.ofNullable(end));
	}
	
	public NovaString extractPreString(NovaString source)
	{
		if (!valid())
		{
			return null;
		}
		return source.substring(0, Optional.ofNullable(start));
	}
	
	public NovaString extractPostString(NovaString source)
	{
		if (!valid())
		{
			return source;
		}
		return source.substring(end, null);
	}
	
	public NovaString trimString(NovaString source)
	{
		if (!valid())
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
