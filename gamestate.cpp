#include "gamestate.h"

GameState::GameState() {
	playerOneLives = playerTwoLives = 30;
	turnsPassed = 0;
	playerOneTurn = 1; // RNG decides in the future
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
	cMinions[((playerOneTurn * 5) + slot) - 1] = minion;
}

void GameState::getHandCards(vector<Card>& handCards, bool one) {
	if(one) {handCards = cHandOne;}
	else {handCards = cHandTwo;}
}

void GameState::cycleHand(bool one) {
	vector<Card> hand;
	for (i = 0; i < )
}

void GameState::addHandCard(Card card) {
	
}
