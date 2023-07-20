#ifndef STACKS_H
#define STACKS_H
#include <vector>
using namespace std;

template <class T> class Stacks
{
public:
    void push(T const &); // push element
    void pop();           // pop element
    T top();  // return top element
    bool empty(); // return top element

protected:
private:
    vector<T> elems; // elements
};

#endif // STACKS_H
