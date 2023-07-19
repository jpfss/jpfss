#include "Box.h"
#include <iostream>
using namespace std;

Box::Box() {
  // ctor
}

Box::~Box() {
  // dtor
}

Box::Box(const Box &other) {
  // copy ctor
}

Box &Box::operator=(const Box &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

double Box::getVolume(void) { return length * breadth * height; }
void Box::setLength(double len) { length = len; }

void Box::setBreadth(double bre) { breadth = bre; }
void Box::setHeight(double hei) { height = hei; }

// Overload + operator to add two Box objects.
Box Box::operator+(const Box &b) {
  Box overloading;
  overloading.length = this->length + b.length;
  overloading.breadth = this->breadth + b.breadth;
  overloading.height = this->height + b.height;
  return overloading;
}

void Box::go() {

  Box Box1;            // Declare Box1 of type Box
  Box Box2;            // Declare Box2 of type Box
  Box Box3;            // Declare Box3 of type Box
  double volume = 0.0; // Store the volume of a box here

  // box 1 specification
  Box1.setLength(6.0);
  Box1.setBreadth(7.0);
  Box1.setHeight(5.0);

  // box 2 specification
  Box2.setLength(12.0);
  Box2.setBreadth(13.0);
  Box2.setHeight(10.0);

  // volume of box 1
  volume = Box1.getVolume();
  cout << "Volume of Box1 : " << volume << endl;

  // volume of box 2
  volume = Box2.getVolume();
  cout << "Volume of Box2 : " << volume << endl;

  // Add two object as follows:
  Box3 = Box1 + Box2;

  // volume of box 3
  volume = Box3.getVolume();
  cout << "Volume of Box3 : " << volume << endl;
}
