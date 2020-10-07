#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <cstd::string>
#include <utility>

class Card {
	private:
		int number;
		std::string text;
		bool isMinion;
		// Only in case it is a minion
		int minionAttack{};
		int minionDefense{};
	public:
		Card() {number = 0; text = ""; isMinion = false;} //constructor for empty cards
		//Not a minion
		Card(int n, std::string t) : number(n), text(std::move(t)), isMinion(false) {}
		//Minion
		Card(int n, std::string t, int a, int d) : number(n), text(std::move(t)), isMinion(true), minionAttack(a), minionDefense(d) {}
		~Card() = default;
		
		int getNumber() const;
		std::string getText();
		bool getIsMinion() const;
		
		int getMinionAttack() const;
		int getMinionDefense() const;
		void setMinionAttack(int newAttack);
		void setMinionDefense(int newDefense);
		
		//numbers are (or should be) unique, hurray!
		bool operator==(Card& card) const {return getNumber() == card.getNumber();}
};

#endif
