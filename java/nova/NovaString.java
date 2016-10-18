package nova;

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
import nova.datastruct.Comparable;
import nova.datastruct.HashSet;
import nova.datastruct.list.StringCharArray;

public class NovaString extends NovaObject implements Comparable
{
	
	public int count;
	public StringCharArray chars;
	
	private static CharArray whitespace;
	private static HashSet pool;
	
	
	
	public NovaString(char c)
	{
		init(c);
	}
	
	public NovaString(char[] chars)
	{
		init(chars);
	}
	
	public NovaString(CharArray chars)
	{
		init(chars);
	}
	
	public long accessor_hashCodeLong()
	{
		return chars.accessor_hashCodeLong();
	}
	
	private long mutator_hashCodeLong()
	{
	}
	
	
	
	
	
	public void init(char c)
	{
		char[] chars;
		chars = new char[2];
		chars[0] = c;
		chars[1] = '\0';
		init(chars);
	}
	
	public void init(char[] chars)
	{
		count = calculateSize(chars);
		this.chars = new StringCharArray(chars, count);
		if (chars[count] != '\0')
		{
			chars[count] = '\0';
		}
	}
	
	public void init(CharArray chars)
	{
		count = chars.count;
		this.chars = new StringCharArray(chars);
	}
	
	private int calculateSize(char[] chars)
	{
		return chars.length;
	}
	
	public NovaString concat(NovaString str)
	{
		int sz;
		char[] newData;
		sz = str.count + count + 1;
		newData = new char[sz];
		strcpy(newData, chars.data);
		strcat(newData, str.chars.data);
		newData[sz - 1] = '\0';
		return new NovaString(newData);
	}
	
	public boolean equals(NovaString other)
	{
		return compareTo(other) == 0;
	}
	
	public NovaString replace(NovaString search, NovaString replace)
	{
		NovaString output;
		int index;
		output = this;
		index = 0;
		while ((index = output.indexOf(search, null, null, null)) >= 0)
		{
			output = output.substring(Optional.ofNullable(0), Optional.ofNullable(index)).concat(replace.concat(output.substring(Optional.ofNullable(index + search.count), null)));
		}
		return output;
	}
	
	public boolean startsWith(NovaString search)
	{
		return indexOf(search, null, null, null) == 0;
	}
	
	public int contains(NovaString search)
	{
		return indexOf(search, null, null, null) >= 0;
	}
	
	public int endsWith(NovaString search)
	{
		return count > 0 && indexOf(search, null, null, null) == count - search.count - 1;
	}
	
	public int indexOf(NovaString search, Optional<NovaInt> start_optional, Optional<NovaInt> direction_optional, Optional<NovaInt> defaultReturnValue_optional)
	{
		int i;
		int start = start_optional == null ? 0 : start_optional.get();
		int direction = direction_optional == null ? 1 : direction_optional.get();
		int defaultReturnValue = defaultReturnValue_optional == null ? -1 : defaultReturnValue_optional.get();
		i = start;
		while (i < count && i >= 0)
		{
			boolean found;
			int j;
			found = true;
			j = 0;
			while (j < search.count && i + j < count && found)
			{
				if (search.chars.get(j) != chars.get(i + j))
				{
					found = false;
				}
				j++;
			}
			if (found)
			{
				return i;
			}
			i += direction;
		}
		return defaultReturnValue;
	}
	
	public int lastIndexOf(NovaString search, Optional<NovaInt> start_optional, Optional<NovaInt> defaultReturnValue_optional)
	{
		int start = start_optional == null ? count - 1 : start_optional.get();
		int defaultReturnValue = defaultReturnValue_optional == null ? -1 : defaultReturnValue_optional.get();
		return indexOf(search, Optional.ofNullable(start), Optional.ofNullable(-1), Optional.ofNullable(defaultReturnValue));
	}
	
	public NovaString substring(Optional<NovaInt> start_optional, Optional<NovaInt> end_optional)
	{
		char[] buf;
		char[] arr;
		int start = start_optional == null ? 0 : start_optional.get();
		int end = end_optional == null ? count : end_optional.get();
		if (end - start <= 0)
		{
			if (end - start < 0)
			{
				throw new Exception(new NovaString("Substring bounds of [").concat(NovaInt.toString((start)).concat(new NovaString(", ").concat(NovaInt.toString((end)).concat(new NovaString("] are invalid"))))));
			}
			return new NovaString("");
		}
		else if (start == 0 && end == count)
		{
			return this;
		}
		buf = new char[end - start + 1];
		arr = chars.data;
		
		return new NovaString(buf);
	}
	
	public NovaString trim(Optional<NovaInt> start_optional, Optional<NovaInt> end_optional)
	{
		int start = start_optional == null ? 0 : start_optional.get();
		int end = end_optional == null ? count - 1 : end_optional.get();
		while (start < count && whitespace.contains(chars.get(start++)));
		while (end >= 0 && whitespace.contains(chars.get(end--)));
		return end == 0 ? new NovaString("") : substring(Optional.ofNullable(start), Optional.ofNullable(end + 1));
	}
	
	public char lastChar()
	{
		return count > 0 ? chars.get(count - 1) : (char)0;
	}
	
	public NovaString toLowerCase()
	{
		return transform(Char.toLowerCase);
	}
	
	public NovaString toUpperCase()
	{
		return transform(Char.toUpperCase);
	}
	
	public NovaString capitalize()
	{
		return count > 0 ? Char.toString(Char.toUpperCase(chars.get(0))).concat(substring(Optional.ofNullable(1), null)) : this;
	}
	
	public NovaString transform(NovaUtilities.Function2<Char, Int, Char> transform)
	{
		char[] newData;
		int i;
		newData = new char[count];
		i = (int)0;
		for (; i < (int)count; i++)
		{
			newData[i] = transform.call(chars.get(i), i);
		}
		return new NovaString(newData);
	}
	
	public NovaString getStringBetween(NovaString before, NovaString after, Optional<NovaInt> start_optional)
	{
		int s;
		int e;
		int start = start_optional == null ? 0 : start_optional.get();
		s = indexOf(before, Optional.ofNullable(start), null, null);
		e = indexOf(after, Optional.ofNullable(s + 1), null, null);
		if (s >= 0 && e > 0)
		{
			return substring(Optional.ofNullable(s + before.count), Optional.ofNullable(e));
		}
		return new NovaString("");
	}
	
	public NovaString surroundWith(NovaString str, Optional<Bool> symmetrical_optional)
	{
		boolean symmetrical = symmetrical_optional == null ? false : symmetrical_optional.get();
		return (str).concat(new NovaString("").concat((this).concat(new NovaString("").concat((symmetrical ? new NovaString(str.chars.reverse()) : str).concat(new NovaString(""))))));
	}
	
	public int compareTo(NovaString other)
	{
		long min;
		int i;
		min = NovaMath.min(count, other.count);
		i = (int)0;
		for (; i < (int)min; i++)
		{
			if (chars.get(i) - other.chars.get(i) != 0)
			{
				return chars.get(i) - other.chars.get(i);
			}
		}
		return count - other.count;
	}
	
	public NovaString toString()
	{
		return this;
	}
	
	private static CharArray generated1()
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
