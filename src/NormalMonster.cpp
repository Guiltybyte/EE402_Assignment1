#include "NormalMonster.h"
#include <iostream>

// Need parameterless constructor to make the q18 template example easier
NormalMonster::NormalMonster()
    : MonsterCard("Skull Servant", 300, 200, true),
      flavourText("A skeletal ghost which isnt strong"
                  "but can mean trouble in large numbers") {}
NormalMonster::NormalMonster(string name, int atk, int def, bool inAtkMode,
                             string flavourText)
    : MonsterCard(name, atk, def, inAtkMode), flavourText(flavourText) {
  cout << "flavour text: " << flavourText << endl;
}
int NormalMonster::getAtk() const {
  cout << "Normal Monster Atk called" << endl;
  return atk;
}
string NormalMonster::getType() const { return "Normal"; }

string NormalMonster::getFlavourText() const { return flavourText; }

void NormalMonster::display() const {
  MonsterCard::display();
  cout << "Flavour Text:" << flavourText << endl;
}
// add the atk & def values and take other
// values from left operand
NormalMonster NormalMonster::operator+(NormalMonster other) {
  return NormalMonster(this->name, this->atk + other.atk, this->def + other.def,
                       this->inAtkMode, this->flavourText);
}
// subtract the atk & def values and take other
// values from right operand
NormalMonster NormalMonster::operator-(NormalMonster other) {
  return NormalMonster(other.name, this->atk - other.atk, this->def - other.def,
                       other.inAtkMode, other.flavourText);
}
// they are the same if their names are the same
bool NormalMonster::operator==(NormalMonster other) {
  return this->name == other.name;
}
