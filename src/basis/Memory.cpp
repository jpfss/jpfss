#include "Memory.h"
#include <iostream>
using namespace std;

Memory::Memory() {
  // ctor
  cout << "Constructor called!" << endl;
}

Memory::~Memory() {
  // dtor
  cout << "Destructor called!" << endl;
}

Memory::Memory(const Memory &other) {
  // copy ctor
}

Memory &Memory::operator=(const Memory &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void Memory::go() {

  cout << "++++++++++++++++++++++++++CPP's Dynamic "
          "Memory++++++++++++++++++++++++++"
       << endl;

  // new and delete Operators
  double *pvalue = NULL; // Pointer initialized with null
  pvalue = new double;   // Request memory for the variable
  if (!(pvalue = new double)) {
    cout << "Error: out of memory." << endl;
    exit(1);
  }

  *pvalue = 29494.99; // Store value at allocated address
  cout << "Value of pvalue : " << *pvalue << endl;

  delete pvalue; // free up the memory

  // Dynamic Memory Allocation for Arrays
  char *pvalue1 = NULL;   // Pointer initialized with null
  pvalue1 = new char[20]; // Request memory for the variable
  delete[] pvalue1;       // Delete array pointed to by pvalue
  // double **pvalue2 = NULL;    // Pointer initialized with null
  // pvalue2 = new double[3][4]; // Allocate memory for a 3x4 array
  // delete[] pvalue2; // Delete array pointed to by pvalue
  // Dynamic Memory Allocation for Objects
}
