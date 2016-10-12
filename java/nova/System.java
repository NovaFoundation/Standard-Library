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
import nova.io.StreamReader;
import nova.io.File;
import nova.time.Time;
import nova.process.Process;

public class System extends NovaObject
{
	
	
	
	
	
	public System()
	{
		init();
	}
	
	
	
	
	
	
	public static void exit(int code)
	{
		externalExit(code);
	}
	
	public static void exit(int code, NovaString message)
	{
		exit(code, message, false);
	}
	
	public static void exit(int code, NovaString message, boolean log)
	{
		if (log)
		{
			File f;
			f = new File(new NovaString("Log").concat(NovaLong.toString(Time.accessor_currentTimeMillis()).concat(new NovaString(".txt"))));
			if (f.create())
			{
				f.writeLine(message);
			}
		}
		NovaConsole.writeLine(message);
		exit(code);
	}
	
	public static Process execute(NovaString command)
	{
		FILE pipe;
		File f;
		pipe = getPipe(command.chars.data, exit);
		f = new File(pipe);
		if (!f.accessor_exists())
		{
			exit(1, new NovaString("Unable to open pipe"));
		}
		return new Process(new StreamReader(f));
	}
	
	public void init()
	{
	}
	
}
