#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include <cstring>
#include <map>

#include "card.h"
#include "gamestate.h"

class Collection {
	private:
		std::map<Card,void(*)(GameState)> cards;
		int livesOne{}, livesTwo{}; // Technically global variables
	public:
		explicit Collection(bool first);
		//Card defineCard(int number);
		
		// Card functions: minions dont require functions
		void Rock(GameState&);
		void Firestorm(GameState &);
		
		//bool updateGameState(GameState);
};

#endif
