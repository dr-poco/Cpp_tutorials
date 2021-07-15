#include <iostream>

using namespace std;

int main()
{
    // What is a Pointer?
    // A pointer is a variable whose value is the address of another variable.

    int var = 100;
    cout << &var << endl;

    int *intP;
    intP = &var;

    cout << intP << endl;
    cout << *intP << endl;

    var = 30;

    cout << intP << endl;
    cout << *intP << endl;


    return 0;
}
