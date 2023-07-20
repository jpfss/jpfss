#include "Preprocessor.h"
#include <iostream>
using namespace std;

Preprocessor::Preprocessor() {
  // ctor
}

Preprocessor::~Preprocessor() {
  // dtor
}

Preprocessor::Preprocessor(const Preprocessor &other) {
  // copy ctor
}

Preprocessor &Preprocessor::operator=(const Preprocessor &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}
// The #define Preprocessor
#define PI 3.14159
// Function-Like Macros
#define MIN(a, b) (((a) < (b)) ? a : b)
// Conditional Compilation
#define DEBUG
// The # and ## Operators
#define MKSTR(x) #x

void Preprocessor::go() {

  cout << "++++++++++++++++++++++++++CPP's "
          "Preprocessor++++++++++++++++++++++++++"
       << endl;
  cout << "Value of PI :" << PI << endl;
  int i, j;

  i = 100;
  j = 30;

  cout << "The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
  cerr << "Trace: Inside main function" << endl;
#endif

#if 0
   /* This is commented part */
   cout << MKSTR(HELLO C++) << endl;
#endif

  cout << "The minimum is " << MIN(i, j) << endl;
// Conditional Compilation
#ifdef DEBUG
  cerr << "Trace: Coming out of main function" << endl;
#endif
  // The # and ## Operators
  cout << MKSTR(HELLO C++) << endl;
  int xy = 100;
}
