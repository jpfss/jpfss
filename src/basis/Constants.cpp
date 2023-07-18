#include "Constants.h"
#include <iostream>
using namespace std;

Constants::Constants() {
  // ctor
}

Constants::~Constants() {
  // dtor
}

Constants::Constants(const Constants &other) {
  // copy ctor
}

Constants &Constants::operator=(const Constants &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Constants::go() {

  // Integer Literals
  // 212        // Legal
  // 215u   // Legal
  // 0xFeeL // Legal
  // 078    // Illegal: 8 is not an octal digit
  // 032UU  // Illegal: cannot repeat a suffix
  // 85         // decimal
  // 0213       // octal
  // 0x4b       // hexadecimal
  // 30         // int
  // 30u        // unsigned int
  // 30l        // long
  // 30ul       // unsigned long
  // Floating-point Literals

  // 3.14159       // Legal
  // 314159E-5L    // Legal
  // 510E          // Illegal: incomplete exponent
  // 210f          // Illegal: no decimal or exponent
  //.e55          // Illegal: missing integer or fraction

  //  Boolean Literals

  // Character Literals

  // String Literals

  // Defining Constants

  // The #define Preprocessor
  // 以下是使用 #define 预处理器定义常量的形式

  // area = LENGTH * WIDTH;
  // cout << area;
  // cout << NEWLINE;

  // The const Keyword
  const int LENGTH = 10;
  const int WIDTH = 5;
  const char NEWLINE = '\n';
  int area;

  area = LENGTH * WIDTH;
  cout << area;
  cout << NEWLINE;
}
