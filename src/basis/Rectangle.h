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

protected:
private:
};

#endif // RECTANGLE_H
