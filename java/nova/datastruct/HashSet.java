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
import nova.datastruct.list.ArrayIterator;

public class HashSet
{
	private NovaArray buckets;
	private int bucketSize;
	
	public int size;
	
	
	
	
	public HashSet()
	{
		init();
	}
	
	public HashSet(int bucketCount, int bucketSize)
	{
		init(bucketCount, bucketSize);
	}
	
	public void init()
	{
		init(5, 5);
	}
	
	public void init(int bucketCount, int bucketSize)
	{
		void contextArg11;
		buckets = new NovaArray(bucketCount).map(testLambda11);
		this.bucketSize = bucketSize;
	}
	
	public NovaArray toArray()
	{
		void contextArg7;
		return map(testLambda7);
	}
	
	public boolean any(boolean func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					if (func(v))
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
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					if (!func(v))
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
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					array.add(func(v, i++, this));
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
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					if (func(v, i++, this))
					{
						array.add(v);
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
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					if (i > 0)
					{
						output = output.concat(delimiter);
					}
					output = output.concat(v.toString());
				}
			}
		}
		return output;
	}
	
	public NovaObject skip(int num)
	{
		void contextArg8;
		return map(testLambda8).skip(num);
	}
	
	public NovaObject take(int num)
	{
		void contextArg9;
		return map(testLambda9).take(num);
	}
	
	public NovaArray reverse()
	{
		void contextArg10;
		return map(testLambda10).reverse();
	}
	
	public NovaObject firstWhere(boolean func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).iterator();
		while (nova_local_0.hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					if (func(v))
					{
						return v;
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
			NovaObject v;
			bucket = nova_local_0.next();
			nova_local_1 = (bucket).iterator();
			while (nova_local_1.hasNext())
			{
				v = nova_local_1.next();
				if (v != null)
				{
					func(v, i++, this);
				}
			}
		}
	}
	
	private NovaArray getBucket(NovaObject value)
	{
		return buckets.get((int)(value.hashCodeLong() & (buckets.count - 1)));
	}
	
	public HashSet add(NovaObject value)
	{
		getBucket(value).add(value);
		return this;
	}
	
	public NovaObject get(NovaObject value)
	{
		ArrayIterator nova_local_0;
		NovaObject v;
		nova_local_0 = (getBucket(value)).iterator();
		while (nova_local_0.hasNext())
		{
			v = nova_local_0.next();
			if (v.equals(value))
			{
				return v;
			}
		}
		return null;
	}
	
	public NovaObject remove(NovaObject value)
	{
		NovaArray bucket;
		int i;
		ArrayIterator nova_local_0;
		NovaObject v;
		bucket = getBucket(value);
		i = 0;
		nova_local_0 = (bucket).iterator();
		while (nova_local_0.hasNext())
		{
			v = nova_local_0.next();
			if (v.equals(value))
			{
				bucket.remove(i);
				return v;
			}
			i++;
		}
		return null;
	}
	
	public boolean contains(NovaObject value)
	{
		return get(value) != null;
	}
	
	public NovaString toString()
	{
		return new NovaString("HashSet [").concat((join(new NovaString(", "))).concat(new NovaString("]")));
	}
	
	private static NovaObject testLambda7(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda8(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda9(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda10(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda11(NovaArray _1, int _2, NovaArray _3)
	{
		return new NovaArray(bucketSize);
	}
	
}
