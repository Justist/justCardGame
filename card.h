#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <cstring>

using namespace std;

class Card {
	private:
		int number;
		string text;
		bool isMinion;
		// Only in case it is a minion
		int minionAttack;
		int minionDefense;
	public:
		Card(int n, string t, bool i) : number(n), text(t), isMinion(i) {}
		int getNumber();
		string getText();
		bool getIsMinion();
		
		int getMinionAttack();
		int getMinionDefense();
		void setMinionAttack(int newAttack);
		void setMinionDefense(int newDefense);
};

#endif
