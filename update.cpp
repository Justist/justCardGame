#include "update.h"

bool Update::updateGameState(GameState state) {
	return board.updateGameState(state) &&
			 coll.updateGameState(state);
}
