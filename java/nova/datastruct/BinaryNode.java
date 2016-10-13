package nova.datastruct;

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
import nova.datastruct.Comparable;
import nova.datastruct.NovaNode;

public class BinaryNode extends NovaNode
{
	
	
	
	
	
	public BinaryNode(Optional<Comparable> data_optional)
	{
		init(Optional.ofNullable(data));
	}
	
	private BinaryNode(Comparable data, int size)
	{
		init(data, size);
	}
	
	public BinaryNode accessor_left()
	{
		return getNode(0);
	}
	
	public BinaryNode mutator_left(BinaryNode value)
	{
		setNode(0, value);
		return value;
	}
	
	public BinaryNode accessor_right()
	{
		return getNode(1);
	}
	
	public BinaryNode mutator_right(BinaryNode value)
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
			if (accessor_left() == null)
			{
				mutator_left(new BinaryNode(Optional.ofNullable(data)));
			}
			else
			{
				accessor_left().addChild(data);
			}
		}
		else
		{
			if (accessor_right() == null)
			{
				mutator_right(new BinaryNode(Optional.ofNullable(data)));
			}
			else
			{
				accessor_right().addChild(data);
			}
		}
	}
	
}