#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v; // create a vector to store int

    v.push_back(2); // push values into the vector v.
    v.push_back(5);
    v.push_back(2);
    v.push_back(78);
    v.push_back(2);
    v.push_back(45);
    v.push_back(25);

    cout << "vector size = " << v.size() << endl; // display the updated size of vector

    // access 7 values of the vector
    /*for (int i = 0; i < 7; i++)
    {
        cout << "value of vector "
             << "v[" << i << "]= " << v[i] << endl;
    }*/

    // use iterator to access the values of vector
    vector<int>::iterator itr = v.begin();

    cout << "value of vec = ";
    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << " ";
    }

    int operation;
    cout << "\nPress 1 for counting the no of occurence of a element in vector \n"
         << "Press 2 for sorting the elements of vector \n"
         << "Press 3 for reversing the elements of vector \n"
         << "Press 4 for finding the maximum element of vector \n"
         << "Press 5 for finding the minimum element of vector \n"
         << endl;

    cin >> operation;

    switch (operation)
    {

    case 1:
        // count function -   count returns the number of occurence of thatperticular element
        int value;
        cout << "Enter the value which you want to search for no of occurences ";
        cin >> value;
        cout << value << " appears  : " << count(v.begin(), v.end(), 2)
             << " times" << endl;
        break;

    case 2:
        // sort function
        sort(v.begin(), v.end());
        for (int i = 0; i < 7; i++)
        {
            cout << "value of vector after sorting "
                 << "v[" << i << "]= " << v[i] << endl;
        }
        break;

    case 3:
        // reverse function
        reverse(v.begin(), v.end());
        for (int i = 0; i < 7; i++)
        {
            cout << "value of reverse vector "
                 << "v[" << i << "]= " << v[i] << endl;
        }
        break;

    case 4:
        // Maximum element of vector
        cout << "Maximum element of vector is : " << *max_element(v.begin(), v.end());
        break;
    case 5:
        // Minimum element of vector
        cout << "Minimum element of vector is : " << *min_element(v.begin(), v.end());
        break;

    default:
        cout << "Invalid input : Please press the valid key";
    }

    return 0;
}