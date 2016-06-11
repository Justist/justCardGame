#include "gamestate.h"

GameState::GameState() {
	playerOneLives = playerTwoLives = 30;
	turnsPassed = 0;
	playerOneTurn = 1; // RNG decides in the future
	Card card;
	cMinions = cHandOne = cHandTwo = {};
	cHandOne.resize(MAX_HAND_SIZE);
	cHandTwo.resize(MAX_HAND_SIZE);
	cMinions.resize(MAX_MINIONS_AMOUNT);
}

void GameState::getLives(int& one, int& two) {
	one = playerOneLives;
	two = playerTwoLives;
}

void GameState::changeLives(int one, int two) {
	playerOneLives -= one;
	playerTwoLives -= two;
}

Card GameState::getMinion(int slot) {
	return cMinions[((playerOneTurn * 5) + slot) - 1];
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
	
	if(one) {hand = cHandOne;}
	else {hand = cHandTwo;}
	
	for(unsigned i = 0; i < hand.size(); i++) {
		if(hand[i] == emptyCard) {
			hand[i] = hand[i+1];
			hand[i+1] = emptyCard;
		}
	}
}

void GameState::emptyHand(vector<Card>& hand) {
	for(unsigned i = 0; i < hand.size(); i++) {
		hand[i] = emptyCard;
	}
}

void GameState::addHandCard(Card newCard, bool one) {
	cycleHand(one);
	vector<Card> hand;
	
	if(one) {hand = cHandOne;}
	else {hand = cHandTwo;}
	
	if(hand[hand.size()] == emptyCard) {
		for(unsigned i = 0; i < hand.size(); i++) {
			if(hand[i] == emptyCard) {hand[i] = newCard;}
		}
	} //else discard
}
