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
import nova.io.InputStream;
import nova.io.OutputStream;
import nova.datastruct.list.Queue;
import nova.network.NetworkInputStream;
import nova.network.NetworkOutputStream;
import nova.network.Socket;

public class ConnectionSocket extends Socket
{
	private Queue inputBuffer;
	private SOCKET_ID_TYPE socket;
	
	public boolean connected;
	public InputStream in;
	public OutputStream out;
	
	
	
	
	public ConnectionSocket(SOCKET_ID_TYPE socket)
	{
		init(socket);
	}
	
	
	
	
	public void init(SOCKET_ID_TYPE socket)
	{
		this.socket = socket;
		in = new NetworkInputStream(this);
		out = new NetworkOutputStream(this);
		connected = true;
	}
	
	public void close()
	{
		connected = false;
		nova_socket_close(socket);
	}
	
	public boolean validateConnection()
	{
		NovaString message;
		if (!connected)
		{
			return connected;
		}
		message = readString(false);
		if (connected)
		{
			inputBuffer.enqueue(message);
		}
		return connected;
	}
	
	public NovaString readString()
	{
		return readString(true);
	}
	
	private NovaString readString(boolean checkBuffer)
	{
		if (!checkBuffer || inputBuffer.accessor_empty())
		{
			char[] data;
			data = nova_socket_receive(socket);
			if (data == 0)
			{
				connected = false;
				return null;
			}
			return new NovaString(data);
		}
		return inputBuffer.dequeue();
	}
	
	public boolean write(NovaString data)
	{
		boolean success;
		success = nova_socket_send(socket, data.chars.data) == 1;
		return success;
	}
	
}
