#include "ModifierTypes.h"
#include <iostream>
using namespace std;

ModifierTypes::ModifierTypes() {
  // ctor
}

ModifierTypes::~ModifierTypes() {
  // dtor
}

ModifierTypes::ModifierTypes(const ModifierTypes &other) {
  // copy ctor
}

ModifierTypes &ModifierTypes::operator=(const ModifierTypes &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void ModifierTypes::go() {

  cout << "++++++++++++++++++++++++++++CPP变量修改符+++++++++++++++++++++++++++"
       << endl;

  // signed 有符号
  // unsigned 无符号
  // long 长整型
  // short 短整型

  short int i;          // a signed short integer
  short unsigned int j; // an unsigned short integer

  j = 50000;

  i = j;
  cout << i << " " << j;
}
