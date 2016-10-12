package nova.svg;

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
import nova.io.File;
import nova.svg.SvgMainComponent;

public class Svg extends NovaObject
{
	
	public SvgMainComponent root;
	
	
	
	
	public Svg()
	{
		init();
	}
	
	public void init()
	{
		root = new SvgMainComponent();
	}
	
	public void generateOutput(File file)
	{
		root.generateOutput(file);
	}
	
	public void generateHTMLOutput(File file)
	{
		file.write(new NovaString("<html>\n"));
		generateOutput(file);
		file.write(new NovaString("</html>"));
	}
	
}
