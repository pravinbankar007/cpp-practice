// inline function

#include <iostream>
using namespace std;

inline int findMultiplication(int a, int b)
{
    return (a * b);
}

int main()
{
    cout << "Multiplication is : " << findMultiplication(21, 22);
    return 0;
}