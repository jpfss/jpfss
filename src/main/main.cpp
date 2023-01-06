#include "add.h"
#include "sub.h"
#include "mul.h"
#include <iostream>

int main(){
    
    int x = 8;
    int y = 5;
    int z = 7;
    std::cout << "x=" << x << ", y=" << y << ", z=" << z << std::endl;
    std::cout << "add(x, y)=" << add(x, y) << std::endl;
    std::cout << "sub(x, y)=" << sub(x, y) << std::endl;
    std::cout << "mul(x, y)=" << mul(x, y) << std::endl;
    return 0;
}