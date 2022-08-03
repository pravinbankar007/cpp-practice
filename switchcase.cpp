#include <iostream>
using namespace std;

int main()
{
    int rto_code;
    cout << "Enter the rto code for which you want to see city: ";
    cin >> rto_code;

    switch (rto_code)
    {
    case 9:
        cout << "The city is : Kolhapur";
        break;
    case 42:
        cout << "The city is : Baramati";
        break;
    case 11:
        cout << "The city is : Satara";
        break;
    case 12:
        cout << "The city is : Pune";
        break;
    case 14:
        cout << "The city is : Pimpri-Chinchwad";
        break;
    default:
        cout << "You have entered invalid rto code";
    }
    return 0;
}