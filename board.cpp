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

void Board::drawSlot(GameState state, int slot, int space) {
	// Draw space spaces, and in the middle 3 a minion if applicable
	vector<Card> minions;
	int spaceNextToMinion, i, spaceBetweenStats, spaceForMinion;
	Card emptyCard;
	state.getMinions(minions);
	Card minion;
	minion = minions[slot];
	
	// No minion to 'draw'
	if(minion == emptyCard || !minion.getIsMinion()) {
		for(i = 0; i < space; i++) {
			cout << " ";
		}
		return;
	}
	
	// Even amount of spaces to 'fill', at least 4, so we need to draw 
	// attack, 2 spaces, defense
	if(space % 2 == 0) {
		spaceForMinion = 4;
		spaceBetweenStats = 2;
	} else {
		spaceForMinion = 3;
		spaceBetweenStats = 1;
	}
	spaceNextToMinion = (space - spaceForMinion) / 2;
	for(i = 0; i < spaceNextToMinion; i++) {
		cout << " ";
	}
	cout << minion.getMinionAttack();
	for(i = 0; i < spaceBetweenStats; i++) {
		cout << " ";
	}
	cout << minion.getMinionDefense();
	for(i = 0; i < spaceNextToMinion; i++) {
		cout << " ";
	}
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
