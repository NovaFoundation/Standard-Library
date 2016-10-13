package nova.svg.no3;

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
import nova.svg.no3.No3Node;

public class No3Selection extends No3Node
{
	
	public NovaString selection;
	
	
	
	
	public No3Selection(NovaString selection)
	{
		init(selection);
	}
	
	public void init(NovaString selection)
	{
		this.selection = selection;
	}
	
	public NovaString toJs()
	{
		return new NovaString("document.querySelector('").concat((selection).concat(new NovaString("')")));
	}
	
}