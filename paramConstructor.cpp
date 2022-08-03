// parameterised constructor
// parameterised constructor is the preferred method to initialise data membrs.

#include <iostream>
using namespace std;

// declare a class
class board
{
private:
    double length;
    double height;

public:
    // parameterised constructor to initialize variables
    board(double len, double hegt)
    {
        length = len;
        height = hegt;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{

    // create object and initialize data members
    board board1(25.2, 14.5);
    board board2(15.6, 9.8);

    cout << "Area of board 1: " << board1.calculateArea() << endl;
    cout << "Area of board 2: " << board2.calculateArea();

    return 0;
}