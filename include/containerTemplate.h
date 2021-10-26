#ifndef CONTAINERTEMPLATE_H
#define CONTAINERTEMPLATE_H

#include <iostream>
using namespace std;

template <class T, int length> class CardDeck {
private:
  T cards[length];
  int size = length;

public:
  T &operator[](int i) { return cards[i]; }
};

#endif
