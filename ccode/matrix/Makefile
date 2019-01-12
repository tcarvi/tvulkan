SHELL = /bin/sh
.SUFFIXES:
.SUFFIXES: .c .o
objdir = ./obj
srcdir = ./src
bindir = ./bin
DEPS = matrix.c
DEPOBJS = matrix.o

matrix.o : $(srcdir)/$(DEPS) $(objdir)/$(DEPOBJS)
	gcc -c -Wall -o $(objdir)/matrix.o -std=c11 $(srcdir)/matrix.c
#	sed -f $(srcdir)/sedscript $(srcdir)/foo.man > $@

execMatrix : $(objdir)/$(DEPOBJS)
	gcc -Wall -o $(bindir)/execMatrix -std=c11 $(objdir)/matrix.o