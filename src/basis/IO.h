#ifndef IO_H
#define IO_H

class IO {
public:
  IO();
  virtual ~IO();
  IO(const IO &other);
  IO &operator=(const IO &other);
  void go();

protected:
private:
};

#endif // IO_H
