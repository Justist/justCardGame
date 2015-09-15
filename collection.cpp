#include "collection.h"

Collection::Collection(bool first) {
	if(!first) return;
	Card rock(1, "You throw a rock.");
	Card imp(2, "It's an imp. We hate imps.", 3, 4);
}

void Collection::Rock(GameState& state) {
	state.getLives(livesOne, livesTwo);
	
	state.changeLives(0, 1); //ideally dependent on the current player
}
