// function template

#include <iostream>
using namespace std;

template <class temptype>
temptype add(temptype num1, temptype num2)
{
    temptype result;
    result = num1 + num2;
    return result;
}

int main()
{
    int p = 15, q = 9;
    float r = 8.7, s = 28.5;

    cout << "Addition of p and q is : " << add(p, q);
    cout << '\n';

    cout << "Addition of r and s is : " << add(r, s);

    return 0;
}