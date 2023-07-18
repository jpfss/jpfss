#include "Decisions.h"
#include <iostream>
using namespace std;

Decisions::Decisions() {
  // ctor
}

Decisions::~Decisions() {
  // dtor
}

Decisions::Decisions(const Decisions &other) {
  // copy ctor
}

Decisions &Decisions::operator=(const Decisions &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Decisions::go() {

  cout << "++++++++++++++++++++++++++CPP's Decisions++++++++++++++++++++++++++"
       << endl;
}
