#include <iostream>
using namespace std;

enum rtoCcode
{
    Satara = 11,
    Ahmednagar = 16,
    Pune = 12,
    Sangli = 10,
    Solapur = 13
};

int main()
{
    rtoCcode c;
    c = Sangli;
    cout << "Sangli = " << c << endl;

    return 0;
}