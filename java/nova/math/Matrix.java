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
	
	public boolean accessor_isSquare()
	{
		return accessor_cols() == accessor_rows();
	}
	
	private boolean mutator_isSquare()
	{
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
		if (rows <= 0 || cols <= 0)
		{
			throw new InvalidArgumentException(new NovaString("Invalid matrix size ").concat(NovaInt.toString((rows)).concat(new NovaString("x").concat(NovaInt.toString((cols)).concat(new NovaString(". The number of rows and columns must both be positive."))))));
		}
		init(new DoubleArray(rows).map(testLambda39));
	}
	
	public void init(NovaArray data)
	{
		if (data == null || data.count == 0)
		{
			throw new InvalidArgumentException(new NovaString("Matrix size must be greater than 0 rows and columns"));
		}
		this.data = data;
	}
	
	public Matrix add(Matrix other, Optional<Bool> allowUnequalDimensions_optional)
	{
		Matrix result;
		int row;
		boolean allowUnequalDimensions = allowUnequalDimensions_optional == null ? false : allowUnequalDimensions_optional.get();
		if (!allowUnequalDimensions)
		{
			checkUnequalDimensions(other);
		}
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
	
	public Matrix subtract(Matrix other, Optional<Bool> allowUnequalDimensions_optional)
	{
		Matrix result;
		int row;
		boolean allowUnequalDimensions = allowUnequalDimensions_optional == null ? false : allowUnequalDimensions_optional.get();
		if (!allowUnequalDimensions)
		{
			checkUnequalDimensions(other);
		}
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
	
	private void checkUnequalDimensions(Matrix other)
	{
		if (accessor_rows() != other.accessor_rows() || accessor_cols() != other.accessor_cols())
		{
			throw new InvalidArgumentException(new NovaString("The matrices' sizes must be equal to perform this operation"));
		}
	}
	
	public Matrix multiply(Matrix other)
	{
		Matrix result;
		if (accessor_cols() != other.accessor_rows())
		{
			throw new InvalidArgumentException(new NovaString("Matrix with dimensions ").concat(NovaInt.toString((accessor_rows())).concat(new NovaString("x").concat(NovaInt.toString((accessor_cols())).concat(new NovaString(" cannot be multiplied with matrix with dimensions ").concat(NovaInt.toString((other.accessor_rows())).concat(new NovaString("x").concat(NovaInt.toString((other.accessor_cols())).concat(new NovaString(". ").concat(NovaInt.toString((accessor_cols())).concat(new NovaString(" != ").concat(NovaInt.toString((other.accessor_rows())).concat(new NovaString(""))))))))))))));
		}
		result = new Matrix(accessor_rows(), other.accessor_cols());
		result.data.forEach(testLambda35);
		return result;
	}
	
	public Matrix transpose()
	{
		Matrix result;
		result = new Matrix(accessor_cols(), accessor_rows());
		data.forEach(testLambda37);
		return result;
	}
	
	public double determinant()
	{
		if (!accessor_isSquare())
		{
			throw new InvalidArgumentException(new NovaString("Matrix must be square to calculate the determinant"));
		}
		return determinant(data);
	}
	
	public static double determinant(NovaArray data)
	{
		int order;
		double det;
		order = data.count;
		det = 0;
		if (order == 1)
		{
			det = data.get(0).get(0);
		}
		else if (order == 2)
		{
			det = data.get(0).get(0) * data.get(1).get(1) - data.get(1).get(0) * data.get(0).get(1);
		}
		else
		{
			int j1;
			j1 = (int)0;
			for (; j1 < (int)order; j1++)
			{
				NovaArray m;
				int i;
				m = new NovaArray(order - 1).map(testLambda38);
				i = (int)1;
				for (; i < (int)order; i++)
				{
					int j2;
					int j;
					j2 = 0;
					j = (int)0;
					for (; j < (int)order; j++)
					{
						if (j != j1)
						{
							m.get(i - 1).set(j2++, data.get(i).get(j));
						}
					}
				}
				det += NovaMath.pow(-1.0, 1.0 + j1 + 1.0) * data.get(0).get(j1) * determinant(m);
			}
		}
		return det;
	}
	
	public NovaString toString()
	{
		return data.map(testLambda7).join(new NovaString("\n"));
	}
	
	private static NovaObject testLambda7(DoubleArray _1, int _2, NovaArray _3)
	{
		return new NovaString("[ ").concat((_1.join(new NovaString("\t"))).concat(new NovaString(" ]")));
	}
	
	private static void testLambda35(DoubleArray outRow, int outR, NovaArray _3)
	{
		data.forEach(testLambda36);
	}
	
	private static void testLambda36(DoubleArray row, int r, NovaArray _3)
	{
		int c;
		c = (int)0;
		for (; c < (int)accessor_cols(); c++)
		{
			result.data.get(r).set(outR, result.data.get(r).get(outR) + row.get(c) * other.data.get(c).get(outR));
		}
	}
	
	private static void testLambda37(DoubleArray row, int r, NovaArray _3)
	{
		int c;
		c = (int)0;
		for (; c < (int)accessor_cols(); c++)
		{
			result.data.get(c).set(r, row.get(c));
		}
	}
	
	private static NovaObject testLambda38(NovaObject _1, int _2, NovaArray _3)
	{
		return new DoubleArray(order - 1);
	}
	
	private static NovaObject testLambda39(double _1, int _2, DoubleArray _3)
	{
		return new DoubleArray(cols);
	}
	
}
