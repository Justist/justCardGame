OBJS = main.o board.o collection.o card.o
CC = g++
DEBUG = -ggdb
ERROR = -Wall -Wextra
CFLAGS = $(ERROR) -c $(DEBUG)
LFLAGS = $(ERROR)
EXE = game

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXE)
	
main.o : main.cpp board.h collection.h
	$(CC) $(CFLAGS) main.cpp

board.o : board.h board.cpp
	$(CC) $(CFLAGS) board.cpp
	
collection.o : collection.h collection.cpp card.h
	$(CC) $(CFLAGS) collection.cpp

clean:
	@rm *.o *~ $(EXE) 2>/dev/null || true
