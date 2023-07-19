#include "Structures.h"
#include <cstring>
#include <iostream>
using namespace std;

Structures::Structures() {
  // ctor
}

Structures::~Structures() {
  // dtor
}

Structures::Structures(const Structures &other) {
  // copy ctor
}

Structures &Structures::operator=(const Structures &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void printBook(struct Structures::Books book) {
  cout << "Book title : " << book.title << endl;
  cout << "Book author : " << book.author << endl;
  cout << "Book subject : " << book.subject << endl;
  cout << "Book id : " << book.book_id << endl;
}

void Structures::go() {

  cout << "++++++++++++++++++++++++++CPP's Struct++++++++++++++++++++++++++"
       << endl;
  // Accessing Structure Members
  struct Structures::Books Book1; // Declare Book1 of type Book
  struct Structures::Books Book2; // Declare Book2 of type Book

  // book 1 specification
  strcpy(Book1.title, "Learn C++ Programming");
  strcpy(Book1.author, "Chand Miyan");
  strcpy(Book1.subject, "C++ Programming");
  Book1.book_id = 6495407;

  // book 2 specification
  strcpy(Book2.title, "Telecom Billing");
  strcpy(Book2.author, "Yakit Singha");
  strcpy(Book2.subject, "Telecom");
  Book2.book_id = 6495700;

  // Print Book1 info
  cout << "Book 1 title : " << Book1.title << endl;
  cout << "Book 1 author : " << Book1.author << endl;
  cout << "Book 1 subject : " << Book1.subject << endl;
  cout << "Book 1 id : " << Book1.book_id << endl;

  // Print Book2 info
  cout << "Book 2 title : " << Book2.title << endl;
  cout << "Book 2 author : " << Book2.author << endl;
  cout << "Book 2 subject : " << Book2.subject << endl;
  cout << "Book 2 id : " << Book2.book_id << endl;

  // Structures as Function Arguments
  // Print Book1 info
  // printBook(Book1);

  // Print Book2 info
  // printBook(Book2);
}
