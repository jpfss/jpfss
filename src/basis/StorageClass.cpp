#include "StorageClass.h"
#include <iostream>
#include <random>
using namespace std;

StorageClass::StorageClass() {
  // ctor
}

StorageClass::~StorageClass() {
  // dtor
}

StorageClass::StorageClass(const StorageClass &other) {
  // copy ctor
}

StorageClass &StorageClass::operator=(const StorageClass &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

static int count = 10; /* Global variable */

void StorageClass::func() {

  static int i = 5; // local static variable
  i++;
  cout << "i is " << i;
  cout << " and count is " << count << endl;
}

void StorageClass::go() {

  // The auto Storage Class
  // auto默认表示局部变量
  // int mount = 10;
  // 新版CPP不允许了
  // auto int mount = 10;
  // The register Storage Class
  // register用于定义应存储在寄存器而不是 RAM
  // 中的局部变量,17中禁止是所有register了 register int miles = 10; The static
  // Storage Class
  // 静态存储类指示编译器在程序的生命周期内保持局部变量的存在，而不是在每次进入和离开作用域时创建和销毁它。因此，将局部变量设为静态可以让它们在函数调用之间保持其值。
  while (count--) {
    func();
  }
}
