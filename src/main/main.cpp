#include "Constants.h"
#include "Datatype.h"
#include "LoopTypes.h"
#include "ModifierTypes.h"
#include "Operators.h"
#include "StorageClass.h"
#include "Streams.h"
#include "add.h"
#include "mul.h"
#include "sub.h"
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

  Constants constants;
  constants.go();

  ModifierTypes modifierTypes;
  modifierTypes.go();

  StorageClass storageClass;
  storageClass.go();

  Operators operators;
  operators.go();

  LoopTypes loopTypes;
  loopTypes.go();
  return 0;
}
