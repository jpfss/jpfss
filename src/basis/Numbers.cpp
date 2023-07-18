#include "Numbers.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Numbers::Numbers() {
  // ctor
}

Numbers::~Numbers() {
  // dtor
}

Numbers::Numbers(const Numbers &other) {
  // copy ctor
}

Numbers &Numbers::operator=(const Numbers &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}
void Numbers::go() {

  cout << "++++++++++++++++++++++++++CPP's Number++++++++++++++++++++++++++"
       << endl;
  // Defining Numbers in C++
  // number definition:
  short s;
  int i;
  long l;
  float f;
  double d;

  // number assignments;
  s = 10;
  i = 1000;
  l = 1000000;
  f = 230.47;
  d = 30949.374;

  // number printing;
  cout << "short  s :" << s << endl;
  cout << "int    i :" << i << endl;
  cout << "long   l :" << l << endl;
  cout << "float  f :" << f << endl;
  cout << "double d :" << d << endl;

  // Math Operations in C++

  // mathematical operations;
  cout << "sin(d) :" << sin(d) << endl;
  cout << "abs(i)  :" << abs(i) << endl;
  cout << "floor(d) :" << floor(d) << endl;
  cout << "sqrt(f) :" << sqrt(f) << endl;
  cout << "pow( d, 2) :" << pow(d, 2) << endl;

  // Random Numbers in C++
  int k, m;

  // set the seed
  srand((unsigned)time(NULL));

  /* generate 10  random numbers. */
  for (k = 0; k < 10; k++) {
    // generate actual random number
    m = rand();
    cout << " Random Number : " << m << endl;
  }
}
