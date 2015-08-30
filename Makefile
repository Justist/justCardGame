OBJS = main.o board.o collection.o card.o gamestate.o
CC = g++
DEBUG = -ggdb
STD = -std=c++11
ERROR = -Wall -Wextra
CFLAGS = $(ERROR) -c $(DEBUG) $(STD)
LFLAGS = $(ERROR)
EXE = game

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXE)
	
main.o : main.cpp board.h collection.h gamestate.h
	$(CC) $(CFLAGS) main.cpp

board.o : board.h board.cpp
	$(CC) $(CFLAGS) board.cpp
	
collection.o : collection.h collection.cpp card.h
	$(CC) $(CFLAGS) collection.cpp

gamestate.o : gamestate.h gamestate.cpp
	$(CC) $(CFLAGS) gamestate.cpp

clean:
	@rm *.o *~ $(EXE) 2>/dev/null || true
