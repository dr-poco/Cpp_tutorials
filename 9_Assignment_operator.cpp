#include <iostream>

using namespace std;

int main()
{
    int x = 25;
    int y = 25;
    int z = 25;
    int w = 25;

    x+=5;
    y-=6;
    z*=7;
    w/=2;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << w << endl;

    int a = 8;

    cout << a++ << endl;
    cout << a << endl;

    int b = 8;

    cout << ++b << endl;
    cout << b << endl;

}
