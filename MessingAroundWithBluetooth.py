import bluetooth
#Note that this will only run with python 2.7, not the newer version for some reason

print('now beginning search')
nearby_devices = bluetooth.discover_devices()

print ('search finished')
for bdaddr in nearby_devices:
	print (bdaddr)
	print (bluetooth.lookup_name(bdaddr))
