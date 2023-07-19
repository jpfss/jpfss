#ifndef OVERLOADING_H
#define OVERLOADING_H

class Box {
public:
  Box();
  virtual ~Box();
  Box(const Box &other);
  Box &operator=(const Box &other);
  double getVolume(void);
  void setLength(double len);
  void setBreadth(double bre);
  void setHeight(double hei);
  Box operator+(const Box &b);
  void go();

protected:
private:
  double length;  // Length of a box
  double breadth; // Breadth of a box
  double height;  // Height of a box
};

#endif // OVERLOADING_H
