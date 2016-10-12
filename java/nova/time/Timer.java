package nova.time;

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
import nova.time.Time;

public class Timer extends NovaObject
{
	
	public long startTime;
	public long endTime;
	
	
	
	
	public Timer()
	{
		init();
	}
	
	public long accessor_duration()
	{
		return endTime - startTime;
	}
	
	private long mutator_duration()
	{
	}
	
	public void init()
	{
	}
	
	public Timer start()
	{
		startTime = Time.accessor_currentTimeMillis();
		endTime = 0;
		return this;
	}
	
	public Timer stop()
	{
		endTime = Time.accessor_currentTimeMillis();
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
		return new NovaString("Timer { duration: ").concat(NovaLong.toString((accessor_duration())).concat(new NovaString(" }")));
	}
	
}
