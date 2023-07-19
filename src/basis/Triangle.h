#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shapes.h"
class Triangle : public Shapes {
public:
  Triangle();
  virtual ~Triangle();
  Triangle(const Triangle &other);
  Triangle &operator=(const Triangle &other);
  Triangle(const int, const int);
  void go();
  int area();

protected:
private:
};

#endif // TRIANGLE_H
