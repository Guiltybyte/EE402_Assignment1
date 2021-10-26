#include "EffectMonster.h"
#include "NormalMonster.h"
#include "PendulumMonster.h"
#include "SpellCard.h"
#include "TrapCard.h"
#include "containerTemplate.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// q6 const reference function
// normal monsters are kinda bad
bool isGud(const MonsterCard &crd) { return crd.getType() != "Normal"; }

// Q8, Q10 calls the (NOTE: ALSO EXAMPLE OF DYNAMIC BINDING)
// dynamically bound display function
// on all monsters
void displayAllMonsters(MonsterCard **mon, int size) {
  for (int i = 0; i < size; i++)
    mon[i]->display(); // this is also an example of dynamic-binding
}

// Q10 non-virtual example
void displayAtk(MonsterCard **mon, int size) {
  for (int i = 0; i < size; i++)
    cout << to_string(i) << (mon[i]->getAtk()) << endl;
}

int main() {
  // Q5
  cout << endl << "Q5" << endl;
  TrapCard jarOfGreed = TrapCard("Jar of Greed", "Draw one card");

  flipUpVal(jarOfGreed);
  cout << "Is Jar Of Greed face-up after pass by val call: "
       << ((jarOfGreed.isFaceUp()) ? "true" : "false") << endl; // doesn't

  flipUpRef(jarOfGreed);
  cout << "Is Jar Of Greed face-up after pass by ref call: "
       << ((jarOfGreed.isFaceUp()) ? "true" : "false") << endl;
  {
    // Q6
    cout << endl << "Q6" << endl;
    const NormalMonster vorseRaider =
        NormalMonster("Vorse Raider", 1900, 1200,
                      true, // imagine def vorse, pass lmao
                      "Edgy early 2000's fun");
    // works because NormalMonster::getFlavourText is const
    vorseRaider.getFlavourText();
    // doesnt work because vorseRaider is const qualified
    // but changePosition is (correctly) not const
    /*
     * vorseRaider.changePosition();
     */
    // Q6.2 passing same object to function by const ref
    cout << "is vorse raider gud? " << endl
         << "ans" << isGud(vorseRaider) << endl;
  }

  // Q7
  // step 1: create pointer
  // step 2: dynamically allocate SpellCard object to
  // pointer via "new" keyword
  {
    cout << endl << "Q7" << endl;
    SpellCard *pointerOfGreed =
        new SpellCard("Pot of Greed", 1, "Draw 2 cards");
    SpellCard *monsterRealloc = new SpellCard(
        "Monster Reborn", 1, "Special summon a monster from the grave");
    pointerOfGreed->activate();
    monsterRealloc->activate();

    monsterRealloc = pointerOfGreed;

    pointerOfGreed->activate();
    monsterRealloc->activate();

    delete pointerOfGreed;
    // delete monsterRealloc; // will lead to double free
  } // show that when it goes outta scope
    // without delete keyword nothing happens
    // i.e. memory leak
  {

    // Q8, have each of the cards be a diff monster type
    cout << endl << "Q8" << endl;
    NormalMonster battleOx =
        NormalMonster("Battle Ox", 1700, 1000, true, "moo");

    EffectMonster kuriboh =
        EffectMonster("Kuriboh", 100, 100, true,
                      "Discard this card, take no battle damage", false);

    PendulumMonster mr3Sad = PendulumMonster(
        "gameDead", 0, 0, false, "all atk pos monsters gain 100 atk", false, 1,
        "discard one card from your hand", 8);

    // Now I can call that display function
    MonsterCard *swarm[3] = {&battleOx, &kuriboh, &mr3Sad};
    int swarmSize = sizeof(swarm) / sizeof(swarm[0]);
    // swarm is an array of pointers to objects
    // i.e. it is a double pointer
    cout << "Q10: Virtual Method (display) example" << endl;
    displayAllMonsters(swarm, swarmSize);
    cout << "Q10: non-virtual Method (getAtk) example" << endl;
    displayAtk(swarm, swarmSize);
  }
  // Q9 2 ways to call the destructor defined in trapcard
  {
    cout << endl << "Q9" << endl;
    TrapCard trapHole = TrapCard("Trap Hole", "ya fell");
    // Q9 -- 1 explicit call
    trapHole.~TrapCard();
    // Q9 -- 2 gets called when traphole is destroyed (by going out of scope
    // in this case)
  }

  // Q13
  {
    cout << endl << "Q13" << endl;
    TrapCard trapHole = TrapCard("Trap Hole", "ya fell");
    cout << std::boolalpha << "Is traphole face-up? " << trapHole.isFaceUp()
         << endl;
    // activate passes the object itself to a friend function via the "this"
    // keyword
    trapHole.activate();

    cout << std::boolalpha
         << "Is traphole face-up after activate() passes"
            "itself to the non-member friend function? "
         << trapHole.isFaceUp() << endl;
  }

  // Q14
  {
    cout << endl << "Q14" << endl;
    SpellCard Advantage = SpellCard("Pot of Greed", 1, "Draw 2 cards");
    // By Value, copy constructor gets called:
    SpellCard byVal = Advantage;
    // as copy constructor created this,
    // it's name will be prepended with "Copy of: "
    byVal.display();
    // By Reference, copy shouldnt be called
    SpellCard &byRef = Advantage;
    // By ref is pointing at actual object address
    // rather than a copy and thus name diplayed
    // will not be prepended with "Copy of: "
    byRef.display();
  }

  // Q15
  {
    TrapCard *accSpell = new TrapCard("Jar of Greed", "Draw one card");
    // Dynamic Cast (downcast)
    SpellCard *wow = dynamic_cast<SpellCard *>(accSpell);

    PendulumMonster *lmao = new PendulumMonster(
        "gameDead", 0, 0, false, "all atk pos monsters gain 100 atk", false, 1,
        "discard one card from your hand", 8);
    // reinterpret cast to one of the parent classes
    NormalMonster *reinterpGoBrrrr = reinterpret_cast<NormalMonster *>(lmao);
    // need to manually free
    delete lmao;
  }

  // Q16
  {
    cout << endl << "Q16" << endl;
    // Create NormalMonster, and show val of numMonster, which wont be zero as
    // other monsters have already been constructed by this point (strictly
    // speaking the destructor should)
    NormalMonster battleOx =
        NormalMonster("Battle Ox", 1700, 1000, true, "moo");
    cout << "Num Monsters on field: " << battleOx.getNumMonsters() << endl
         << endl;

    // Create EffectMonster and show val of numMonster is incremented by one
    // and that both of the objects are accessing the same variable
    EffectMonster kuriboh =
        EffectMonster("Kuriboh", 1700, 1000, true,
                      "Discard this card, take no battle damage", false);
    cout << "Num Monsters on field: " << battleOx.getNumMonsters() << endl;
    cout << "Num Monsters on field: " << kuriboh.getNumMonsters() << endl;
  }

  // Q17
  {
    struct exampleStruct {
      int data1;
      string data2;
      // can have methods in both structs and classes
      void method() { cout << "Struct Method called" << endl; };
    };

    class exampleClass {
      int data1;
      string data2;

    public:
      void method() { cout << "Class Method called" << endl; };
    };

    exampleStruct eg = exampleStruct();
    eg.data1; // perfectly legal as members of a struct are public by default
    eg.data2;

    exampleClass egC = exampleClass();
    // egC.data1 // would be erroneous as members in a class are private by
    // default egC.data2
  }
  // Q18
  {
    cout << endl << "Q18" << endl;
    // definition of some normal monsters to put into template container
    NormalMonster battleOx =
        NormalMonster("Battle Ox", 1700, 1000, true, "moo");

    NormalMonster vorseRaider =
        NormalMonster("Vorse Raider", 1900, 1200,
                      true, // imagine def vorse, pass lmao
                      "Edgy early 2000's fun");
    NormalMonster overDrive =
        NormalMonster("over drive", 1600, 1000, true,
                      "An all-terrain armored vehicle armed with a heavy-duty "
                      "machine gun");
    // define template class variable
    CardDeck<NormalMonster, 3> vanillaDeck;
    vanillaDeck[0] = battleOx;
    vanillaDeck[1] = vorseRaider;
    vanillaDeck[2] = overDrive;
  }
  {
    // Q19
    // definiton of some NormalMonster objects for insertion into vector
    cout << endl << "Q19" << endl;
    NormalMonster battleOx =
        NormalMonster("Battle Ox", 1700, 1000, true, "moo");

    NormalMonster vorseRaider =
        NormalMonster("Vorse Raider", 1900, 1200,
                      true, // imagine def vorse, pass lmao
                      "Edgy early 2000's fun");
    NormalMonster overDrive =
        NormalMonster("over drive", 1600, 1000, true,
                      "An all-terrain armored vehicle armed with a heavy-duty "
                      "machine gun");
    // Declaration of vector
    vector<NormalMonster> monList;

    // Pushing NormalMonster Objects into vector
    monList.push_back(battleOx);    // will be first elem
    monList.push_back(vorseRaider); // will be 2nd elem
    monList.push_back(overDrive);   // will be last elem

    // Q 20
    cout << endl << "Q20" << endl;
    cout << endl
         << "---------------------------------------------------" << endl
         << "                   Pre-sort" << endl
         << "---------------------------------------------------" << endl;

    for_each(monList.begin(), monList.end(),
             [](const NormalMonster &mon) { mon.display(); });

    // imo lambdas are a better solution than having to
    // define operators in class specifically for the sort function
    sort(monList.begin(), monList.end(),
         [](const NormalMonster &a, const NormalMonster &b) -> bool {
           return a.getAtk() < b.getAtk(); // returns true when "prev" less than
                                           // "current", meaning ascending sort
         });

    cout << endl
         << "---------------------------------------------------" << endl
         << "                   Post-sort" << endl
         << "---------------------------------------------------" << endl;

    for_each(monList.begin(), monList.end(),
             [](const NormalMonster &mon) { mon.display(); });
  }
}
