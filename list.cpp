#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{

    list<int> li = {15, 25, 20, 50};
    cout << "initial list size = " << li.size() << endl; // display the size of list

    li.push_back(2); // push values into the list li.

    cout << "Updated list size = " << li.size() << endl; // display the updated size of list

    cout << "Elements of list : ";
    // use iterator to access the values of list
    list<int>::iterator itr = li.begin();
    for (itr = li.begin(); itr != li.end(); ++itr)
    {
        cout << *itr << " ";
    }

    int operation;
    cout << "\nPress 1 for checking the list is empty or not \n"
         << "Press 2 for sorting the elements of list \n"
         << "Press 3 for reversing the elements of list \n"
         << "Press 4 for finding the maximum element of list \n"
         << "Press 5 for finding the minimum element of list \n"
         << endl;

    cin >> operation;

    switch (operation)
    {

    case 1:
        // empty() function
        // empty function is a boolean function which returns 1 if list is empty, returns 0 if list is not empty
        cout << "The empty's return value is : " << li.empty() << endl;
        break;

    case 2:
        // sort function
        // List sort() function arranges the elements of list in increasing order
        li.sort();
        cout << "Updated value of list after sort function : ";

        for (itr = li.begin(); itr != li.end(); ++itr)
        {
            cout << *itr << " ";
        }
        break;

    case 3:
        // reverse function
        // List reverse() function reverses the order of the elements in the list
        li.reverse();
        cout << "Updated value of list after reverse function : ";

        for (itr = li.begin(); itr != li.end(); ++itr)
        {
            cout << *itr << " ";
        }
        break;

    case 4:
        // Maximum element of list
        cout << "Maximum element of list is : " << *max_element(li.begin(), li.end());
        break;
    case 5:
        // Minimum element of list
        cout << "Minimum element of list is : " << *min_element(li.begin(), li.end());
        break;

    default:
        cout << "Invalid input : Please press the valid key";
    }

    return 0;
}