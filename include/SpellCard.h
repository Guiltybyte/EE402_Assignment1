#ifndef SPELLCARD_H 
#define SPELLCARD_H 

#include <iostream>

using namespace std;

class SpellCard {
    protected:
        string name;
        int spellSpeed;
        string spellEffect; 
    public:
        SpellCard(string, int, string); 
        SpellCard(const SpellCard &sourceSpellCard); // q14 mod copy constructor
        void activate();
        virtual void display() const;
        string getSpellEffect() const;
};
string operator +(const SpellCard &, const SpellCard &);
#endif
