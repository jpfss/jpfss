#include "Pointers.h"
#include <iostream>
using namespace std;

Pointers::Pointers() {
  // ctor
}

Pointers::~Pointers() {
  // dtor
}

Pointers::Pointers(const Pointers &other) {
  // copy ctor
}

Pointers &Pointers::operator=(const Pointers &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Pointers::go() {

  cout << "++++++++++++++++++++++++++CPP's Pointers++++++++++++++++++++++++++"
       << endl;
  int var1;
  char var2[10];

  cout << "Address of var1 variable: ";
  cout << &var1 << endl;

  cout << "Address of var2 variable: ";
  cout << &var2 << endl;

  // Using Pointers in C++
  int var = 20; // actual variable declaration.
  int *ip;      // pointer variable

  ip = &var; // store address of var in pointer variable

  cout << "Value of var variable: ";
  cout << var << endl;

  // print the address stored in ip pointer variable
  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  // access the value at the address available in pointer
  cout << "Value of *ip variable: ";
  cout << *ip << endl;
}
