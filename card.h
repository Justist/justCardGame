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
		// For empty cards
		Card() {number = 0; text = ""; isMinion = false;}
		// For spells
		Card(int n, string t) : number(n), text(t), isMinion(false) {}
		// For minions
		Card(int n, string t, int a, int d) : 
			number(n), text(t), isMinion(true), minionAttack(a), minionDefense(d) {}
		
		int getNumber() {return number;}
		string getText() {return text;}
		bool getIsMinion() {return isMinion;}
		
		int getMinionAttack() {return minionAttack;}
		int getMinionDefense() {return minionDefense;}
		void setMinionAttack(int newAttack) {minionAttack = newAttack;}
		void setMinionDefense(int newDefense) {minionDefense = newDefense;}
		
		//numbers are (or should be) unique, hurray!
		bool operator==(Card& card) {return getNumber() == card.getNumber();}
		void operator=(Card card) {
			number = card.getNumber();
			text = card.getText();
			isMinion = card.getIsMinion();
			if(isMinion) {
				minionAttack = card.getMinionAttack();
				minionDefense = card.getMinionDefense();
			}
		}
};

#endif
