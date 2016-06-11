#OBJS = main.o board.o collection.o gamestate.o card.o gameplay.o 
#update.o #error.o
CC = g++
DEBUG = -ggdb
STD = -std=c++11
ERROR = -Wall -Wextra
CFLAGS = $(ERROR) $(STD) $(DEBUG) -c
LFLAGS = $(ERROR)
EXE = game
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

$(EXE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXE)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@
	
run:
	./game

clean:
	@rm $(OBJECTS) $(EXE) 2>/dev/null || true
