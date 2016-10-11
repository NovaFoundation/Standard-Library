package nova.web.svg;

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
import nova.io.File;
import nova.web.svg.SvgComponent;

public class SvgCircle
{
	
	public double x;
	public double y;
	public int r;
	
	
	
	
	public SvgCircle(double x, double y, int r)
	{
		init(x, y, r);
	}
	
	public void init(double x, double y, int r)
	{
		this.x = x;
		this.y = y;
		this.r = r;
	}
	
	public void generateOutput(File file)
	{
		file.write(new NovaString("<circle cx=\"").concat(NovaDouble.toString(x).concat(new NovaString("\" cy=\"").concat(NovaDouble.toString(y).concat(new NovaString("\" r=\"").concat(NovaInt.toString(r).concat(new NovaString("\" stroke=\"false\" fill=\"black\"/>\n"))))))));
	}
	
	public NovaString toString()
	{
		return new NovaString("[Circle at (").concat(NovaDouble.toString(x).concat(new NovaString(", ").concat(NovaDouble.toString(y).concat(new NovaString(") with a radius of ").concat(NovaInt.toString(r).concat(new NovaString("]")))))));
	}
	
}
