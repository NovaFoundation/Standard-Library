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
import nova.datastruct.list.List;
import nova.datastruct.Pair;
import nova.datastruct.list.ArrayIterator;

public class HashMap extends NovaObject implements List
{
	private NovaArray buckets;
	private int bucketSize;
	
	public int size;
	
	
	
	
	public HashMap(Optional<NovaInt> bucketCount_optional, Optional<NovaInt> bucketSize_optional)
	{
		init(Optional.ofNullable(bucketCount), Optional.ofNullable(bucketSize));
	}
	
	public void init(Optional<NovaInt> bucketCount_optional, Optional<NovaInt> bucketSize_optional)
	{
		int bucketCount = bucketCount_optional == null ? 5 : bucketCount_optional.get();
		int bucketSize = bucketSize_optional == null ? 5 : bucketSize_optional.get();
		buckets = new NovaArray(bucketCount).map(testLambda20);
		this.bucketSize = bucketSize;
	}
	
	public NovaArray toArray()
	{
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
	
	public boolean any(NovaUtilities.Function1<Pair, Bool> func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
				if (pair != null && pair != 0)
				{
					if (func.call(pair))
					{
						return true;
					}
				}
			}
		}
		return false;
	}
	
	public boolean all(NovaUtilities.Function1<Pair, Bool> func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
				if (pair != null && pair != 0)
				{
					if (!func.call(pair))
					{
						return false;
					}
				}
			}
		}
		return true;
	}
	
	public NovaArray map(NovaUtilities.Function3<Pair, Int, HashMap, Out> func)
	{
		NovaArray array;
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
				if (pair != null && pair != 0)
				{
					array.add(func.call(pair, i++, this));
				}
			}
		}
		return array;
	}
	
	public NovaArray filter(NovaUtilities.Function3<Pair, Int, HashMap, Bool> func)
	{
		NovaArray array;
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		array = new NovaArray();
		i = 0;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
				if (pair != null && pair != 0)
				{
					if (func.call(pair, i++, this))
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
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
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
	
	public NovaArray skip(int num)
	{
		return map(testLambda2).skip(num);
	}
	
	public NovaArray take(int num)
	{
		return map(testLambda3).take(num);
	}
	
	public NovaArray reverse()
	{
		return map(testLambda4).reverse();
	}
	
	public Pair firstWhere(NovaUtilities.Function1<Pair, Bool> func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
				if (pair != null && pair != 0)
				{
					if (func.call(pair))
					{
						return pair;
					}
				}
			}
		}
		return null;
	}
	
	public HashMap forEach(NovaUtilities.Consumer3<Pair, Int, HashMap> func)
	{
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		i = 0;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			Pair pair;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				pair = nova_local_1.accessor_next();
				if (pair != null && pair != 0)
				{
					func.call(pair, i++, this);
				}
			}
		}
		return this;
	}
	
	private NovaArray getBucket(NovaObject key)
	{
		return buckets.get((int)(key.hashCodeLong() & (buckets.count - 1)));
	}
	
	private Pair getPair(NovaObject key)
	{
		return getBucket(key).filter(testLambda19).first();
	}
	
	public NovaObject remove(NovaObject key)
	{
		NovaArray bucket;
		int i;
		ArrayIterator nova_local_0;
		Pair pair;
		bucket = getBucket(key);
		i = 0;
		nova_local_0 = (bucket).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			pair = nova_local_0.accessor_next();
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
	
	public NovaObject set(NovaObject key, NovaObject value)
	{
		getBucket(key).add(new Pair(key, value));
		return this;
		return value;
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
	
	private static boolean testLambda19(Pair x, int _2, NovaArray _3)
	{
		return x != 0 && x != null && x.key.equals(key);
	}
	
	private static NovaObject testLambda20(NovaArray _1, int _2, NovaArray _3)
	{
		return new NovaArray(bucketSize);
	}
	
}
