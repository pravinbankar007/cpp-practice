// Virtual funcion

#include <iostream>
using namespace std;

class B
{
public:
    virtual void print()
    {
        cout << "Base class is invoked" << endl;
    }
};

class D : public B
{
public:
    void print()
    {
        cout << "Derived Class is invoked" << endl;
    }
};

int main()
{
    B *b; // pointer of base class
    D d;  // object of derived class
    b = &d;
    b->print(); // Late Binding occurs

    return 0;
}