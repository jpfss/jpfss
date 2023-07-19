#ifndef CLAZZ_H
#define CLAZZ_H

class Clazz {
public:
  Clazz();
  virtual ~Clazz();
  Clazz(const Clazz &other);
  Clazz &operator=(const Clazz &other);
  class Box {
  public:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
  };
  void go();

protected:
private:
};

#endif // CLAZZ_H
