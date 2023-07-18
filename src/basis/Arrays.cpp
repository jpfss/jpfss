#include "Arrays.h"
#include <iomanip>
#include <iostream>
using namespace std;

Arrays::Arrays()
{
    // ctor
}

Arrays::~Arrays()
{
    // dtor
}

Arrays::Arrays(const Arrays &other)
{
    // copy ctor
}

Arrays &Arrays::operator=(const Arrays &rhs)
{
    if (this == &rhs)
        return *this; // handle self assignment
    // assignment operator
    return *this;
}

void Arrays::go()
{

    cout << "++++++++++++++++++++++++++CPP's Array++++++++++++++++++++++++++" << endl;

    // Declaring Arrays
    // double balance[10];
    // Initializing Arrays
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    // double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    balance[4] = 50.0;
    // Accessing Array Elements
    double salary = balance[9];

    int n[10]; // n is an array of 10 integers

    // initialize elements of array n to 0
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100; // set element at location i to i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;

    // output each array element's value
    for (int j = 0; j < 10; j++)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}
