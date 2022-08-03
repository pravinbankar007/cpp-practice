// Function overriding

#include <iostream>
using namespace std;

class B
{
public:
    void print()
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
    D d1;
    d1.print(); // calls print function of derived class

    return 0;
}