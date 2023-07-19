#include "References.h"
#include <iostream>
using namespace std;

References::References() {
  // ctor
}

References::~References() {
  // dtor
}

References::References(const References &other) {
  // copy ctor
}

References &References::operator=(const References &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void References::go() {

  cout << "++++++++++++++++++++++++++CPP's Ref++++++++++++++++++++++++++"
       << endl;

  // declare simple variables
  int i;
  double d;

  // declare reference variables
  int &r = i;
  double &s = d;

  i = 5;
  cout << "Value of i : " << i << endl;
  cout << "Value of i reference : " << r << endl;

  d = 11.7;
  cout << "Value of d : " << d << endl;
  cout << "Value of d reference : " << s << endl;
}
