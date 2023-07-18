#ifndef OPERATORS_H
#define OPERATORS_H

class Operators {
public:
  Operators();
  virtual ~Operators();
  Operators(const Operators &other);
  Operators &operator=(const Operators &other);
  void go();

protected:
private:
};

#endif // OPERATORS_H
