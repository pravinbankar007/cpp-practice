#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // create a queue cars of type string
    queue<string> cars;

    // push element into the queue
    cars.push("Scorpio");
    cars.push("Fortuner");
    cars.push("Creta");
    cars.push("Nexon");

    cout << "Check the queue is empty or not :  ";
    // check if the given queue is empty or not
    if (cars.empty())
    {
        cout << "Yes, the given queue is empty" << endl;
    }
    else
    {
        cout << "No, the given queue is not empty" << endl;
    }

    // get the element at the front
    string front = cars.front();
    cout << "First element: " << front << endl;

    // get the element at the back
    string back = cars.back();
    cout << "Last element: " << back << endl;

    // get the size of the queue
    cout << "Size of the queue: " << cars.size();

    return 0;
}
