package nova.star;

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

public class Frame extends NovaObject
{
	
	public int x;
	public int y;
	public int width;
	public int height;
	
	
	
	
	public Frame(Optional<NovaInt> x_optional, Optional<NovaInt> y_optional, Optional<NovaInt> width_optional, Optional<NovaInt> height_optional)
	{
		init(Optional.ofNullable(x), Optional.ofNullable(y), Optional.ofNullable(width), Optional.ofNullable(height));
	}
	
	public int mutator_x(int value)
	{
		mutator_x(value);
		return value;
	}
	
	public int mutator_y(int value)
	{
		mutator_y(value);
		return value;
	}
	
	public int mutator_width(int value)
	{
		mutator_width(value);
		return value;
	}
	
	public int mutator_height(int value)
	{
		mutator_height(value);
		return value;
	}
	
	public void init(Optional<NovaInt> x_optional, Optional<NovaInt> y_optional, Optional<NovaInt> width_optional, Optional<NovaInt> height_optional)
	{
		int x = x_optional == null ? 0 : x_optional.get();
		int y = y_optional == null ? 0 : y_optional.get();
		int width = width_optional == null ? 800 : width_optional.get();
		int height = height_optional == null ? 600 : height_optional.get();
		this.mutator_x(x);
		this.mutator_y(y);
		this.mutator_width(width);
		this.mutator_height(height);
	}
	
}
