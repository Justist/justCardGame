#include "board.h"

void Board::drawHorizontalLine() const {
	for(int i = 0; i < boardLength; i++) {
		 std::cout << "-";
	}
	 std::cout << std::endl;
}

void Board::drawVerticalLines(const GameState& state) const {
   int halfHeight = boardHeight / 2, quarterHeight = (halfHeight / 2) - 1;
   int heightToDraw = boardHeight - 2, lengthToDraw = boardLength - 2;
	int spaceBetweenLines = (boardLength - 6) / 5, k = 0;
	int slot = 1;
	
	for(int i = 0; i < heightToDraw; i++) {
		if(i == halfHeight - 1) {drawHorizontalLine();}
		else {
			 std::cout << "|";
			for(int j = 0; j < lengthToDraw; j++) {
				if(k == spaceBetweenLines) { std::cout << "|"; k = 0;}
				else if(i == quarterHeight || i == quarterHeight + halfHeight) {
					drawSlot(state, slot, spaceBetweenLines); 
					slot += 2; 
					j += 2; 
					k += 3;
				}
				else { std::cout << " "; k++;}
			}
			 std::cout << "|" << std::endl;
			k = 0;
			slot -= 7; //from slot 8 to slot 1
		}
	}
}

void Board::drawMinion(GameState state, int slot) {
	Card minion = state.getMinion(slot);
	printf("%d %d", minion.getMinionAttack(), minion.getMinionDefense());
}

void Board::drawSlot(const GameState& state, int slot, int space) {
	// Draw space spaces, and in the middle 3 a minion if applicable
	if(space == 3) { drawMinion(state, slot); }
	else {
		int spaceAroundMinion = (space - 3) / 2;
		cursorRight(spaceAroundMinion);
		drawMinion(state, slot);
		cursorRight(spaceAroundMinion);	
	}
}

void Board::drawBoard(const GameState& state) {
	int minBoardHeight = 9, minBoardLength = 21;
	
	if(boardHeight % 2 == 0) {boardHeight--;}
	if(((boardHeight - 3) / 2) % 2 == 0) {boardHeight -= 2;}
	if(boardHeight < minBoardHeight) {boardHeight = minBoardHeight;}
	
	int modFiveLength = boardLength % 5;
	if(modFiveLength != 1) {boardLength -= (modFiveLength - 1);}
	if(boardLength < minBoardLength) {boardLength = minBoardLength;}
	
	std::cout << "h: " << boardHeight << " l: " << boardLength << std::endl;

	drawHorizontalLine();
	drawVerticalLines(state);
	drawHorizontalLine();
}

__attribute((unused)) void Board::printLives(const GameState& state) {
	int one, two;
	state.getLives(one, two);
	// TODO
}

__attribute((unused)) void Board::cursorUp(int x) { printf("\33[%dA\r", x); }

__attribute((unused)) void Board::cursorDown(int x) { printf("\33[%dB\r", x); }

__attribute((unused)) void Board::cursorRight(int x) { printf("\33[%dC", x); }

__attribute((unused)) void Board::cursorLeft(int x) { printf("\33[%dD", x); }

void Board::redrawBoard() {
	// TODO
}
