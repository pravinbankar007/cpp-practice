// Function overloading

#include <iostream>
using namespace std;

class Multiply
{
public:
    int doMultiplication(int num1, int num2)
    {
        return (num1 * num2);
    }

    double doMultiplication(double num1, double num2)
    {
        return (num1 * num2);
    }

    int doMultiplication(int num1, int num2, int num3)
    {
        return (num1 * num2 * num3);
    }
};

int main()
{

    Multiply m1;

    // calls function with 2 int parametrs
    cout << "Multiplication of 2 int parameters  : " << m1.doMultiplication(11, 12) << endl;

    // calls function with 2 double parameters
    cout << "Multiplication of 2 double parameters  : " << m1.doMultiplication(4.2, 6.5) << endl;

    // calls function with 3 int parameters
    cout << "Multiplication of 3 int parameters : " << m1.doMultiplication(11, 12, 13) << endl;

    return 0;
}