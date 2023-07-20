#include "Templates.h"

Templates::Templates()
{
    //ctor
}

Templates::~Templates()
{
    //dtor
}

Templates::Templates(const Templates& other)
{
    //copy ctor
}

Templates& Templates::operator=(const Templates& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

void Templates::go(){

      cout << "++++++++++++++++++++++++++CPP's Templates++++++++++++++++++++++++++"
       << endl;


}
