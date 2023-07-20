#include "Abstraction.h"
#include <iostream>
using namespace std;

Abstraction::Abstraction() {
  // ctor
}

Abstraction::~Abstraction() {
  // dtor
}

Abstraction::Abstraction(const Abstraction &other) {
  // copy ctor
}

Abstraction &Abstraction::operator=(const Abstraction &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Abstraction::go() {

  cout << "++++++++++++++++++++++++++CPP's "
          "Abstraction(抽象数据)++++++++++++++++++++++++++"
       << endl;
  // Data Abstraction Example
  Abstraction a;

  a.addNum(10);
  a.addNum(20);
  a.addNum(30);

  cout << "Total " << a.getTotal() << endl;
}

// constructor
Abstraction::Abstraction(int i) { total = i; }

// interface to outside world
void Abstraction::addNum(int number) { total += number; }

// interface to outside world
int Abstraction::getTotal() { return total; };
