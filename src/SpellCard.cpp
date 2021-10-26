#include <iostream>
#include "SpellCard.h"
 
using namespace std;

SpellCard::SpellCard(string name, int spellSpeed, string spellEffect):
    name(name), spellSpeed(spellSpeed), spellEffect(spellEffect) {}

 // q14 mod copy constructor
SpellCard::SpellCard(const SpellCard &sourceSpellCard):
    name("Copy of: " + sourceSpellCard.name),
    spellSpeed(sourceSpellCard.spellSpeed),
    spellEffect(sourceSpellCard.spellEffect) {}

void SpellCard::activate() {
    cout << name << " is activated!"
        << endl << "Effect: " << spellEffect << endl;
}

void SpellCard::display() const {
    cout
        << "Name: " << name << endl
        << "Spell Speed:" << spellSpeed << endl
        << "Effect:" << spellEffect << endl;
}
string SpellCard::getSpellEffect() const{
    return this->spellEffect;
}

// returns string which is the concatenation of the 2 effects
string operator +(const SpellCard & one, const SpellCard & other){
    return one.getSpellEffect() + " " + other.getSpellEffect();
}
