#include <iostream>
using namespace std;

class Check
{
public:
    Check()
    {
        cout << "Constructor Invoked" << endl;
    }
    ~Check()
    {
        cout << "Destructor Invoked" << endl;
    }
};

int main(void)
{
    Check c1; // created an object c1 of class Check
    Check c2;
    Check c3;
    return 0;
}