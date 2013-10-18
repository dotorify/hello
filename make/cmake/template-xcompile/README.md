Getting Started
===============

	We are using CMAKE to generate a Makefile.

SUPPORTS
========

	OS: Linux


CONFIGURE
=========

	If you want to make a Makefile 
		$ configure

COMPILE
=======

	To generate Makefile:

		$ cmake .

	To make a executable file:

		$ make
		Or
		$ make VERBOSE=1

	To remove generated files:

		$ make clean

	To remove generated files for distribution:

		$ make clean
		$ make distclean

CROSS-COMPILE
=============

	First time:
		$ ./configure arm
		$ make

	More than once:
		$ make clean
		$ make distclean
		$ ./configure arm
		$ make
