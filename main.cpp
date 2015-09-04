#include <iostream>
#include "board.h"
#include "collection.h"
#include "gamestate.h"

using namespace std;

int playerTurn(GameState state, Collection coll) { //which players turn is, is in the state
	return 1; //if winstate, return 0
}

int playGame(GameState state, Collection coll) {

	bool somethingPlayableIsImplemented = 0; //TODO!

	if(!somethingPlayableIsImplemented) {
		cout << "Game not playable yet." << endl; 
		return 0;
	}
	while(playerTurn(state, coll)) {} //call function until game is won
	
	return 1;
}

int main() {
	int height, length;
	cout << "Board height is: " << endl;
	cin >> height;
	cout << "Board length is: " << endl;
	cin >> length;
	GameState gamestate;
	Board board(height, length, gamestate);
	Collection collection;
	//collection.Rock(gamestate);
	
	if(!playGame(gamestate, collection)) {
		cout << "Something went wrong, please contact someone." << endl;
	}
	
	return 0;
}
