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
import nova.datastruct.list.Queue;

public class NovaNode extends NovaObject
{
	
	public NovaObject data;
	public NovaArray children;
	
	
	
	
	public NovaNode(Optional<NovaObject> data_optional, Optional<NovaInt> numChildren_optional)
	{
		init(Optional.ofNullable(data), Optional.ofNullable(numChildren));
	}
	
	public void init(Optional<NovaObject> data_optional, Optional<NovaInt> numChildren_optional)
	{
		NovaObject data = data_optional == null ? null : data_optional.get();
		int numChildren = numChildren_optional == null ? 5 : numChildren_optional.get();
		children = new NovaArray(numChildren);
		this.data = data;
	}
	
	private static boolean notNull(NovaNode value)
	{
		return value != null;
	}
	
	public NovaArray preorder()
	{
		NovaArray array;
		array = new NovaArray();
		preorder(array);
		return array;
	}
	
	private void preorder(NovaArray array)
	{
		array.add(data);
		children.filter(notNull).forEach(testLambda26);
	}
	
	public NovaArray inorder()
	{
		NovaArray array;
		array = new NovaArray();
		return inorder(array);
	}
	
	private NovaArray inorder(NovaArray array)
	{
		int half;
		half = NovaMath.ceil(children.count / 2.0);
		children.take(half).filter(notNull).forEach(testLambda27);
		array.add(data);
		children.skip(half).filter(notNull).forEach(testLambda28);
		return array;
	}
	
	public NovaArray postorder()
	{
		NovaArray array;
		array = new NovaArray();
		return postorder(array);
	}
	
	private NovaArray postorder(NovaArray array)
	{
		children.filter(notNull).forEach(testLambda29);
		array.add(data);
		return array;
	}
	
	public NovaArray levelorder()
	{
		NovaArray array;
		array = new NovaArray();
		return levelorder(array);
	}
	
	private NovaArray levelorder(NovaArray array)
	{
		Queue queue;
		queue = new Queue(generated10());
		while (!queue.accessor_empty())
		{
			NovaNode current;
			current = queue.dequeue();
			array.add(current.data);
			current.children.filter(notNull).forEach(testLambda30);
		}
		return array;
	}
	
	public NovaString toString()
	{
		return data.toString();
	}
	
	private static void testLambda26(NovaNode _1, int _2, NovaArray _3)
	{
		_1.preorder(array);
	}
	
	private static void testLambda27(NovaNode _1, int _2, NovaArray _3)
	{
		_1.inorder(array);
	}
	
	private static void testLambda28(NovaNode _1, int _2, NovaArray _3)
	{
		_1.inorder(array);
	}
	
	private static void testLambda29(NovaNode _1, int _2, NovaArray _3)
	{
		_1.postorder(array);
	}
	
	private NovaArray generated10()
	{
		NovaNode[] temp;
		temp = new NovaNode[1];
		temp[0] = this;
		return new NovaArray(temp, 1);
	}
	
	private static void testLambda30(NovaNode _1, int _2, NovaArray _3)
	{
		queue.enqueue(_1);
	}
	
}
