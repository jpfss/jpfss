#include "Templates.h"
#include "Stacks.cpp"
#include "Stacks.h"
#include <iostream>
using namespace std;

Templates::Templates() {
  // ctor
}

Templates::~Templates() {
  // dtor
}

Templates::Templates(const Templates &other) {
  // copy ctor
}

Templates &Templates::operator=(const Templates &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Templates::go() {

  cout << "++++++++++++++++++++++++++CPP's Templates++++++++++++++++++++++++++"
       << endl;
  try {
    Stacks<int> intStack;       // stack of ints
    Stacks<string> stringStack; // stack of strings

    // manipulate int stack
    intStack.push(7);
    cout << intStack.top() << endl;

    // manipulate string stack
    stringStack.push("hello");
    cout << stringStack.top() << std::endl;
    stringStack.pop();
    stringStack.pop();
  } catch (exception const &ex) {
    cerr << "Exception: " << ex.what() << endl;
  }
}
