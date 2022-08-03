#include <iostream>
#include <string>
using namespace std;

int main()
{
    string city = "Satara"; // city variable

    string &nativeplace = city; // reference to the city variable

    cout << city << "\n";        // it will print Satara
    cout << nativeplace << "\n"; // it will also print Satara

    return 0;
}
