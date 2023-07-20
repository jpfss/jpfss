#include "Stacks.h"
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

template <class T> void Stacks<T>::push(T const &elem)
{
    // append copy of passed element
    elems.push_back(elem);
}

template <class T> void Stacks<T>::pop()
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }

    // remove last element
    elems.pop_back();
}

template <class T> T Stacks<T>::top()
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::top(): empty stack");
    }

    // return copy of last element
    return elems.back();
}

template <class T> bool Stacks<T>::empty()        // return true if empty.
{
    return elems.empty();
}
