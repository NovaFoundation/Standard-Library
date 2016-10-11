package nova.web.svg.no3;

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
import nova.web.svg.no3.No3Select;
import nova.web.svg.no3.No3SelectAll;

public class No3
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
