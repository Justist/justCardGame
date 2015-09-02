#include "collection.h"

void Collection::populate() {
	Card basic(1, "Nothing");
}

void Collection::Rock(GameState state) {
	state.getLives(livesOne, livesTwo);
	//Error<int> error;
	//error.printVars({livesOne, livesTwo});
	
	state.changeLives(0, 1); //ideally dependent on the current player
	
}
