from bluetooth import *
server_address = "00:02:72:CD:06:CC"
port = 1
sock=BluetoothSocket( RFCOMM )
sock.connect((server_address, port))
sock.send("hello!!")
sock.close()