#include <iostream>

using namespace std;

int myVariable = 76;

int main()
{
    int myVariable = 30;

    cout << myVariable << endl;

    cout << ::myVariable << endl; // :: is called Unary scope resolution operator, which denotes the global variable.

    return 0;
}
