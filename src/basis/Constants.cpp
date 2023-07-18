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

  // Floating-point Literals

  // Boolean Literals

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
