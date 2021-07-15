#include <iostream>

using namespace std;

void sum(int firstNo, int secondNo)
{
    cout << "Sum of two integers is " << firstNo + secondNo << endl;
}

void sum(float firstNo, float secondNo)
{
    cout << "Sum of two floats is " << firstNo + secondNo << endl;
}

int main()
{
    int a = 3554, b = 4346;
    sum(a, b);

    float x = 3554.994, y = 4346.4596;
    sum(x, y);

    return 0;
}
