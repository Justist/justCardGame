OBJS = main.o board.o collection.o gamestate.o #error.o
CC = g++
DEBUG = -ggdb
STD = -std=c++11
ERROR = -Wall -Wextra
CFLAGS = $(ERROR) $(STD) -c $(DEBUG)
LFLAGS = $(ERROR)
EXE = game

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXE)
	
main.o : main.cpp board.h collection.h gamestate.h
	$(CC) $(CFLAGS) main.cpp

board.o : board.h board.cpp gamestate.h
	$(CC) $(CFLAGS) board.cpp
	
collection.o : collection.h collection.cpp card.h gamestate.h
	$(CC) $(CFLAGS) collection.cpp

gamestate.o : gamestate.h gamestate.cpp error.h
	$(CC) $(CFLAGS) gamestate.cpp

#error.o : error.h error.cpp
#	$(CC) $(CFLAGS) error.cpp

clean:
	@rm *.o *~ $(EXE) 2>/dev/null || true
