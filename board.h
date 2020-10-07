#ifndef BOARD_H
#define BOARD_H	

#include <iostream>
#include "gamestate.h"

class Board {
	private:
		int boardHeight;
		int boardLength;
	public:
		//Board() {}
		Board(int h, int l, const GameState& s) : boardHeight(h), boardLength(l) {drawBoard(s);}
		
		void drawHorizontalLine() const;
		void drawVerticalLines(const GameState&) const;
		void drawBoard(const GameState&);
   
      static void printLives(const GameState&);
		
		static void drawMinion(GameState, int);
		static void drawSlot(const GameState&, int, int);
		
		static void cursorUp(int);
		static void cursorDown(int);
		static void cursorRight(int);
		static void cursorLeft(int);
		
		void redrawBoard();
		//bool updateGameState(GameState gState);
};

#endif
