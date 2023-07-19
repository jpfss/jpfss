#ifndef SHAPES_H
#define SHAPES_H

class Shapes {
public:
  Shapes();
  virtual ~Shapes();
  Shapes(const Shapes &other);
  Shapes &operator=(const Shapes &other);
  void setWidth(int w);
  void setHeight(int h);

protected:
  int width;
  int height;

private:
};

#endif // SHAPES_H
