#include "board.h"

void Board::drawHorizontalLine() {
	for(int i = 0; i < boardLength; i++) {
		cout << "-";
	}
	cout << endl;
}

void Board::drawVerticalLines(GameState state) {
   int halfHeight = boardHeight / 2, quarterHeight = (halfHeight / 2) - 1;
   int heightToDraw = boardHeight - 2, lengthToDraw = boardLength - 2;
	int spaceBetweenLines = (boardLength - 6) / 5, k = 0;
	int slot = 1;
	
	for(int i = 0; i < heightToDraw; i++) {
		if(i == halfHeight - 1) {drawHorizontalLine();}
		else {
			cout << "|";
			for(int j = 0; j < lengthToDraw; j++) {
				if(k == spaceBetweenLines) {cout << "|"; k = 0;}
				else if(i == quarterHeight || i == quarterHeight + halfHeight) {
					drawSlot(state, slot, spaceBetweenLines); 
					slot += 2; 
					j += 2; 
					k += 3;
				}
				else {cout << " "; k++;}
			}
			cout << "|" << endl;
			k = 0;
			slot -= 7; //from slot 8 to slot 1
		}
	}
}

//bool Board::updateGameState(GameState gState) {
//	state = gState;
//	return true;
//}

void Board::drawSlot(GameState state, int slot, int space) {
	// Draw space spaces, and in the middle 3 a minion if applicable
	
}

void Board::drawBoard(GameState state) {
	int minBoardHeight = 9, minBoardLength = 21;
	
	if(boardHeight % 2 == 0) {boardHeight--;}
	if(((boardHeight - 3) / 2) % 2 == 0) {boardHeight -= 2;}
	if(boardHeight < minBoardHeight) {boardHeight = minBoardHeight;}
	
	int modFiveLength = boardLength % 5;
	if(modFiveLength != 1) {boardLength -= (modFiveLength - 1);}
	if(boardLength < minBoardLength) {boardLength = minBoardLength;}
	
	cout << "h: " << boardHeight << " l: " << boardLength << endl;

	drawHorizontalLine();
	drawVerticalLines(state);
	drawHorizontalLine();
}

void Board::printLives(GameState state) {
	int one, two;
	state.getLives(one, two);
	// TODO
}
