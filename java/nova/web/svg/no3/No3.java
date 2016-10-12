package nova.web.svg.no3;

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
import nova.web.svg.no3.No3Select;
import nova.web.svg.no3.No3SelectAll;

public class No3 extends NovaObject
{
	
	
	
	
	
	public No3()
	{
		init();
	}
	
	public static No3Select select(NovaString selection)
	{
		return new No3Select(selection);
	}
	
	public static No3SelectAll selectAll(NovaString selection)
	{
		return new No3SelectAll(selection);
	}
	
	public void init()
	{
	}
	
}
