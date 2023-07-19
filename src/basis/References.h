#ifndef REFERENCES_H
#define REFERENCES_H

class References {
public:
  References();
  virtual ~References();
  References(const References &other);
  References &operator=(const References &other);
  void go();

protected:
private:
};

#endif // REFERENCES_H
