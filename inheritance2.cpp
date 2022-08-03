// Multi level inheritance

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

class Ashish : public Rakesh
{
public:
    void Play()
    {
        cout << "Playing.." << endl;
    }
};

int main(void)
{
    Ashish a1;
    a1.Read();
    a1.Write();
    a1.Play();
    return 0;
}