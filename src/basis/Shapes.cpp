#include "Shapes.h"

Shapes::Shapes() {
  // ctor
}

Shapes::~Shapes() {
  // dtor
}

Shapes::Shapes(const Shapes &other) {
  // copy ctor
}

Shapes &Shapes::operator=(const Shapes &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Shapes::setWidth(int w) { width = w; }

void Shapes::setHeight(int h) { height = h; }
