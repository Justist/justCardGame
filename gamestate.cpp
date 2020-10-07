#include "gamestate.h"

GameState::GameState() {
	playerOneLives = playerTwoLives = 30;
	turnsPassed = 0;
	playerOneTurn = true; // RNG decides in the future
	cMinions.resize(MAXMINIONSAMOUNT);
	cHandOne.resize(MAXHANDSIZE);
	cHandTwo.resize(MAXHANDSIZE);
	for(int i = 0; i < MAXMINIONSAMOUNT; i++) { cMinions[i] = emptyCard; }
	for(int j = 0; j < MAXHANDSIZE; j++) { cHandOne[j] = emptyCard; cHandTwo[j] = emptyCard; }
}

void GameState::getLives(int& one, int& two) const {
	one = playerOneLives;
	two = playerTwoLives;
}

void GameState::changeLives(int current, int other) {
	if(playerOneTurn) {
		playerOneLives -= current;
		playerTwoLives -= other;
	} else {
		playerOneLives -= other;
		playerTwoLives -= current;
	}
}

Card GameState::getMinion(int slot) {
	return cMinions[((playerOneTurn * 5) + slot) - 1];
}

void GameState::playMinion(const Card& minion, int slot) {
	if(minion.getIsMinion()) { cMinions[((playerOneTurn * 5) + slot) - 1] = minion; }
}

void GameState::getHandCards(std::vector<Card>& handCards, bool one) {
	if(one) {handCards = cHandOne;}
	else {handCards = cHandTwo;}
}

void GameState::cycleHand(bool one) {
	std::vector<Card> hand;
	
	if(one) {hand = cHandOne;}
	else {hand = cHandTwo;}
	
	for(unsigned i = 0; i < hand.size(); i++) {
		if(hand[i] == emptyCard) {
			hand[i] = hand[i+1];
			hand[i+1] = emptyCard;
		}
	}
}

void GameState::emptyHand(std::vector<Card>& hand) {
	for(auto & i : hand) {
		i = emptyCard;
	}
}

void GameState::addHandCard(const Card& newCard, bool one) {
	cycleHand(one);
	std::vector<Card> hand;
	
	if(one) {hand = cHandOne;}
	else {hand = cHandTwo;}
	
	if(hand[hand.size()] == emptyCard) {
		for(auto & i : hand) {
			if(i == emptyCard) { i = newCard; }
		}
	} //else discard
}
