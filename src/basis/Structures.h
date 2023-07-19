#ifndef STRUCTURES_H
#define STRUCTURES_H

class Structures {
public:
  Structures();
  virtual ~Structures();
  Structures(const Structures &other);
  Structures &operator=(const Structures &other);
  void go();
  struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
  } book;
  void printBook(struct Structures::Books book);

protected:
private:
};

#endif // STRUCTURES_H
