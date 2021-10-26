#ifndef EFFECTMONSTER_H
#define EFFECTMONSTER_H

#include "MonsterCard.h"
#include <iostream>

using namespace std;

class EffectMonster : public MonsterCard {
private:
  string effect;
  bool effectActivated; // effects are once per turn
public:
  EffectMonster(string, int, int, bool, string, bool);
  int getAtk() const;
  virtual void activateEffect();
  virtual string getType() const;
  virtual void display() const;
};
#endif
