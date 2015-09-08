#include "gameplay.h"

void Gameplay::startTheGame() {
	int height, length;
	cout << "Board height is: " << endl;
	cin >> height;
	cout << "Board length is: " << endl;
	cin >> length;
	
	GameState gamestate;
	Board board(height, length, gamestate);
	Collection collection(true);
	
	if(!playGame(gamestate, collection)) {
		cout << "Something went wrong, please contact someone." << endl;
	}
}

bool Gameplay::playGame(GameState& state, Collection& coll) {
	bool somethingPlayableIsImplemented = 0; //TODO!

	if(!somethingPlayableIsImplemented) {
		cout << "Game not playable yet." << endl; 
		return 0;
	}
	while(playTurn(state, coll)) {} //call function until game is won
	
	return 1;
}

bool Gameplay::playTurn(GameState& state, Collection& coll) {
	return 1; //if winstate, return 0
}
