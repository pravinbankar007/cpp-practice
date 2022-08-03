// Single level inheritance

#include <iostream>
using namespace std;

class Student
{
public:
    void Read()
    {
        cout << "Reading.." << endl;
    }
};

class Rakesh : public Student
{
public:
    void Write()
    {
        cout << "Writing.." << endl;
    }
};

int main(void)
{
    Rakesh r1;
    r1.Read();
    r1.Write();

    return 0;
}