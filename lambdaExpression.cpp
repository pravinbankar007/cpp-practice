#include <iostream>
using namespace std;

int main()
{

    // lambda function that takes two integer parameters and displays their multiplication.
    auto multiply = [](int a, int b)
    {
        cout << "Multiplication is : " << a * b;
    };

    multiply(25, 26); // calling the lambda function

    return 0;
}