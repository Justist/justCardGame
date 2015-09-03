#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include <cstring>
#include <map>
#include "card.h"
#include "gamestate.h"

using namespace std;

class Collection {
	private:
		map<Card,void(*)(GameState)> cards;
		int livesOne, livesTwo; // Technically global variables
	public:
		Collection() {populate();}
		void populate();
		Card defineCard(int number);
		void drawCard(int number);
		
		// Card functions
		void Rock(GameState);
		void Imp(GameState);
};

#endif
