#include "PaintCost.h"
#include<iostream>
using namespace std;

PaintCost::PaintCost()
{
    //ctor
}

PaintCost::~PaintCost()
{
    //dtor
}

PaintCost::PaintCost(const PaintCost& other)
{
    //copy ctor
}

PaintCost& PaintCost::operator=(const PaintCost& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int PaintCost::getCost(int area)
{
    return area * 70;
}
