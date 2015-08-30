#include "board.h"

void Board::drawBoardLine(int length) {
	for(int i = 0; i < length; i++) {
		cout << "-";
	}
	cout << endl;
}

void Board::drawBoardBorder(int height, int length) {
	for(int i = 0; i < height; i++) {
		cout << "|";
		for(int j = 0; j < length - 2; j++) {
			cout << " ";
		}
		cout << "|" << endl;
	}
}

void Board::drawBoard(int height, int length) {
	drawBoardLine(length);
	drawBoardBorder(height, length);
	drawBoardLine(length);
}
