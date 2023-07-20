#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

class Preprocessor {
public:
  Preprocessor();
  virtual ~Preprocessor();
  Preprocessor(const Preprocessor &other);
  Preprocessor &operator=(const Preprocessor &other);
  void go();

protected:
private:
};

#endif // PREPROCESSOR_H
