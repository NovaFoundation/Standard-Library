package nova.math;

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
import nova.operators.Multiply;
import nova.exception.InvalidArgumentException;
import nova.datastruct.list.ArrayIterator;

public class Matrix extends NovaObject implements Multiply
{
	
	public NovaArray data;
	
	
	
	
	public Matrix(int rows, int cols)
	{
		init(rows, cols);
	}
	
	public Matrix(NovaArray data)
	{
		init(data);
	}
	
	public int accessor_rows()
	{
		return data.count;
	}
	
	private int mutator_rows()
	{
	}
	
	public int accessor_cols()
	{
		return data.get(0).count;
	}
	
	private int mutator_cols()
	{
	}
	
	public void init(int rows, int cols)
	{
		void contextArg22;
		if (rows <= 0 || cols <= 0)
		{
			throw new InvalidArgumentException(new NovaString("Invalid matrix size ").concat(NovaInt.toString((rows)).concat(new NovaString("x").concat(NovaInt.toString((cols)).concat(new NovaString(". The number of rows and columns must both be positive."))))));
		}
		init(new DoubleArray(rows).map(testLambda22));
	}
	
	public void init(NovaArray data)
	{
		if (data == null || data.count == 0)
		{
			throw new InvalidArgumentException(new NovaString("Matrix size must be greater than 0 rows and columns"));
		}
		this.data = data;
	}
	
	public Matrix add(Matrix other)
	{
		Matrix result;
		int row;
		result = new Matrix(accessor_rows(), accessor_cols());
		row = (int)0;
		for (; row < (int)NovaMath.min(accessor_rows(), other.accessor_rows()); row++)
		{
			int col;
			col = (int)0;
			for (; col < (int)NovaMath.min(accessor_cols(), other.accessor_cols()); col++)
			{
				result.data.get(row).set(col, data.get(row).get(col) + other.data.get(row).get(col));
			}
		}
		return result;
	}
	
	public Matrix subtract(Matrix other)
	{
		Matrix result;
		int row;
		result = new Matrix(accessor_rows(), accessor_cols());
		row = (int)0;
		for (; row < (int)NovaMath.min(accessor_rows(), other.accessor_rows()); row++)
		{
			int col;
			col = (int)0;
			for (; col < (int)NovaMath.min(accessor_cols(), other.accessor_cols()); col++)
			{
				result.data.get(row).set(col, data.get(row).get(col) - other.data.get(row).get(col));
			}
		}
		return result;
	}
	
	public Matrix multiply(Matrix other)
	{
		Matrix result;
		int outR;
		if (accessor_cols() != other.accessor_rows())
		{
			throw new InvalidArgumentException(new NovaString("Matrix with dimensions ").concat(NovaInt.toString((accessor_rows())).concat(new NovaString("x").concat(NovaInt.toString((accessor_cols())).concat(new NovaString(" cannot be multiplied with matrix with dimensions ").concat(NovaInt.toString((other.accessor_rows())).concat(new NovaString("x").concat(NovaInt.toString((other.accessor_cols())).concat(new NovaString(". ").concat(NovaInt.toString((accessor_cols())).concat(new NovaString(" != ").concat(NovaInt.toString((other.accessor_rows())).concat(new NovaString(""))))))))))))));
		}
		result = new Matrix(accessor_rows(), other.accessor_cols());
		outR = (int)0;
		for (; outR < (int)result.accessor_rows(); outR++)
		{
			int r;
			ArrayIterator nova_local_0;
			DoubleArray row;
			r = 0;
			nova_local_0 = (data).iterator();
			while (nova_local_0.accessor_hasNext())
			{
				double value;
				int c;
				row = nova_local_0.accessor_next();
				value = 0;
				c = (int)0;
				for (; c < (int)accessor_cols(); c++)
				{
					value += row.get(c) * other.data.get(c).get(outR);
				}
				result.data.get(r++).set(outR, value);
			}
		}
		return result;
	}
	
	public Matrix transpose()
	{
		Matrix result;
		void contextArg20;
		result = new Matrix(accessor_cols(), accessor_rows());
		data.forEach(testLambda20);
		return result;
	}
	
	public NovaString toString()
	{
		void contextArg21;
		return data.map(testLambda21).join(new NovaString("\n"));
	}
	
	private static void testLambda20(DoubleArray row, int r, NovaArray _3)
	{
		int c;
		c = (int)0;
		for (; c < (int)accessor_cols(); c++)
		{
			result.data.get(c).set(r, row.get(c));
		}
	}
	
	private static NovaObject testLambda21(DoubleArray _1, int _2, NovaArray _3)
	{
		return new NovaString("[ ").concat((_1.join(new NovaString("\t"))).concat(new NovaString(" ]")));
	}
	
	private static NovaObject testLambda22(double _1, int _2, DoubleArray _3)
	{
		return new DoubleArray(cols);
	}
	
}
