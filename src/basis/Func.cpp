#include "Func.h"
#include <iostream>
using namespace std;

Func::Func() {
  // ctor
}

Func::~Func() {
  // dtor
}

Func::Func(const Func &other) {
  // copy ctor
}

Func &Func::operator=(const Func &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

int Func::max(int num1, int num2) {

  // local variable declaration
  int result;

  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}
void Func::go() {

  cout << "++++++++++++++++++++++++++CPP's Functions++++++++++++++++++++++++++"
       << endl;

  // local variable declaration:
  int a = 100;
  int b = 200;
  int ret;

  // calling a function to get max value.
  ret = max(a, b);
  cout << "Max value is : " << ret << endl;
}
