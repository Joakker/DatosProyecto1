.PHONY: all debug


all:
	cd src && make

debug: all
	cd src && gdb prog
	

