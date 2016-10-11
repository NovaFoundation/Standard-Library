package nova.time;

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
import nova.time.Time;

public class Timer
{
	
	public long startTime;
	public long endTime;
	
	
	
	
	public Timer()
	{
		init();
	}
	
	public long duration()
	{
		return endTime - startTime;
	}
	
	private long duration()
	{
	}
	
	public void init()
	{
	}
	
	public Timer start()
	{
		startTime = Time.currentTimeMillis();
		endTime = 0;
		return this;
	}
	
	public Timer stop()
	{
		endTime = Time.currentTimeMillis();
		return this;
	}
	
	public Timer reset()
	{
		startTime = 0;
		endTime = 0;
		return this;
	}
	
	public NovaString toString()
	{
		return new NovaString("Timer { duration: ").concat(NovaLong.toString((duration())).concat(new NovaString(" }")));
	}
	
}
