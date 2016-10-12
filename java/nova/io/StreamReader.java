package nova.io;

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
import nova.io.File;
import nova.io.InputStream;

public class StreamReader extends InputStream
{
	private File file;
	
	
	
	
	
	public StreamReader(File file)
	{
		init(file);
	}
	
	public void init(File file)
	{
		this.file = file;
	}
	
	public NovaArray readBytes()
	{
		return null;
	}
	
	public NovaString readString()
	{
		NovaString output;
		output = file.readAllContents();
		return output;
	}
	
}
