#include "card.h"

int Card::getNumber() const {return number;}

std::string Card::getText() {return text;}

bool Card::getIsMinion() const {return isMinion;}

// Minion functions

int Card::getMinionAttack() const {return minionAttack;}

int Card::getMinionDefense() const {return minionDefense;}

void Card::setMinionAttack(int newAttack) {minionAttack = newAttack;}

void Card::setMinionDefense(int newDefense) {minionDefense = newDefense;}

