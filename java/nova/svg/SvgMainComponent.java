package nova.svg;

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
import nova.svg.SvgComponent;
import nova.svg.SvgComponentList;

public class SvgMainComponent
{
	
	
	
	
	
	public SvgMainComponent()
	{
		init();
	}
	
	public void init()
	{
		children = new SvgComponentList();
	}
	
	public void generateOutput(File file)
	{
		file.write(new NovaString("<?xml version = '1.0' standalone = 'no'?>\n").concat(new NovaString("<!DOCTYPE svg PUBLIC\"-//W3C//DTD Svg1.1//EN\" \"http://www.w3.org/Graphics/Svg/1.1/DTD/svg11.dtd\">").concat(new NovaString("<svg width=\"1400px\" height=\"950px\" version=\"1.1\" preserveAspectRatio=\"none\">\n"))));
		children.generateOutput(file);
		file.write(new NovaString("</svg>\n"));
	}
	
}
