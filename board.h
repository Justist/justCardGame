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
		//Board() {}
		Board(int h, int l, GameState s) : boardHeight(h), boardLength(l) {drawBoard(s);}
		
		void drawHorizontalLine();
		void drawVerticalLines(GameState);
		void drawBoard(GameState);
		void printLives(GameState);
		
		void drawSlot(GameState, int, int);
		
		//bool updateGameState(GameState gState);
};

#endif
