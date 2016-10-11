package nova.star;

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

public class Frame
{
	
	public int x;
	public int y;
	public int width;
	public int height;
	
	
	
	
	public Frame(Optional<int> x_optional, Optional<int> y_optional, Optional<int> width_optional, Optional<int> height_optional)
	{
		init(Optional.ofNullable(x), Optional.ofNullable(y), Optional.ofNullable(width), Optional.ofNullable(height));
	}
	
	public int x(int value)
	{
		x(value);
		return value;
	}
	
	public int y(int value)
	{
		y(value);
		return value;
	}
	
	public int width(int value)
	{
		width(value);
		return value;
	}
	
	public int height(int value)
	{
		height(value);
		return value;
	}
	
	public void init(Optional<int> x_optional, Optional<int> y_optional, Optional<int> width_optional, Optional<int> height_optional)
	{
		int x = x_optional == null ? 0 : x_optional.get();
		int y = y_optional == null ? 0 : y_optional.get();
		int width = width_optional == null ? 800 : width_optional.get();
		int height = height_optional == null ? 600 : height_optional.get();
		this.x(x);
		this.y(y);
		this.width(width);
		this.height(height);
	}
	
}
