#include "collection.h"

Collection::Collection(bool first) {
	if(!first) return;
	Card rock(1, "You throw a rock.");
	Card imp(2, "It's an imp. We hate imps.", 1, 1);
	Card firestorm(3, "Fire everywhere. Damage.");
}

void Collection::Rock(GameState& state) {
	state.getLives(livesOne, livesTwo);
	// Damage the other player for 1
	state.changeLives(0, 1);
}

void Collection::Firestorm(GameState& state) {
	state.getLives(livesOne, livesTwo);
	// Damage the other for 5
	state.changeLives(0, 5);
}
