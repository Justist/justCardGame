#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <iostream>
#include <vector>
#include "error.h"
#include "card.h"

class GameState {

	private:
		int playerOneLives, playerTwoLives; // 30 30 initially
		int playerTurn, turnsPassed; // 1 or 2 | 0 to a lot
		vector<Card> cMinions; // empty initially
		void initialize();
	public:
		GameState() {initialize();}
		void getLives(int& one, int& two);
		void changeLives(int one, int two);
		void getMinions(vector<Card>& minions, bool one);
		void playMinion(Card minion, int slot);
};

#endif
