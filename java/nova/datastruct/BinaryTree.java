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
import nova.datastruct.BinaryNode;
import nova.datastruct.Comparable;
import nova.datastruct.Tree;
import nova.datastruct.list.ArrayIterator;

public class BinaryTree extends Tree
{
	
	
	
	
	
	public BinaryTree(NovaArray data)
	{
		init(data);
	}
	
	public BinaryNode accessor_root()
	{
		return ((Tree)this).root;
	}
	
	public BinaryNode mutator_root(BinaryNode node)
	{
		((Tree)this).root = node;
		return node;
	}
	
	public void init(NovaArray data)
	{
		addNodes(data);
	}
	
	public BinaryTree addNode(Comparable data)
	{
		if (accessor_root() == null)
		{
			mutator_root(new BinaryNode(Optional.ofNullable(data)));
		}
		else
		{
			accessor_root().addChild(data);
		}
		return this;
	}
	
	public BinaryTree addNodes(NovaArray data)
	{
		ArrayIterator nova_local_0;
		Comparable d;
		nova_local_0 = (data).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			d = nova_local_0.accessor_next();
			addNode(d);
		}
		return this;
	}
	
}
