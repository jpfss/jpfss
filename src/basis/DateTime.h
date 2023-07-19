#ifndef DATETIME_H
#define DATETIME_H

class DateTime {
public:
  DateTime();
  virtual ~DateTime();
  DateTime(const DateTime &other);
  DateTime &operator=(const DateTime &other);
  void go();

protected:
private:
};

#endif // DATETIME_H
