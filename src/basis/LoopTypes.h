#ifndef LOOPTYPES_H
#define LOOPTYPES_H

class LoopTypes {
public:
  LoopTypes();
  virtual ~LoopTypes();
  LoopTypes(const LoopTypes &other);
  LoopTypes &operator=(const LoopTypes &other);
  void go();

protected:
private:
};

#endif // LOOPTYPES_H
