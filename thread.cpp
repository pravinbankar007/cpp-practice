#include <iostream>
#include <thread>
using namespace std;

// creating thread using function pointer
void func(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "Thread using function pointer as callable\n";
    }
}

// creating thread using function object
class threadObj
{
public:
    void operator()(int y) // overload () operator
    {
        for (int i = 0; i < y; i++)
            cout << "Thread using function object as callable\n";
    }
};

int main()
{
    cout << "Threads 1 and 2 are operating independently" << endl;

    thread thr1(func, 4); // This thread is launched by using function pointer as callable

    thread thr2(threadObj(), 4); // This thread is launched by using function object as callable

    thr1.join(); // Wait for thread thr1 to finish

    thr2.join(); // Wait for thread thr2 to finish

    return 0;
}
