#include "collection.h"

void Collection::populate() {
	Card basic(1, "Nothing");
}

void Collection::Rock(GameState state) {
	state.getLives(livesOne, livesTwo);
	//error.printVars({livesOne, livesTwo});
}
