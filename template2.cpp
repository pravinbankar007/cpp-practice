// Class template

#include <iostream>
using namespace std;

template <class temptype>
class calculation
{
public:
    temptype num1 = 14.6;
    temptype num2 = 10.8;

    void add()
    {
        cout << "Addition of num1 and num2 : " << num1 + num2 << endl;
    }
};

int main()
{
    calculation<float> obj; // created instance of class computation named as obj
    obj.add();

    return 0;
}