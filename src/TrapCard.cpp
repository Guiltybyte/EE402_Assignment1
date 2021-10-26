#include "TrapCard.h"
#include <iostream>

using namespace std;

// Q5
// by value
TrapCard flipUpVal(TrapCard t) {
  t.faceUp = true;
  return t;
}

// by reference
void flipUpRef(TrapCard &t) { t.faceUp = true; }

TrapCard::TrapCard(string spellName, string effect)
    : SpellCard(spellName, 3, effect), faceUp(false) {}

bool TrapCard::isFaceUp() { return faceUp; }
void TrapCard::activate() {
  flipUpRef(*this); // Q10 an object passing itself to
                    // non-member function to modify state
  SpellCard::activate();
}
//
// Q9
TrapCard::~TrapCard() { cout << "TrapCard has been destroyed" << endl; }
