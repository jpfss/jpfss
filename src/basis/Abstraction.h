#ifndef ABSTRACTION_H
#define ABSTRACTION_H

class Abstraction {
public:
  Abstraction();
  virtual ~Abstraction();
  Abstraction(const Abstraction &other);
  Abstraction &operator=(const Abstraction &other);
  void go();
  // constructor
  Abstraction(const int i);
  // interface to outside world
  void addNum(int number);
  // interface to outside world
  int getTotal();

protected:
private:
  // hidden data from outside world
  int total;
};

#endif // ABSTRACTION_H
