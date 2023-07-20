#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

class Encapsulation {
public:
  Encapsulation();
  virtual ~Encapsulation();
  Encapsulation(const Encapsulation &other);
  Encapsulation &operator=(const Encapsulation &other);
  void go();
  Encapsulation(const int);
  // interface to outside world
  void addNum(int number);
  // interface to outside world
  int getTotal();

protected:
private:
  // hidden data from outside world
  int total;
};

#endif // ENCAPSULATION_H
