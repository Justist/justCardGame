#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include <cstring>
#include <map>
#include "card.h"

using namespace std;

class Collection {
	private:
		//enum cards {test1, test2, test3};
		map<int,string> cards;
	public:
		Collection(map<int,string> m) : cards(m) {populate();}
		void populate();
		Card defineCard(int number);
		void drawCard(int number);
};

#endif
