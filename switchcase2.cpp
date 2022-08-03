#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age : ";
    cin >> age;

    switch (age)
    {
    case 7:
        cout << "You are 7 years old" << endl;
        break;
    case 18:
        cout << "You are 18 years old" << endl;
        break;

    default:
        cout << "You are neither 7 nor 18 years old";
    }
    return 0;
}