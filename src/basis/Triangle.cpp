#include "Triangle.h"
#include "Shapes.h"
#include <iostream>
using namespace std;

Triangle::Triangle() {
  // ctor
}

Triangle::~Triangle() {
  // dtor
}

Triangle::Triangle(const Triangle &other) {
  // copy ctor
}

Triangle &Triangle::operator=(const Triangle &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

Triangle::Triangle(int a, int b) : Shapes(a, b){};

void Triangle::go() {

  cout << "++++++++++++++++++++++++++CPP's "
          "Polymorphism++++++++++++++++++++++++++"
       << endl;
  Shapes *shape;
  Triangle tri(10, 5);

  // store the address of Triangle
  shape = &tri;

  // call triangle area.
  shape->area();

  Triangle triangle;
  triangle.setWidth(5);
  triangle.setHeight(7);
  // Print the area of the object.
  cout << "Total Triangle area: " << triangle.getArea() << endl;
}

int Triangle::area() {
  cout << "Triangle class area :" << (width * height) / 2 << endl;
  return (width * height / 2);
}
int Triangle::getArea() { return (width * height) / 2; }
