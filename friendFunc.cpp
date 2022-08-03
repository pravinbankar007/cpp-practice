// friend function

#include <iostream>
using namespace std;
class car
{
private:
    int length;

public:
    car() : length(0) {}

    friend int showLength(car); // friend function
};

int showLength(car obj)
{
    obj.length += 5;
    return obj.length;
}

int main()
{
    car obj;
    cout << "Length of car: " << showLength(obj) << endl;
    return 0;
}