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
import nova.io.File;
import nova.io.InputStream;

public class StreamReader
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
