#ifndef DECISIONS_H
#define DECISIONS_H

class Decisions {
public:
  Decisions();
  virtual ~Decisions();
  Decisions(const Decisions &other);
  Decisions &operator=(const Decisions &other);
  void go();

protected:
private:
};

#endif // DECISIONS_H
