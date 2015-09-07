#ifndef UPDATE_H
#define UPDATE_H

#include "board.h"
#include "gamestate.h"
#include "collection.h"

using namespace std;

class Update {
	private:
		Board board;
		Collection coll(false);
   public:
      bool updateGameState(GameState state);
};

#endif
