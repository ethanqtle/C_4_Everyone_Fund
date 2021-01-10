CC      =  cc
CFLAGS  =  -v
EXEC    =  a.out
INCLS   =  
LIBS    =  

OBJS    =  main.o  poker.o  swap.o  wrt.o

$(EXEC): $(OBJS)
        @echo "linking ..."
        @$(CC)  $(CFLAGS)  -o $(EXEC)  $(OBJS)  $(LIBS)

$(OBJS): poker.h
        $(CC)  $(CFLAGS)  $(INCLS)  -c  $*.c

relink:
        @echo "relinking ..."
        @$(CC)  $(CFLAGS)  -o $(EXEC)  $(OBJS)  $(LIBS)
