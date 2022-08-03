// Multiple inheritance

#include <iostream>
using namespace std;

// base class
class Rakesh
{
public:
    void Write()
    {
        cout << "Writing.." << endl;
    }
};

// another base class
class Pravin
{
public:
    void Read()
    {
        cout << "Reading.." << endl;
    }
};

// Derived class
class Ashish : public Rakesh, public Pravin
{
public:
    void Play()
    {
        cout << "Playing.." << endl;
    }
};

int main()
{
    Ashish a;
    a.Write();
    a.Read();
    a.Play();

    return 0;
}