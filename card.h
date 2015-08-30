#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <cstring>

using namespace std;

class Card {
	protected:
		int number;
		string text;
		
	public:
		Card(int n, string t) : number(n), text(t) {}
};

#endif
