package nova.exception;

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

public class ExceptionData
{
	
	public buffer buf;
	public ExceptionData parent;
	public IntArray codes;
	public Exception thrownException;
	
	
	
	
	public ExceptionData(buffer buf)
	{
		init(buf);
	}
	
	
	public void init(buffer buf)
	{
		this.buf = buf;
		codes = new IntArray();
	}
	
	public void addCode(int code)
	{
		codes.add(code);
	}
	
	private ExceptionData getDataByCode(int code)
	{
		ExceptionData data;
		data = this;
		for (;;)
		{
			void contextArg19;
			if (data.codes.any(testLambda19) || data.parent == null)
			{
				return data;
			}
			data = data.parent;
		}
		return null;
	}
	
	public void jumpToBuffer(int code)
	{
		ExceptionData data;
		data = getDataByCode(code);
		if (data == NULL)
		{
			NovaConsole.writeLine(new NovaString("Could not get exception buffer!"));
			return;
		}
		if (data.parent == null)
		{
			code = 1;
		}
		jump(data.buf, code);
	}
	
	private static boolean testLambda19(int _1)
	{
		return _1 == code;
	}
	
}
