#include "add.h"
#include "mul.h"
#include "sub.h"
#include "Datatype.h"
#include "Streams.h"
#include <iostream>
using namespace std;

int main() {

  int y = 5;
  int x = 10;
  int z = 15;

  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  cout << "add(x,y)=" << add(x, y) << endl;
  cout << "sub(x,y)=" << sub(x, y) << endl;
  cout << "mul(x,y)=" << mul(x, y) << endl;

  Datatype datatype;
  datatype.go();

  Streams streams;
  streams.go();

  return 0;
}
