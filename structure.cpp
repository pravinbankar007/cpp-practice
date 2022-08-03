#include <iostream>
#include <string>
using namespace std;

// Created a structure variable called myStructure
struct myStructure
{
    int myNum;
    string myString;
};

int main()
{

    // Create a myStructure structure and store it in myStructure1
    myStructure myStructure1;

    // Assigning values to members of myStructure
    myStructure1.myNum = 1;
    myStructure1.myString = "Hello Pravin";

    // To Print members of myStructure
    cout << myStructure1.myNum << "  ";
    cout << myStructure1.myString << "\n";

    // Create a another myStructure structure and store it in myStructure2
    myStructure myStructure2;

    // Assigning values to members of myStructure
    myStructure2.myNum = 2;
    myStructure2.myString = "Hello Rakesh";

    // To Print members of myStructure
    cout << myStructure2.myNum << "  ";
    cout << myStructure2.myString << "\n";

    return 0;
}
