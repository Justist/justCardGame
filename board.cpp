#include "board.h"

void Board::drawHorizontalLine() {
	for(int i = 0; i < boardLength; i++) {
		cout << "-";
	}
	cout << endl;
}

void Board::drawVerticalLines() {
	int spaceBetweenLines = (boardLength - 6) / 5, k = 0;
	for(int i = 0; i < boardHeight; i++) {
		if(i == (boardHeight / 2)) {drawHorizontalLine();}
		else {
			cout << "|";
			for(int j = 0; j < boardLength - 2; j++) {
				if(k == spaceBetweenLines) {cout << "|"; k = 0;}
				else {cout << " "; k++;}
			}
			cout << "|" << endl;
			k = 0;
		}
	}
}

void Board::drawBoard() {
	boardHeight = (boardHeight % 2 == 0) ? 
							(--boardHeight < 9) ? 9 //default to lower height
							: boardHeight 
					  : boardHeight;
					  

	boardLength = (boardLength % 5 != 1) ?
							(boardLength - ((boardLength % 5) - 1) < 21) ? 21
							: boardLength - ((boardLength % 5) - 1)
					  : boardLength;

	drawHorizontalLine();
	drawVerticalLines();
	drawHorizontalLine();
}

void Board::printLives(GameState state) {
	int one, two;
	state.getLives(one, two);
}

void Board::drawMinions(GameState state, bool one) {
	vector<Card> minions;
	state.getMinions(minions, one);
}
