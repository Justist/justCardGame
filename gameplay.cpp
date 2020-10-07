#include "gameplay.h"

Gameplay::Gameplay() {
	int height, length;
   std::cout << "Give board height: " << std::endl;
   std::cin >> height;
   std::cout << "Give board length: " << std::endl;
   std::cin >> length;
	
	GameState gameState;
	Board     board(height, length, gameState);
	board.redrawBoard();
	Collection collection(true);
	
	
	
	if(!playGame(gameState, collection)) {
      std::cout << "Something went wrong, please contact someone." << std::endl;
	}
}

bool Gameplay::playGame(GameState& state, Collection& coll) {
	bool somethingPlayableIsImplemented = false; //TODO!

	if(!somethingPlayableIsImplemented) {
      std::cout << "Game not playable yet." << std::endl;
		return false;
	}
	while(playTurn(state, coll)) {} //call function until game is won
	
	return true;
}

bool Gameplay::playTurn(__attribute((unused)) GameState&  state,
                        __attribute((unused)) Collection& coll) {
	//TODO!
	return true; //if winstate, return 0
}
