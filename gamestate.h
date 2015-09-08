#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <iostream>
#include <vector>
#include "error.h"
#include "card.h"

class GameState {

	private:
		int playerOneLives, playerTwoLives; // 30 30 initially
		bool playerOneTurn; //changes every turn
		int turnsPassed; // 0 to a lot
		vector<Card> cMinions; // empty initially, minions on board
		vector<Card> cHandOne, cHandTwo; //also initially empty, cards in hands
		
		void cycleHand(bool);
	public:
		GameState();
		void getLives(int&, int&);
		void changeLives(int, int);
		
		bool getPlayerTurn() {return playerOneTurn;}
		void changePlayerTurn() {playerOneTurn = !playerOneTurn;}
		
		int getTurnsPassed() {return turnsPassed;}
		void turnOver() {turnsPassed++;}
		
		void getMinions(vector<Card>& minions) {minions = cMinions;}
		void playMinion(Card, int);
		
		void getHandCards(vector<Card>&, bool);
		void addHandCard(Card);
};

#endif
