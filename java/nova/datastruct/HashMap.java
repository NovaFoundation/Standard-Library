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
import nova.datastruct.list.List;
import nova.datastruct.Pair;
import nova.datastruct.list.ArrayIterator;

public class HashMap
{
	private NovaArray buckets;
	private int bucketSize;
	
	public int size;
	
	
	
	
	public HashMap()
	{
		init();
	}
	
	public HashMap(int bucketCount, int bucketSize)
	{
		init(bucketCount, bucketSize);
	}
	
	public void init()
	{
		init(5, 5);
	}
	
	public void init(int bucketCount, int bucketSize)
	{
		void contextArg6;
		buckets = new NovaArray(bucketCount).map(testLambda6);
		this.bucketSize = bucketSize;
	}
	
	public NovaArray toArray()
	{
		void contextArg1;
		return map(testLambda1);
	}
	
	public boolean contains(Pair value)
	{
		Pair pair;
		pair = getPair(value.key);
		if (pair != null)
		{
			return pair.value == value.value;
		}
		return false;
	}
	
	public boolean any(boolean func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					if (func(pair))
					{
						return true;
					}
				}
			}
		}
		return false;
	}
	
	public boolean all(boolean func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					if (!func(pair))
					{
						return false;
					}
				}
			}
		}
		return true;
	}
	
	public NovaArray map(NovaObject func)
	{
		NovaArray array;
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					array.add(func(pair, i++, this));
				}
			}
		}
		return array;
	}
	
	public NovaArray filter(boolean func)
	{
		NovaArray array;
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					if (func(pair, i++, this))
					{
						array.add(pair);
					}
				}
			}
		}
		return array;
	}
	
	public NovaString join(NovaString delimiter)
	{
		int i;
		NovaString output;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		i = 0;
		output = new NovaString("");
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					if (i > 0)
					{
						output = output.concat(delimiter);
					}
					output = output.concat(pair.toString());
				}
			}
		}
		return output;
	}
	
	public Pair skip(int num)
	{
		void contextArg2;
		return map(testLambda2).skip(num);
	}
	
	public Pair take(int num)
	{
		void contextArg3;
		return map(testLambda3).take(num);
	}
	
	public NovaArray reverse()
	{
		void contextArg4;
		return map(testLambda4).reverse();
	}
	
	public Pair firstWhere(boolean func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					if (func(pair))
					{
						return pair;
					}
				}
			}
		}
		return null;
	}
	
	public void forEach(void func)
	{
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		i = 0;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				pair = nova_local_1.next();
				if (pair != null && pair != 0)
				{
					func(pair, i++, this);
				}
			}
		}
	}
	
	private NovaArray getBucket(NovaObject key)
	{
		return buckets.get((int)(key.hashCodeLong() & (buckets.count - 1)));
	}
	
	public HashMap put(NovaObject key, NovaObject value)
	{
		NovaArray bucket;
		bucket = getBucket(key);
		bucket.add(new Pair(key, value));
		return this;
	}
	
	private Pair getPair(NovaObject key)
	{
		void contextArg5;
		return getBucket(key).filter(testLambda5).first();
	}
	
	public NovaObject get(NovaObject key)
	{
		Pair pair;
		pair = getPair(key);
		if (pair != null)
		{
			return pair.value;
		}
		return null;
	}
	
	public NovaObject remove(NovaObject key)
	{
		NovaArray bucket;
		int i;
		ArrayIterator nova_local_0;
		Pair pair;
		bucket = getBucket(key);
		i = 0;
		nova_local_0 = (bucket).iterator();
		while (nova_local_0.hasNext())
		{
			pair = nova_local_0.next();
			if (pair.key.equals(key))
			{
				bucket.remove(i);
				return pair.value;
			}
			i++;
		}
		return null;
	}
	
	public boolean containsKey(NovaObject key)
	{
		return getPair(key) != null;
	}
	
	private static NovaObject testLambda1(Pair _1, int _2, HashMap _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda2(Pair _1, int _2, HashMap _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda3(Pair _1, int _2, HashMap _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda4(Pair _1, int _2, HashMap _3)
	{
		return _1;
	}
	
	private static boolean testLambda5(Pair x, int _2, NovaArray _3)
	{
		return x != 0 && x != null && x.key.equals(key);
	}
	
	private static NovaObject testLambda6(NovaArray _1, int _2, NovaArray _3)
	{
		return new NovaArray(bucketSize);
	}
	
}
