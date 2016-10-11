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
import nova.datastruct.BinaryNode;
import nova.datastruct.Comparable;
import nova.datastruct.Tree;
import nova.datastruct.list.ArrayIterator;

public class BinaryTree
{
	
	
	
	
	
	public BinaryTree(NovaArray data)
	{
		init(data);
	}
	
	public BinaryNode root()
	{
		return ((Tree)this).root;
	}
	
	public BinaryNode root(BinaryNode node)
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
		if (root() == null)
		{
			root(new BinaryNode(Optional.ofNullable(data)));
		}
		else
		{
			root().addChild(data);
		}
		return this;
	}
	
	public BinaryTree addNodes(NovaArray data)
	{
		ArrayIterator nova_local_0;
		Comparable d;
		nova_local_0 = (data).iterator();
		while (nova_local_0.hasNext())
		{
			d = nova_local_0.next();
			addNode(d);
		}
		return this;
	}
	
}
