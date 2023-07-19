#include "Clazz.h"
#include <iostream>
using namespace std;

Clazz::Clazz() {
  // ctor
}

Clazz::~Clazz() {
  // dtor
}

Clazz::Clazz(const Clazz &other) {
  // copy ctor
}

Clazz &Clazz::operator=(const Clazz &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Clazz::go() {

  cout << "++++++++++++++++++++++++++CPP's Classes and "
          "Objects++++++++++++++++++++++++++"
       << endl;
  Clazz::Box Box1;     // Declare Box1 of type Box
  Clazz::Box Box2;     // Declare Box2 of type Box
  double volume = 0.0; // Store the volume of a box here

  // box 1 specification
  Box1.height = 5.0;
  Box1.length = 6.0;
  Box1.breadth = 7.0;

  // box 2 specification
  Box2.height = 10.0;
  Box2.length = 12.0;
  Box2.breadth = 13.0;

  // volume of box 1
  volume = Box1.height * Box1.length * Box1.breadth;
  cout << "Volume of Box1 : " << volume << endl;

  // volume of box 2
  volume = Box2.height * Box2.length * Box2.breadth;
  cout << "Volume of Box2 : " << volume << endl;
}
