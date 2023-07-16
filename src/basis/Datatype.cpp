#include <iostream>
#include "Datatype.h"
using namespace std;

Datatype::Datatype()
{
    //ctor
}

Datatype::~Datatype()
{
    //dtor
}

void Datatype::go() {

  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}

