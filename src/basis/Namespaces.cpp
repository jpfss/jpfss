#include "Namespaces.h"
#include <iostream>
using namespace std;

Namespaces::Namespaces() {
  // ctor
}

Namespaces::~Namespaces() {
  // dtor
}

Namespaces::Namespaces(const Namespaces &other) {
  // copy ctor
}

Namespaces &Namespaces::operator=(const Namespaces &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

// first name space
namespace first_space {
void func() { cout << "Inside first_space" << endl; }
} // namespace first_space

// second name space
namespace second_space {
void func() { cout << "Inside second_space" << endl; }
} // namespace second_space

using namespace first_space;
void Namespaces::go() {
  cout << "++++++++++++++++++++++++++CPP's Namespaces++++++++++++++++++++++++++"
       << endl;
  // Calls function from first name space.
  first_space::func();
  // Calls function from second name space.
  second_space::func();
  // The using directive
  // This calls function from first name space.
  func();
}
