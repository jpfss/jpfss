#include "Datatype.h"
#include <iostream>
#include <limits>
using namespace std;

Datatype::Datatype()
{
    // ctor
}

Datatype::~Datatype()
{
    // dtor
}

void Datatype::go()
{

    cout << "+++++++++++++++++++CPP数据类型+++++++++++++++++++" << endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    //取值范围
    cout << "Int Min " << std::numeric_limits<int>::min() << endl;
    cout << "Int Max " << std::numeric_limits<int>::max() << endl;
    cout << "Unsigned Int  Min " << std::numeric_limits<unsigned int>::min() << endl;
    cout << "Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << endl;
    cout << "Long Int Min " << std::numeric_limits<long int>::min() << endl;
    cout << "Long Int Max " << std::numeric_limits<long int>::max() << endl;

    cout << "Unsigned Long Int Min " << std::numeric_limits<unsigned  long int>::min() <<endl;
    cout << "Unsigned Long Int Max " << std::numeric_limits<unsigned  long int>::max() << endl;

    //自定义类型
    typedef int feet;
    feet distance;
    //count << "Myself def feet :" << distance <<endl;

    //枚举Enumerated
    enum color { red, green, blue } c;
    c = blue;
    cout << " enum color c:" << c << endl;





}
