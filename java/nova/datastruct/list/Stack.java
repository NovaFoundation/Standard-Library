package nova.datastruct.list;

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
import nova.datastruct.list.EmptyStackException;
import nova.datastruct.list.ListNode;

public class Stack
{
	private ListNode top;
	
	public int size;
	
	
	
	
	public Stack()
	{
		init();
	}
	
	public boolean empty()
	{
		return size <= 0;
	}
	
	private boolean empty()
	{
	}
	
	public void push(NovaObject data)
	{
		ListNode node;
		node = new ListNode(data);
		node.next = top;
		top = node;
		size++;
	}
	
	public NovaObject pop()
	{
		NovaObject data;
		if (empty())
		{
			throw new EmptyStackException();
		}
		data = top.data;
		top = top.next;
		size--;
		return data;
	}
	
	public void init()
	{
	}
	
}
