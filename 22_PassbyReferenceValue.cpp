#include <iostream>

using namespace std;

void passByValue(int var)
{
    var = 100;
}

void passByReference(int *var)
{
    *var = 100;
}

int main()
{
    int x = 46;
    passByValue(x);
    cout << x << endl;
    //cout << &x << endl;


    int y = 46;
    passByReference(&y);
    cout << y << endl;
    //cout << &y << endl;



}
