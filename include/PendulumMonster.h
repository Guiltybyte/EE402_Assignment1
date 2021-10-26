#ifndef PENDULUMMONSTER_H
#define PENDULUMMONSTER_H

#include "EffectMonster.h"
#include "SpellCard.h"
#include <iostream>

using namespace std;

class PendulumMonster : public EffectMonster, public SpellCard {
private:
  int scales;

public:
  // spellName will be equal mon name
  PendulumMonster(string, int, int, bool, string, bool, int, string, int);
  int getAtk() const;
  virtual string
  getType() const; // overridden in this case, rather than implemented
  virtual void display() const;
};

#endif
