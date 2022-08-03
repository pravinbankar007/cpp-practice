#include <iostream>
using namespace std;

int main()
{

    int a = 7;
    int *b = &a;

    cout << "The address of a is " << &a << "\n"; //& = Reference operator(address of)
    cout << "The address of a is " << b << "\n";
    //
    //
    cout << "The value at a is " << a << "\n";
    cout << "The value at address b is " << *b << "\n"; // * = Dereference operator(means value at)
    cout << &b;
    return 0;
}
