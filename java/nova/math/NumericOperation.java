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
import nova.datastruct.Bounds;
import nova.math.InvalidNumericStatementException;
import nova.math.NumericOperand;

public class NumericOperation extends NumericOperand
{
	private NumericOperand leftOperand;
	private NumericOperand rightOperand;
	private NovaString operator;
	
	
	private static int GROUPING;
	private static int EXPONENT;
	private static int MULTIPLICATION;
	private static int DIVISION;
	private static int ADDITION;
	private static int SUBTRACTION;
	private static int MAX;
	private static int INVALID;
	private static int OPERATOR;
	private static CharArray VALID_OPERATORS;
	private static CharArray INVALID_OPERATORS;
	private static CharArray WHITESPACE_CHARS;
	private static int NUMBER;
	private static CharArray NUMERIC_CHARS;
	private static int VARIABLE;
	
	
	
	public NumericOperation(NovaString operation)
	{
		init(operation);
	}
	
	public NumericOperation(NovaString left, NovaString operator, NovaString right)
	{
		init(left, operator, right);
	}
	
	private NumericOperation(NumericOperand left, NovaString operator, NumericOperand right)
	{
		init(left, operator, right);
	}
	
	public void init(NovaString operation)
	{
		Bounds bounds1;
		int index1;
		Bounds bounds2;
		int index2;
		Bounds bounds3;
		NovaString lh;
		NovaString op;
		NovaString rh;
		int type1;
		int type2;
		bounds1 = searchNextType(operation, 0);
		bounds2 = searchNextType(operation, bounds1.end);
		bounds3 = null;
		NovaConsole.writeLine(bounds1.toString().concat(new NovaString(", ").concat(bounds2.toString().concat(new NovaString(" and ").concat(NovaInt.toString(index1).concat(new NovaString(", ").concat(NovaInt.toString(index2))))))));
		lh = bounds1.extractString(operation);
		op = bounds2.extractString(operation);
		rh = null;
		type1 = getType(lh);
		type2 = getType(op);
		if (type2 != OPERATOR)
		{
			if (type1 == OPERATOR)
			{
				throw new InvalidNumericStatementException(new NovaString("Missing left hand operand in operation '").concat(operation.concat(new NovaString("'"))));
			}
			rh = op;
			op = new NovaString("*");
			bounds3 = bounds2.clone();
			bounds2.end = bounds2.start;
		}
		else
		{
			bounds3 = searchNextType(operation, bounds2.end);
			rh = bounds3.extractString(operation);
		}
		if (bounds3.end != operation.count)
		{
		}
	}
	
	public void init(NovaString left, NovaString operator, NovaString right)
	{
		NumericOperand leftOperator;
		NumericOperand rightOperator;
		leftOperator = decodeOperand(left);
		rightOperator = decodeOperand(right);
		if (left == null)
		{
			throw new Exception(new NovaString("Left operand '").concat(left.concat(new NovaString("' is invalid"))));
		}
		else if (right == null)
		{
			throw new Exception(new NovaString("Right operand '").concat(right.concat(new NovaString("' is invalid"))));
		}
		init(leftOperand, operator, rightOperand);
	}
	
	public void init(NumericOperand left, NovaString operator, NumericOperand right)
	{
		this.leftOperand = left;
		this.rightOperand = right;
		this.operator = operator;
	}
	
	private NumericOperand decodeOperand(NovaString operand)
	{
		return null;
	}
	
	private static int getType(NovaString s)
	{
		if (s.count <= 0)
		{
			return 0;
		}
		return getType(s.chars.get(0));
	}
	
	private static int getType(char c)
	{
		if (isNumeric(c))
		{
			return NUMBER;
		}
		if (isOperator(c))
		{
			return OPERATOR;
		}
		if (contains(INVALID_OPERATORS, c))
		{
			return 0;
		}
		return VARIABLE;
	}
	
	private static Bounds searchNextType(NovaString str, int start)
	{
		IntArray operators;
		int minIndex;
		int minRank;
		int index;
		Bounds nova_local_0;
		operators = new IntArray();
		minIndex = NovaInt.MAX_VALUE;
		minRank = NovaInt.MIN_VALUE;
		index = nextOperator(str, start);
		while (index >= 0)
		{
			char operator;
			int rank;
			operator = str.chars.get(index);
			rank = getOperatorRank(operator);
			if (rank > minRank)
			{
				minIndex = index;
				minRank = rank;
			}
			index = nextOperator(str, index + 1);
		}
		if (minIndex >= str.count)
		{
			return null;
		}
		minIndex = nextNonWhitespaceIndex(str, minIndex - 1, -1) + 1;
		nova_local_0 = new Bounds(start, minIndex);
		ret1 = index;
		return nova_local_0;
	}
	
	private static int nextOperator(NovaString str, int start)
	{
		int i;
		i = (int)start;
		for (; i < (int)str.count; i++)
		{
			if (isOperator(str.chars.get(i)))
			{
				return i;
			}
		}
		return -1;
	}
	
	private static int getOperatorRank(char operator)
	{
		switch (operator)
		{
			case '-':
			
			case '+':
			return ADDITION;
			
			case '/':
			
			case '*':
			return MULTIPLICATION;
			
			case '^':
			return EXPONENT;
			
			case '[':
			
			case '(':
				return GROUPING;
				
				default:
				return INVALID;
				
			}
		}
		
		private static int nextNonWhitespaceIndex(NovaString str, int start, int direction)
		{
			while (start >= 0 && start < str.count && isWhitespace(str.chars.get(start)))
			{
				start = start + direction;
			}
			if (start < 0 || start >= str.count)
			{
				return -1;
			}
			else
			{
				return start - direction;
			}
		}
		
		private static boolean isLetter(char c)
		{
			return !isOperator(c) && !isWhitespace(c);
		}
		
		private static boolean isNumeric(char c)
		{
			return contains(NUMERIC_CHARS, c);
		}
		
		private static boolean isOperator(char c)
		{
			return contains(VALID_OPERATORS, c);
		}
		
		private static boolean isWhitespace(char c)
		{
			return contains(WHITESPACE_CHARS, c);
		}
		
		private static boolean contains(CharArray array, char c)
		{
			int i;
			i = (int)0;
			for (; i < (int)array.count; i++)
			{
				if (c == array.get(i))
				{
					return true;
				}
			}
			return false;
		}
		
		public NovaString toString()
		{
			return leftOperand.toString().concat(operator.concat(rightOperand.toString()));
		}
		
		private static CharArray generated2()
		{
			char[] temp;
			temp = new char[14];
			temp[0] = '-';
			temp[1] = '+';
			temp[2] = '!';
			temp[3] = '=';
			temp[4] = '%';
			temp[5] = '^';
			temp[6] = '*';
			temp[7] = '/';
			temp[8] = '>';
			temp[9] = '<';
			temp[10] = '[';
			temp[11] = ']';
			temp[12] = '(';
			temp[13] = ')';
			return new CharArray(temp, 14);
		}
		
		private static CharArray generated3()
		{
			char[] temp;
			temp = new char[16];
			temp[0] = '`';
			temp[1] = '~';
			temp[2] = '@';
			temp[3] = '#';
			temp[4] = '$';
			temp[5] = '&';
			temp[6] = '_';
			temp[7] = ';';
			temp[8] = ':';
			temp[9] = '\'';
			temp[10] = '"';
			temp[11] = '|';
			temp[12] = '\\';
			temp[13] = ',';
			temp[14] = '.';
			temp[15] = '?';
			return new CharArray(temp, 16);
		}
		
		private static CharArray generated4()
		{
			char[] temp;
			temp = new char[4];
			temp[0] = ' ';
			temp[1] = '\n';
			temp[2] = '\r';
			temp[3] = '\t';
			return new CharArray(temp, 4);
		}
		
		private static CharArray generated5()
		{
			char[] temp;
			temp = new char[10];
			temp[0] = '0';
			temp[1] = '1';
			temp[2] = '2';
			temp[3] = '3';
			temp[4] = '4';
			temp[5] = '5';
			temp[6] = '6';
			temp[7] = '7';
			temp[8] = '8';
			temp[9] = '9';
			return new CharArray(temp, 10);
		}
		
	}
		