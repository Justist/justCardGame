#include "gamestate.h"

void GameState::initialize() {
	playerOneLives = playerTwoLives = 30;
	turnsPassed = 0;
	playerTurn = 1; // RNG decides in the future
	cMinions = {};
}

void GameState::getLives(int& one, int& two) {
	one = playerOneLives;
	two = playerTwoLives;
}

void GameState::changeLives(int one, int two) {
	playerOneLives -= one;
	playerTwoLives -= two;
}

void GameState::playMinion(Card minion, int slot) {
	cMinions[(playerTurn * slot) - 1] = minion;
}
