package nova.web.svg;

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
import nova.web.svg.SvgComponent;
import nova.web.svg.SvgComponentNode;

public class SvgComponentList extends NovaObject
{
	
	public SvgComponentNode start;
	
	
	
	
	public SvgComponentList()
	{
		init();
	}
	
	public void generateOutput(File file)
	{
		SvgComponentNode current;
		current = start;
		while (current != null)
		{
			current.component.generateOutput(file);
			current = current.next;
		}
	}
	
	public void addChild(SvgComponent component)
	{
		SvgComponentNode node;
		node = new SvgComponentNode();
		node.component = component;
		if (start == null)
		{
			start = node;
		}
		else
		{
			SvgComponentNode current;
			current = start;
			while (current.next != null)
			{
				current = current.next;
			}
			current.next = node;
		}
	}
	
	public void init()
	{
	}
	
}
