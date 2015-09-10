#include "card.h"

int Card::getNumber() {return number;}

string Card::getText() {return text;}

bool Card::getIsMinion() {return isMinion;}

// Minion functions

int Card::getMinionAttack() {return minionAttack;}

int Card::getMinionDefense() {return minionDefense;}

void Card::setMinionAttack(int newAttack) {minionAttack = newAttack;}

void Card::setMinionDefense(int newDefense) {minionDefense = newDefense;}

