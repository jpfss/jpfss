#include "IO.h"
#include <iostream>
using namespace std;

IO::IO() {
  // ctor
}

IO::~IO() {
  // dtor
}

IO::IO(const IO &other) {
  // copy ctor
}

IO &IO::operator=(const IO &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void IO::go() {

  cout << "++++++++++++++++++++++++++CPP's "
          "Input/Output++++++++++++++++++++++++++"
       << endl;
  // The Standard Output Stream (cout)
  char str[] = "Hello C++";

  cout << "Value of str is : " << str << endl;
  // The Standard Input Stream (cin)
  char name[50];

  cout << "Please enter your name: ";
  cin >> name;
  cout << "Your name is: " << name << endl;

  // The Standard Error Stream (cerr)
  char str1[] = "Unable to read....";

  cerr << "Error message : " << str1 << endl;
  // The Standard Log Stream (clog)
  char str2[] = "Unable to read....";

  clog << "Error message : " << str2 << endl;
}
