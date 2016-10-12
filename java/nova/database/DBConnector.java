package nova.database;

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
import nova.database.ResultSet;

public class DBConnector extends NovaObject
{
	private MYSQL mysql;
	private MYSQL_RES result;
	
	public NovaString error;
	
	
	
	
	public DBConnector()
	{
		init();
	}
	
	
	
	
	
	
	
	
	
	
	
	
	public void init()
	{
		error = new NovaString("");
	}
	
	public void connect(NovaString host, NovaString user, NovaString password)
	{
		mysql = nova_db_connect1(host.chars.data, user.chars.data, password.chars.data);
		updateError();
	}
	
	public void connect(NovaString host, NovaString user, NovaString password, NovaString database)
	{
		mysql = nova_db_connect2(host.chars.data, user.chars.data, password.chars.data, database.chars.data);
		updateError();
	}
	
	public void connect(NovaString host, NovaString user, NovaString password, NovaString database, int port, NovaString unixSocket, int clientFlag)
	{
		mysql = nova_db_connect3(host.chars.data, user.chars.data, password.chars.data, database.chars.data, port, unixSocket.chars.data, clientFlag);
		updateError();
	}
	
	public void updateError()
	{
		error = new NovaString(nova_db_error(mysql));
	}
	
	public void changeUser(NovaString username, NovaString password, NovaString database)
	{
		nova_user_select(mysql, username.chars.data, password.chars.data, database.chars.data);
		updateError();
	}
	
	public ResultSet query(NovaString query)
	{
		char[][][] arrays;
		result = nova_exec_query(mysql, query.chars.data);
		if (result == 0)
		{
			updateError();
			return null;
		}
		arrays = nova_get_results(mysql, result);
		if (arrays != 0)
		{
			int numRows;
			int numCols;
			NovaArray rows;
			ResultSet r;
			int i;
			numRows = (int)nova_num_rows(mysql);
			numCols = (int)nova_num_cols(result);
			rows = new NovaArray(numRows);
			i = (int)0;
			for (; i < (int)numRows; i++)
			{
				int j;
				rows.set(i, new NovaArray(numCols));
				j = (int)0;
				for (; j < (int)numCols; j++)
				{
					rows.get(i).set(j, new NovaString(arrays[i][j]));
				}
			}
			r = new ResultSet(rows, numCols);
			updateError();
			return r;
		}
		updateError();
		return null;
	}
	
	public void close()
	{
		nova_db_close(mysql);
		updateError();
	}
	
}
