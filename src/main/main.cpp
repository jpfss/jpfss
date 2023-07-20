#include "Abstraction.h"
#include "Arrays.h"
#include "Box.h"
#include "Clazz.h"
#include "Constants.h"
#include "Datatype.h"
#include "DateTime.h"
#include "Decisions.h"
#include "Encapsulation.h"
#include "Exceptions.h"
#include "Func.h"
#include "IO.h"
#include "LoopTypes.h"
#include "Memory.h"
#include "ModifierTypes.h"
#include "Namespaces.h"
#include "Numbers.h"
#include "Operators.h"
#include "Pointers.h"
#include "Rectangle.h"
#include "References.h"
#include "StorageClass.h"
#include "Streams.h"
#include "Strings.h"
#include "Structures.h"
#include "Triangle.h"
#include "add.h"
#include "mul.h"
#include "sub.h"
#include <iostream>
#include <iterator>
using namespace std;

int main() {

  int y = 5;
  int x = 10;
  int z = 15;

  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  cout << "mul(x,y)=" << mul(x, y) << endl;
  cout << "add(x,y)=" << add(x, y) << endl;
  cout << "sub(x,y)=" << sub(x, y) << endl;

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

  Clazz clazz;
  clazz.go();

  Rectangle rectangle;
  rectangle.go();

  Box box;
  box.go();

  Triangle triangle;
  triangle.go();

  Abstraction abstraction;
  abstraction.go();

  Encapsulation encapsulation;
  encapsulation.go();

  Exceptions exp;
  exp.go();

  Memory memory;
  memory.go();

  Namespaces namespaces;
  namespaces.go();
  return 0;
}
