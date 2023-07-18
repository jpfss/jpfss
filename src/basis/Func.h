#ifndef FUNC_H
#define FUNC_H

class Func {
public:
  Func();
  virtual ~Func();
  Func(const Func &other);
  Func &operator=(const Func &other);
  int max(int num1, int num2);
  void go();

protected:
private:
};

#endif // FUNC_H
