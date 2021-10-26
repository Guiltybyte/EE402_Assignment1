#ifndef MONSTERCARD_H
#define MONSTERCARD_H

#include <iostream>

using namespace std;

class MonsterCard {
  // child classes need access to this data,
  // thus protected is used rather than private
private:
  static int numMonsters;

protected:
  string name;
  int atk;
  int def;
  bool inAtkMode;

public:
  MonsterCard(string, int, int, bool);
  virtual ~MonsterCard();
  static int getNumMonsters();
  int getAtk() const;
  virtual string getType() const = 0;
  virtual void changePosition();
  virtual void display() const;
};
#endif
