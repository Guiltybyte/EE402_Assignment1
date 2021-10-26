#ifndef TRAPCARD_H
#define TRAPCARD_H

#include "SpellCard.h"
#include <iostream>

using namespace std;

class TrapCard : public SpellCard {
private:
  bool faceUp;
  friend TrapCard flipUpVal(TrapCard t);
  friend void flipUpRef(TrapCard &t);

public:
  bool isFaceUp();
  TrapCard(string, string);
  void activate(); // example of over-ridding
  ~TrapCard();
};
#endif
