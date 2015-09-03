#include "collection.h"

void Collection::populate() {
	Card rock(1, "You throw a rock.", false);
	Card imp(2, "It's an imp. We hate imps.", true);
}

void Collection::Rock(GameState state) {
	state.getLives(livesOne, livesTwo);
	//Error<int> error;
	//error.printVars({livesOne, livesTwo});
	
	state.changeLives(0, 1); //ideally dependent on the current player
	
}

void Collection::Imp(GameState state) {
	// Don't know what to add here.
}
