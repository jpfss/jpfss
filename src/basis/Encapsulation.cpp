#include "Encapsulation.h"
#include <iostream>
using namespace std;

Encapsulation::Encapsulation() {
  // ctor
}

Encapsulation::~Encapsulation() {
  // dtor
}

Encapsulation::Encapsulation(const Encapsulation &other) {
  // copy ctor
}

Encapsulation &Encapsulation::operator=(const Encapsulation &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Encapsulation::go() {

  cout << "++++++++++++++++++++++++++CPP's "
          "Encapsulation(数据封装)++++++++++++++++++++++++++"
       << endl;
  Encapsulation encapsulation;

  encapsulation.addNum(10);
  encapsulation.addNum(20);
  encapsulation.addNum(30);

  cout << "Total " << encapsulation.getTotal() << endl;
}

Encapsulation::Encapsulation(int i) { total = i; }

// interface to outside world
void Encapsulation::addNum(int number) { total += number; }

// interface to outside world
int Encapsulation::getTotal() { return total; };
