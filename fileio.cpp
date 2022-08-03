#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Performing write operation" << endl;
    // declaring an object of the type ofstream
    ofstream out;

    // connecting the object out to the text file using the member function open()
    out.open("fileiodemo1.txt");

    // writing to the file
    out << "This is Pune city\n";
    out << "This is also Pune city" << endl;
    // closing the file connection
    out.close();
    cout << "write operation completed" << endl;

    //
    //
    cout << "Performing read operation" << endl;
    // declaring an object of the type ifstream
    ifstream in;
    // declaring string variable str
    string str;
    // opening the text file into in
    in.open("fileiodemo1.txt");

    // giving output the string lines by storing in str until the file reaches the end of it
    while (in.eof() == 0)
    {
        // using getline to fill the whole line in str
        getline(in, str);
        cout << str << endl;
    }
    return 0;
}
