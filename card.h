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
		Card() {number = 0; text = ""; isMinion = false;}
		Card(int n, string t, bool i) : number(n), text(t), isMinion(i) {}
		int getNumber();
		string getText();
		bool getIsMinion();
		
		int getMinionAttack();
		int getMinionDefense();
		void setMinionAttack(int newAttack);
		void setMinionDefense(int newDefense);
		
		//numbers are (or should be) unique, hurray!
		bool operator==(Card& card) {return getNumber() == card.getNumber();}
};

#endif
