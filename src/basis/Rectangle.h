#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "PaintCost.h"
#include "Shapes.h"

class Rectangle : public Shapes, public PaintCost {
public:
  Rectangle();
  virtual ~Rectangle();
  Rectangle(const Rectangle &other);
  Rectangle &operator=(const Rectangle &other);
  int getArea();
  void go();
  Rectangle(const int, const int);
  int area();
  // pure virtual function
  // virtual int area() = 0;

protected:
private:
};

#endif // RECTANGLE_H
