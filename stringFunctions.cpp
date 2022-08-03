#include <iostream>
#include <string>
using namespace std;

int main()
{
    string info1 = "India is my country";

    cout << "The length of the first string is : " << info1.length() << endl; // length() function used to find length of string

    string info2 = "I live in Maharashtra";

    cout << "The 1st string before swapping is : ";
    cout << info1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << info2 << endl;

    info1.swap(info2); // swap() function used to swap string content

    cout << "The 1st string after swapping is : ";
    cout << info1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << info2 << endl;

    return 0;
}