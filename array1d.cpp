#include <iostream>
using namespace std;

int main()
{
    int marks[5]; // declaration of array

    for (int i = 0; i < 5; i++) // for loop for taking elements of array from user input
    {
        cout << "Enter the marks of " << i << "th student : ";
        cin >> marks[i];
    }

    cout << "Printing the elements of array" << endl;
    for (int i = 0; i < 5; i++) // for loop for printing elements of array
    {
        cout << "Marks of " << i << "th student is : " << marks[i] << endl;
    }

    return 0;
}