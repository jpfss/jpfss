#include "add.h"
#include "sub.h"
#include "mul.h"
#include <iostream>
using namespace std;

int main(){
    
    int x = 8;
    int y = 5;
    int z = 7;
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
    cout << "add(x, y)=" << add(x, y) << endl;
    cout << "sub(x, y)=" << sub(x, y) << endl;
    cout << "mul(x, y)=" << mul(x, y) << endl;
    return 0;
}
