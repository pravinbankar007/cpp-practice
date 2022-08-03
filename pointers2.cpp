// modify the value of pointer

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mealTime = "breakfast"; // A string variable
    string *ptr = &mealTime;       // A pointer variable that stores the address of mealTime

    cout << mealTime << "\n"; // display the value of mealTime

    cout << &mealTime << "\n"; // display the memory address of mealTime
    cout << ptr << "\n";       // display the memory address of mealTime with the use of pointer

    cout << *ptr << "\n"; // display the value of mealTime with the pointer

    //**modify the value of pointer**
    *ptr = "lunch"; // change the value of pointer

    cout << *ptr << "\n"; // display the new value of the pointer (i.e lunch)

    cout << mealTime << "\n"; // display the new value of mealTime variable
    return 0;
}