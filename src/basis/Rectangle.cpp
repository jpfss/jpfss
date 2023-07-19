#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
  // ctor
}

Rectangle::~Rectangle() {
  // dtor
}

Rectangle::Rectangle(const Rectangle &other) {
  // copy ctor
}

Rectangle &Rectangle::operator=(const Rectangle &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

int Rectangle::getArea() { return (width * height); }

void Rectangle::go() {

  cout
      << "++++++++++++++++++++++++++CPP's Inheritance++++++++++++++++++++++++++"
      << endl;

  Rectangle Rect;
  int area;

  Rect.setWidth(5);
  Rect.setHeight(7);

  area = Rect.getArea();
  // Print the area of the object.
  cout << "Total area: " << Rect.getArea() << endl;
  // Print the total cost of painting
  cout << "Total paint cost: $" << Rect.getCost(area) << endl;
}