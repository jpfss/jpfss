#include "Arrays.h"
#include "Constants.h"
#include "Datatype.h"
#include "DateTime.h"
#include "Decisions.h"
#include "Func.h"
#include "IO.h"
#include "LoopTypes.h"
#include "ModifierTypes.h"
#include "Numbers.h"
#include "Operators.h"
#include "Pointers.h"
#include "References.h"
#include "StorageClass.h"
#include "Streams.h"
#include "Strings.h"
#include "Structures.h"
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

  Decisions decisions;
  decisions.go();

  Func func;
  func.go();

  Numbers numbers;
  numbers.go();

  Arrays arrays;
  arrays.go();

  Strings strings;
  strings.go();

  Pointers pointers;
  pointers.go();

  References references;
  references.go();

  DateTime datetime;
  datetime.go();

  IO io;
  io.go();

  Structures structures;
  structures.go();

  return 0;
}
