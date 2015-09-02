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
		if(i == (boardHeight / 2) + 1) {drawHorizontalLine();}
		else {
			cout << "|";
			for(int j = 0; j < boardLength - 2; j++) {
				if(j % spaceBetweenLines == 0 + k) {cout << "|";}
				else {cout << " ";}
			}
			cout << "|" << endl;
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
	//TODO
	return;
}
