#include "LoopTypes.h"
#include <iostream>
using namespace std;

LoopTypes::LoopTypes() {
  // ctor
}

LoopTypes::~LoopTypes() {
  // dtor
}

LoopTypes::LoopTypes(const LoopTypes &other) {
  // copy ctor
}

LoopTypes &LoopTypes::operator=(const LoopTypes &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void LoopTypes::go() {

  cout << "++++++++++++++++++++++++++CPP's Loop++++++++++++++++++++++++++"
       << endl;
  for (;;) {
    printf("This loop will run forever.\n");
  }
}
