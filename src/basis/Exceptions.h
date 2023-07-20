#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <iostream>
using namespace std;

class Exceptions : public exception {
public:
  Exceptions();
  virtual ~Exceptions();
  Exceptions(const Exceptions &other);
  Exceptions &operator=(const Exceptions &other);
  // Throwing Exceptions
  double division(int a, int b);
  // Catching Exceptions
  struct MyException : public exception {
    const char *what() const throw() { return "C++ Exception"; }
  };
  void go();

protected:
private:
};

#endif // EXCEPTIONS_H
