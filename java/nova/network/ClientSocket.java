package nova.network;

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
import nova.network.ConnectionSocket;
import nova.network.Socket;

public class ClientSocket extends Socket
{
	private SOCKET_ID_TYPE socket;
	
	public ConnectionSocket connection;
	
	
	
	
	public ClientSocket()
	{
		init();
	}
	
	
	
	public void init()
	{
	}
	
	public boolean connect(NovaString ipAddress, int port)
	{
		socket = nova_clientsocket_connect(ipAddress.chars.data, port);
		if (socket == 0)
		{
			return false;
		}
		connection = new ConnectionSocket(socket);
		return true;
	}
	
	public boolean close()
	{
		int result;
		result = nova_socket_close(socket);
		if (result == 0)
		{
			return false;
		}
		return true;
	}
	
}
