#include "Strings.h"
#include <cstring>
#include <iostream>
using namespace std;

Strings::Strings() {
  // ctor
}

Strings::~Strings() {
  // dtor
}

Strings::Strings(const Strings &other) {
  // copy ctor
}

Strings &Strings::operator=(const Strings &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Strings::go() {

  cout << "++++++++++++++++++++++++++CPP's Strings++++++++++++++++++++++++++"
       << endl;
  // The C-Style Character Strings
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  cout << "Greeting message: ";
  cout << greeting << endl;

  char str1[10] = "Hello";
  char str2[10] = "World";
  char str3[10];
  int len;

  // copy str1 into str3
  strcpy(str3, str1);
  cout << "strcpy( str3, str1) : " << str3 << endl;

  // concatenates str1 and str2
  strcat(str1, str2);
  cout << "strcat( str1, str2): " << str1 << endl;

  // total lenghth of str1 after concatenation
  len = strlen(str1);
  cout << "strlen(str1) : " << len << endl;

  // The String Class in C++
  string str4 = "Hello";
  string str5 = "World";
  string str6;

  // copy str1 into str3
  str6 = str4;
  cout << "str4 : " << str4 << endl;

  // concatenates str1 and str2
  str6 = str4 + str5;
  cout << "str1 + str2 : " << str3 << endl;

  // total length of str3 after concatenation
  len = str4.size();
  cout << "str4.size() :  " << len << endl;
}
