#include <iostream>
using namespace std;

class buldingPlan
{

public:
    double length, breadth, height;

    double area()
    {
        return length * breadth;
    }

    double volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    // create object of buldingPlan
    class buldingPlan building1;

    // assign values to data members
    building1.length = 70.5;
    building1.breadth = 57.8;
    building1.height = 23.4;

    cout << "Area of building 1 = " << building1.area() << endl;
    cout << "Volume of building 1 = " << building1.volume() << endl;

    return 0;
}