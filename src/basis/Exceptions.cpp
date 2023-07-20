#include "Exceptions.h"
#include <iostream>
using namespace std;

Exceptions::Exceptions() {
  // ctor
}

Exceptions::~Exceptions() {
  // dtor
}

Exceptions::Exceptions(const Exceptions &other) {
  // copy ctor
}

Exceptions &Exceptions::operator=(const Exceptions &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Exceptions::go() {
  cout << "++++++++++++++++++++++++++CPP's Exceptions++++++++++++++++++++++++++"
       << endl;

  int x = 50;
  int y = 0;
  double z = 0;

  try {
    z = division(x, y);
    cout << z << endl;
  } catch (const char *msg) {
    cerr << msg << endl;
  }
  // Define New Exceptions
  try {
    throw MyException();
  } catch (MyException &e) {
    cout << "MyException caught" << endl;
    cout << e.what() << endl;
  } catch (exception &e) {
    // Other errors
  }
}

double Exceptions::division(int a, int b) {
  if (b == 0) {
    throw "Division by zero condition!";
  }
  return (a / b);
}
