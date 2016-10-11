package nova.datastruct;

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
import nova.datastruct.Comparable;
import nova.datastruct.Node;

public class BinaryNode
{
	
	
	
	
	
	public BinaryNode(Optional<Comparable> data_optional)
	{
		init(Optional.ofNullable(data));
	}
	
	private BinaryNode(Comparable data, int size)
	{
		init(data, size);
	}
	
	public BinaryNode left()
	{
		return getNode(0);
	}
	
	public BinaryNode left(BinaryNode value)
	{
		setNode(0, value);
		return value;
	}
	
	public BinaryNode right()
	{
		return getNode(1);
	}
	
	public BinaryNode right(BinaryNode value)
	{
		setNode(1, value);
		return value;
	}
	
	public void init(Optional<Comparable> data_optional)
	{
		Comparable data = data_optional == null ? null : data_optional.get();
		init(data, 2);
	}
	
	public void init(Comparable data, int size)
	{
		init(Optional.ofNullable(data), Optional.ofNullable(size));
	}
	
	private BinaryNode getNode(int index)
	{
		if (children.count <= index)
		{
			return null;
		}
		return (BinaryNode)children.get(index);
	}
	
	private void setNode(int index, BinaryNode data)
	{
		if (children.count <= index)
		{
			children.add(index, data);
		}
		else
		{
			children.set(index, data);
		}
	}
	
	public void addChild(Comparable data)
	{
		if (this.data.compareTo(data) >= 0)
		{
			if (left() == null)
			{
				left(new BinaryNode(Optional.ofNullable(data)));
			}
			else
			{
				left().addChild(data);
			}
		}
		else
		{
			if (right() == null)
			{
				right(new BinaryNode(Optional.ofNullable(data)));
			}
			else
			{
				right().addChild(data);
			}
		}
	}
	
}
