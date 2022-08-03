// initialisation list

#include <iostream>
using namespace std;

class check
{
    int a;
    int b;

public:
    check(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    check obj1(25, 30);

    return 0;
}