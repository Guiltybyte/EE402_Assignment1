#include "MonsterCard.h"
#include <iostream>

MonsterCard::MonsterCard(string name, int atk, int def, bool inAtkMode)
    : name(name), atk(atk), def(def), inAtkMode(inAtkMode) {
  numMonsters++;
}
MonsterCard::~MonsterCard() { numMonsters--; }
// q16 keeps track of number of monsters
int MonsterCard::numMonsters = 0;
int MonsterCard::getNumMonsters() { return numMonsters; }

int MonsterCard::getAtk() const {
  cout << "MonsterCard getAtk called" << endl;
  return atk;
}

// Q5
// talk about & show that the value one doesnt actually
// change the battle mode of mon, without additional
// work on the callling side, while the reference one
// mutates straight away.
// pass by value
// pass by reference (Better function in this case)
void MonsterCard::changePosition() { inAtkMode = !inAtkMode; }

void MonsterCard::display() const {
  cout << "name: " << name << endl
       << "atk: " << atk << endl
       << "def: " << def << endl
       << "Mode: " << ((inAtkMode) ? "Attack" : "Defense") << endl;
}
