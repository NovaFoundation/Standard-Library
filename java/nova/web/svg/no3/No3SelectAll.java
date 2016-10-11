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
import nova.web.svg.no3.No3Node;

public class No3SelectAll
{
	
	public NovaString selection;
	
	
	
	
	public No3SelectAll(NovaString selection)
	{
		init(selection);
	}
	
	public void init(NovaString selection)
	{
		this.selection = selection;
	}
	
	public NovaString toJs()
	{
		return new NovaString("d3.selectAll('").concat((selection).concat(new NovaString("')")));
	}
	
}
