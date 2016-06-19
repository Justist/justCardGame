#ifndef GAMESTATE_H
#define GAMESTATE_H

#define MAXHANDSIZE 8
#define MAXMINIONSAMOUNT 10

#include <iostream>
#include <vector>
#include "error.h"
#include "card.h"

class GameState {

	private:
		int playerOneLives, playerTwoLives; // 30 30 initially
		Card emptyCard; //should be const or alike, gives lots of errors then though
		bool playerOneTurn; //changes every turn
		int turnsPassed; // 0 to a lot
		vector<Card> cMinions; // empty initially, minions on board
		vector<Card> cHandOne, cHandTwo;
		void cycleHand(bool);
	public:
		GameState();
		void getLives(int&, int&);
		void changeLives(int, int);
		
		bool getPlayerTurn() { return playerOneTurn; }
		void changePlayerTurn() { playerOneTurn = !playerOneTurn; }
		
		int getTurnsPassed() { return turnsPassed; }
		void turnOver() { turnsPassed++; }
		
		void getMinions(vector<Card>& minions) { minions = cMinions; }
		Card getMinion(int);
		void playMinion(Card, int);
		
		void getHandCards(vector<Card>&, bool);
		void addHandCard(Card, bool);
		void emptyHand(vector<Card>&);
};

#endif
