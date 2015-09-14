#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <iostream>
#include "board.h"
#include "collection.h"
#include "gamestate.h"

using namespace std;

class Gameplay {
	private:
		bool playGame(GameState&, Collection&);
		bool playTurn(GameState&, Collection&);
	public:
		Gameplay();
};

#endif
