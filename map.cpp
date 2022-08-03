#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Map stores values in the key-value pair format.

    map<int, string> Students;

    // Assignment of values using array index notation
    Students[5] = "Rakesh";
    Students[4] = "Nikhil";
    Students[12] = "Ashish";
    Students[2] = "Nilesh";
    Students[3] = "Rishi";

    cout << "Initial Value of map is : " << endl;
    map<int, string>::iterator iter; // using iterator to access values of map
    for (iter = Students.begin(); iter != Students.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    // inserting new pairs in map
    Students.insert({{1, "Pravin"}, {7, "Mahesh"}});
    cout << "Updated value of map is : " << endl;
    for (iter = Students.begin(); iter != Students.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The empty's return value is : " << Students.empty() << endl;
    cout << "The size of map is : " << Students.size() << endl;
    cout << "The maximum size of map is : " << Students.max_size() << endl;
    return 0;
}
