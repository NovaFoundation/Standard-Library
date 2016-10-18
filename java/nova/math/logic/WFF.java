package nova.math.logic;

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
import nova.math.logic.Conclusion;
import nova.math.logic.Hypothesis;
import nova.math.logic.InvalidFormulaException;
import nova.math.logic.StatementGroup;
import nova.math.logic.StatementLetter;

public class WFF extends NovaObject
{
	private NovaArray letters;
	private NovaArray hypotheses;
	private Conclusion conclusion;
	private NovaString wff;
	
	
	private static CharArray whitespace;
	
	
	
	public WFF(NovaString wellFormedFormula, NovaArray letters)
	{
		init(wellFormedFormula, letters);
	}
	
	public void init(NovaString wellFormedFormula, NovaArray letters)
	{
		this.wff = wellFormedFormula.trim(null, null);
		this.letters = letters;
		hypotheses = new NovaArray();
		decodeFormula();
	}
	
	private void decodeFormula()
	{
		StatementGroup conclusionGroup;
		Conclusion conclusion;
		NovaArray statements;
		int i;
		int n;
		conclusionGroup = searchForConclusion(wff);
		if (conclusionGroup == null)
		{
			throw new InvalidFormulaException(new NovaString("No valid conclusion found"));
		}
		conclusion = conclusionGroup.statement;
		NovaConsole.writeLine(new NovaString("Conclusion: ").concat(conclusion.toString()));
		wff = conclusionGroup.bounds.extractPreString(wff);
		statements = decodeHypotheses(wff);
		i = (int)0;
		for (; i < (int)statements.count; i++)
		{
			StatementGroup group;
			group = statements.get(i);
			hypotheses.add(group.statement);
		}
		n = (int)0;
		for (; n < (int)hypotheses.count; n++)
		{
			NovaConsole.writeLine(hypotheses.get(n));
		}
	}
	
	private StatementGroup searchForConclusion(NovaString wff)
	{
		int index;
		int conclusionStart;
		Bounds bounds;
		Conclusion conclusion;
		StatementGroup group;
		index = wff.lastIndexOf(new NovaString("->"), null, null);
		if (index < 0)
		{
			return null;
		}
		if (wff.lastChar() == ')')
	{
		int first;
		first = findEndingMatch(wff, '(', ')', wff.count - 1, -1);
	}
	conclusionStart = nextNonWhitespaceIndex(wff, index + 2, 1);
	bounds = new Bounds(conclusionStart, wff.count);
	conclusion = new Conclusion(bounds.extractString(wff));
	bounds.start = nextNonWhitespaceIndex(wff, index - 1, -1) + 1;
	group = new StatementGroup(conclusion, bounds);
	return group;
}

private NovaArray decodeHypotheses(NovaString wff)
{
	NovaArray list;
	int next;
	int prev;
	int index;
	list = new NovaArray();
	next = 0;
	prev = 0;
	index = wff.indexOf(new NovaString("&"), null, null, null);
	while (index >= 0)
	{
		next = nextNonWhitespaceIndex(wff, index - 1, -1);
		list.add(generateHypothesis(wff, prev, next + 1));
		prev = nextNonWhitespaceIndex(wff, index + 1, 1);
		index = wff.indexOf(new NovaString("&"), Optional.ofNullable(prev + 1), null, null);
	}
	list.add(generateHypothesis(wff, prev, wff.count));
	return list;
}

private StatementGroup generateHypothesis(NovaString wff, int start, int end)
{
	Bounds bounds;
	Hypothesis h;
	StatementGroup group;
	bounds = new Bounds(start, end);
	h = new Hypothesis(bounds.extractString(wff));
	group = new StatementGroup(h, bounds);
	return group;
}

private StatementGroup searchForStatement(NovaString wff)
{
	return null;
}

private static int nextNonWhitespaceIndex(NovaString wff, int index, int direction)
{
	return nextWhitespaceIndex(wff, index, direction, true);
}

private static int nextWhitespaceIndex(NovaString wff, int index, int direction)
{
	return nextWhitespaceIndex(wff, index, direction, false);
}

private static int nextWhitespaceIndex(NovaString wff, int index, int direction, boolean opposite)
{
	int i;
	i = index;
	while (i < wff.count && i >= 0)
	{
		char c;
		c = wff.chars.get(i);
		if (containsChar(c, whitespace) != opposite)
		{
			return i;
		}
		i = i + direction;
	}
	return -1;
}

private static boolean containsChar(char needle, CharArray chars)
{
	int i;
	i = (int)0;
	for (; i < (int)chars.count; i++)
	{
		if (needle == chars.data[i])
		{
			return true;
		}
	}
	return false;
}

private static int findEndingMatch(NovaString wff, char start, char end, int index, int direction)
{
	int scope;
	int i;
	if (direction < 0)
	{
		char temp;
		temp = start;
		start = end;
		end = temp;
	}
	scope = 0;
	i = index;
	while (i < wff.count && i >= 0)
	{
		char c;
		c = wff.chars.get(i);
		if (c == start)
		{
			scope++;
		}
		else if (c == end)
		{
			scope--;
		}
		if (scope == 0)
		{
			return i;
		}
		i = i + direction;
	}
	return -1;
}

private static CharArray generated8()
{
	char[] temp;
	temp = new char[4];
	temp[0] = ' ';
	temp[1] = '\t';
	temp[2] = '\n';
	temp[3] = '\r';
	return new CharArray(temp, 4);
}
}
