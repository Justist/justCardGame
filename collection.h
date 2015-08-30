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
	public:
		Collection(map<Card,void(*)(GameState)> m) : cards(m) {populate();} //input is null, just to call populate always at initialisation
		void populate();
		Card defineCard(int number);
		void drawCard(int number);
		
		// Card functions
		void Rock(GameState);
};

#endif
