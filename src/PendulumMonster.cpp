#include "PendulumMonster.h"
#include <iostream>

using namespace std;

PendulumMonster::PendulumMonster(string name, int atk, int def, bool inAtkMode,
                                 string effect, bool effectActivated,
                                 int spellSpeed, string spellEffect, int scales)
    : EffectMonster(name, atk, def, inAtkMode, effect, effectActivated),
      SpellCard(name, spellSpeed, spellEffect), scales(scales) {}

int PendulumMonster::getAtk() const {
  cout << "Pendulum Monster getAtk Called" << endl;
  return atk;
}
string PendulumMonster::getType() const { return "Pendulum"; }
void PendulumMonster::display() const {
  EffectMonster::display();
  SpellCard::display();
  cout << "scales" << endl;
}
