package nova.io;

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
import nova.time.Time;
import nova.io.FileNotFoundException;

public class File
{
	private FILE fp;
	
	public NovaString location;
	
	
	
	
	public File(NovaString location)
	{
		init(location);
	}
	
	public File(FILE fp)
	{
		init(fp);
	}
	
	public boolean exists()
	{
		return fp != 0;
	}
	
	private boolean exists()
	{
	}
	
	public int maxOpenFiles()
	{
		return extGetMaxOpenFiles();
	}
	
	public int maxOpenFiles(int value)
	{
		short min;
		short max;
		min = (short)20;
		max = (short)2048;
		if (value > max || value < min)
		{
			NovaConsole.writeLine(new NovaString("Invalid max number of open files: ").concat(NovaInt.toString(value).concat(new NovaString("\nValid values include ").concat(NovaShort.toString(min).concat(new NovaString("-").concat(NovaShort.toString(max)))))));
		}
		else
		{
			extSetMaxOpenFiles(value);
		}
		return value;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	public void init(NovaString location)
	{
		this.location = location;
	}
	
	public void init(FILE fp)
	{
		this.fp = fp;
	}
	
	public boolean delete()
	{
		close();
		return remove(location.chars.data) == 0;
	}
	
	public void reopen()
	{
		close();
		fp = fopen(location.chars.data, new NovaString("r+"));
	}
	
	public void rewind()
	{
		extRewind(fp);
	}
	
	public void clearContents()
	{
		if (exists())
		{
			fp = fopen(location.chars.data, new NovaString("w"));
		}
	}
	
	public boolean create()
	{
		if (!exists())
		{
			fp = fopen(location.chars.data, new NovaString("w"));
			if (!exists())
			{
				throw new FileNotFoundException(this);
				return false;
			}
			reopen();
			if (!exists())
			{
				throw new FileNotFoundException(this);
				return false;
			}
			return true;
		}
		return false;
	}
	
	public NovaString readAllContents()
	{
		NovaString data;
		NovaString line;
		data = new NovaString("");
		line = readLine();
		while (line != null)
		{
			if (data.count > 0)
			{
				data = data.concat(new NovaString("\n"));
			}
			data = data.concat(line);
			line = readLine();
		}
		return data;
	}
	
	public NovaString readLine()
	{
		int buf;
		int size;
		char[] line;
		char c;
		int index;
		buf = 5;
		size = buf;
		line = new char[size];
		c = getc(fp);
		if (c == EOF)
		{
			return null;
		}
		index = 0;
		while (c != '\n' && c != EOF)
		{
			if (index >= size)
			{
				size = size + buf;
				line = realloc(line, size);
			}
			line[index++] = c;
			c = getc(fp);
		}
		if (index >= size)
		{
			size++;
			line = realloc(line, size);
		}
		line[index++] = '\0';
		line = realloc(line, index);
		return new NovaString(line);
	}
	
	public void writeLine(NovaString line)
	{
		write(line.concat(new NovaString("\n")));
	}
	
	public void write(NovaString data)
	{
		fputs(data.chars.data, fp);
		flush();
	}
	
	public void flush()
	{
		fflush(fp);
	}
	
	public void close()
	{
		if (exists())
		{
			fclose(fp);
		}
	}
	
}
