package nova.time;

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

public class NovaDate
{
	
	public int year;
	public int month;
	public int day;
	public int hour;
	public int minute;
	public int second;
	
	
	
	
	public NovaDate()
	{
		init();
	}
	
	
	
	
	
	
	
	
	
	public void init()
	{
		updateTime();
	}
	
	public void decodeDate(NovaString prototype, NovaString date)
	{
	}
	
	public void updateTime()
	{
		nova_updateTime();
		year = nova_getYear();
		month = nova_getMonth();
		day = nova_getDay();
		hour = nova_getHour();
		minute = nova_getMinute();
		second = nova_getSecond();
	}
	
	public NovaString formatDate(NovaString str)
	{
		return formatDate(str, month, day, year, hour, minute, second);
	}
	
	public NovaString formatDate(NovaString str, int first, int second, int third, int fourth, int fifth, int sixth)
	{
		char[] data;
		data = nova_formatDate(str.chars.data, first, second, third, fourth, fifth, sixth);
		return new NovaString(data);
	}
	
}
