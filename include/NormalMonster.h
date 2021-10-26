#ifndef NORMALMONSTER_H
#define NORMALMONSTER_H

#include "MonsterCard.h"
#include <iostream>

using namespace std;

class NormalMonster : public MonsterCard {
private:
  string flavourText;

public:
  NormalMonster();
  NormalMonster(string, int, int, bool, string);
  int getAtk() const;
  string virtual getFlavourText() const;
  string virtual getType() const;
  virtual void display() const;
  // Q 11
  virtual NormalMonster operator+(NormalMonster);
  virtual NormalMonster operator-(NormalMonster);
  virtual bool operator==(NormalMonster);
};
#endif
