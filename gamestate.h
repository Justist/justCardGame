#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <iostream>
#include "error.h"

class GameState {

	private:
		int playerOneLives, playerTwoLives;
		int playerTurn, turnsPassed;
		
		void initialize();
	public:
		GameState() {initialize();}
		void getLives(int& one, int& two);
		void changeLives(int one, int two);

};

#endif
