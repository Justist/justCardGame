#include "gameplay.h"

Gameplay::Gameplay() {
	int height, length;
	cout << "Give board height: " << endl;
	cin >> height;
	cout << "Give board length: " << endl;
	cin >> length;
	
	GameState gamestate;
	Board board(height, length, gamestate);
	board.redrawBoard();
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
	//TODO!
	return 1; //if winstate, return 0
}
