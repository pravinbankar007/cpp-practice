#include <iostream>
#include <string>
using namespace std;

// string concatenation

int main()
{
    string countryName = "India";
    string stateName = "Maharashtra";
    string districtName = "Satara";
    string resDetails = districtName + stateName + countryName;
    cout << resDetails << endl;

    string resDetails2 = districtName + "  " + stateName + "  " + countryName;
    cout << resDetails2 << endl;
    return 0;
}