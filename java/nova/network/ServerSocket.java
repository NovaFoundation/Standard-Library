package nova.network;

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
import nova.network.ConnectionSocket;
import nova.network.Socket;

public class ServerSocket
{
	private SOCKET_ID_TYPE serverSocket;
	
	public boolean open;
	public NovaArray requests;
	
	
	
	
	public ServerSocket()
	{
		init();
	}
	
	
	
	
	
	
	public void init()
	{
		open = false;
	}
	
	public boolean start(int port)
	{
		serverSocket = nova_serversocket_start(port);
		if (serverSocket == 0)
		{
			return false;
		}
		open = true;
		return true;
	}
	
	public boolean close()
	{
		int result;
		result = nova_socket_close(serverSocket);
		if (result == 0)
		{
			return false;
		}
		open = false;
		return true;
	}
	
	public ConnectionSocket acceptClient()
	{
		SOCKET_ID_TYPE clientSocket;
		ConnectionSocket socket;
		clientSocket = nova_serversocket_accept(serverSocket);
		if (clientSocket == 0)
		{
			return null;
		}
		socket = new ConnectionSocket(clientSocket);
		return socket;
	}
	
}
