#ifndef BOARD_H
#define BOARD_H	

#include <iostream>
#include "gamestate.h"

using namespace std;

class Board {
	private:
		int boardHeight;
		int boardLength;
		GameState state;
	public:
		Board(int h, int l, GameState s) : boardHeight(h), boardLength(l), state(s) {drawBoard();}
		void drawHorizontalLine();
		void drawVerticalLines();
		void drawBoard();
		void printLives();
		
		void drawSlot(int slot);
};

#endif
