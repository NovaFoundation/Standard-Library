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

public class ServerSocket extends Socket
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
