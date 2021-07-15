#include <iostream>
#include <string>
using namespace std;

//Here datatype may be of any type, one int and another one float.

template <class first, class second>
first Max(first a, second b)
{
    return (a > b ? a : b);
}

int main()
{
    float x = 36.35466;
    int y = 48;
    cout << Max(x, y) << endl;
}

