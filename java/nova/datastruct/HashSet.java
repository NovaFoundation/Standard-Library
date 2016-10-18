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
import nova.datastruct.list.ArrayIterator;

public class HashSet extends NovaObject implements List
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
		buckets = new NovaArray(bucketCount).map(testLambda25);
		this.bucketSize = bucketSize;
	}
	
	public NovaArray toArray()
	{
		return map(testLambda21);
	}
	
	public boolean any(NovaUtilities.Function1<T, Bool> func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
				if (v != null)
				{
					if (func.call(v))
					{
						return true;
					}
				}
			}
		}
		return false;
	}
	
	public boolean all(NovaUtilities.Function1<T, Bool> func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
				if (v != null)
				{
					if (!func.call(v))
					{
						return false;
					}
				}
			}
		}
		return true;
	}
	
	public NovaArray map(NovaUtilities.Function3<T, Int, HashSet, Out> func)
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
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
				if (v != null)
				{
					array.add(func.call(v, i++, this));
				}
			}
		}
		return array;
	}
	
	public NovaArray filter(NovaUtilities.Function3<T, Int, HashSet, Bool> func)
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
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
				if (v != null)
				{
					if (func.call(v, i++, this))
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
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
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
	
	public NovaArray skip(int num)
	{
		return map(testLambda22).skip(num);
	}
	
	public NovaArray take(int num)
	{
		return map(testLambda23).take(num);
	}
	
	public NovaArray reverse()
	{
		return map(testLambda24).reverse();
	}
	
	public NovaObject firstWhere(NovaUtilities.Function1<T, Bool> func)
	{
		ArrayIterator nova_local_0;
		NovaArray bucket;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
				if (v != null)
				{
					if (func.call(v))
					{
						return v;
					}
				}
			}
		}
		return null;
	}
	
	public HashSet forEach(NovaUtilities.Consumer3<T, Int, HashSet> func)
	{
		int i;
		ArrayIterator nova_local_0;
		NovaArray bucket;
		i = 0;
		nova_local_0 = (buckets).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			ArrayIterator nova_local_1;
			NovaObject v;
			bucket = nova_local_0.accessor_next();
			nova_local_1 = (bucket).accessor_iterator();
			while (nova_local_1.accessor_hasNext())
			{
				v = nova_local_1.accessor_next();
				if (v != null)
				{
					func.call(v, i++, this);
				}
			}
		}
		return this;
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
		nova_local_0 = (getBucket(value)).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			v = nova_local_0.accessor_next();
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
		nova_local_0 = (bucket).accessor_iterator();
		while (nova_local_0.accessor_hasNext())
		{
			v = nova_local_0.accessor_next();
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
	
	private static NovaObject testLambda21(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda22(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda23(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda24(NovaObject _1, int _2, HashSet _3)
	{
		return _1;
	}
	
	private static NovaObject testLambda25(NovaArray _1, int _2, NovaArray _3)
	{
		return new NovaArray(bucketSize);
	}
	
}
