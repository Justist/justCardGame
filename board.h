#ifndef BOARD_H
#define BOARD_H	

#include <iostream>
#include "gamestate.h"

using namespace std;

class Board {
	private:
		int boardHeight;
		int boardLength;
	public:
		Board(int h, int l) : boardHeight(h), boardLength(l) {drawBoard();}
		void drawHorizontalLine();
		void drawVerticalLines();
		void drawBoard();
		void printLives(GameState state);
};

#endif
