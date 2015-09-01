#ifndef BOARD_H
#define BOARD_H	

#include <iostream>
#include "gamestate.h"

using namespace std;

class Board {
	private:
		int height;
		int length;
	public:
		Board(int h, int l) : height(h), length(l) {drawBoard(height, length);}
		void drawBoardLine(int length);
		void drawBoardBorder(int height, int length);
		void drawBoard(int height, int length);
		void printLives(GameState state);
};

#endif
