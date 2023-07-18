#include "Operators.h"
#include <iostream>
using namespace std;

Operators::Operators() {
  // ctor
}

Operators::~Operators() {
  // dtor
}

Operators::Operators(const Operators &other) {
  // copy ctor
}

Operators &Operators::operator=(const Operators &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Operators::go() {

  cout << "+++++++++++++++++++++++++++++CPP运算符+++++++++++++++++++++++++++++"
       << endl;
  // Arithmetic Operators算术运算
  int A = 10;
  int B = 20;
  cout << "A + B = " << (A + B) << endl;
  // Relational Operators关系运算
  cout << "A == B = " << (A == B) << endl;
  // Logical Operators逻辑运算
  int C = 1;
  int D = 0;
  cout << "C && D = " << (C && D) << endl;
  cout << "C || D = " << (C || D) << endl;
  cout << "!D = " << !D << endl;
  // Bitwise Operators位运算
  int E = 0b0111100;
  int F = 0b0001101;
  cout << "E & F = " << (E & F) << endl;
  cout << "E | F = " << (E | F) << endl;
  cout << "E ^ F = " << (E ^ F) << endl;
  cout << "~E = " << (~E) << endl;
  // Assignment Operators任务运算
  // Misc Operators杂项运算
  //
}
