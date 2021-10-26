#include "EffectMonster.h"
#include <iostream>

using namespace std;

EffectMonster::EffectMonster(string name, int atk, int def, bool inAtkMode,
                             string effect, bool effectActivated)
    : MonsterCard(name, atk, def, inAtkMode), effect(effect),
      effectActivated(effectActivated) {}

int EffectMonster::getAtk() const {
  cout << "Effect Monster getAtk called" << endl;
  return atk;
}
// Q14 modified copy constructor
void EffectMonster::activateEffect() {
  cout << getType() << "Monster," << name << "activates it's effect" << endl
       << "Effect: " << effect << endl;
  effectActivated = true;
}
string EffectMonster::getType() const { return "Effect"; }

void EffectMonster::display() const {
  MonsterCard::display();
  cout << "Effect: " << effect << endl
       << "Activated? " << ((effectActivated) ? "Yes" : "No") << endl;
}
