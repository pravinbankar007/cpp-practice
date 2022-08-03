// function pointer or functor

#include <iostream>
using namespace std;

int multiply(int p, int q)
{
    return p * q;
}

int main()
{
    int (*funcPtr)(int, int); // declaring a function pointer

    funcPtr = multiply; // funcPtr is pointing to the multiply function(storing the address of multipky function into the funcPointer)

    int m = funcPtr(11, 12);

    cout << "value of multiplication is : " << m << endl;

    return 0;
}