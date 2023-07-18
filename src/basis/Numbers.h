#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers {
public:
  Numbers();
  virtual ~Numbers();
  Numbers(const Numbers &other);
  Numbers &operator=(const Numbers &other);
  void go();

protected:
private:
};

#endif // NUMBERS_H
