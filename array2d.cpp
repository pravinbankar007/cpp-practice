#include <iostream>
using namespace std;

int main()
{
    // elements in array are initialised to specific values at a time of declaration of array
    int arr2d[2][3] = {{10, 12, 15}, {22, 25, 27}};

    cout << "Printing a 2D array" << endl;
    for (int i = 0; i < 2; i++) // outer for loop for traversing through ith row
    {
        for (int j = 0; j < 3; j++) // inner for loop for traversing through jth column
        {
            cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl; // to print elements of array
        }
    }

    return 0;
}