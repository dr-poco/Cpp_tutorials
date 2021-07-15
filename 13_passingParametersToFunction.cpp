#include <iostream>

using namespace std;

void sum(int firstNo, int secondNo)
{
    cout << "The sum of the given two numbers is " << (firstNo + secondNo) << endl;
}

int main()
{
    int a, b;
    cout << "Please enter a and b " << endl;
    cin >> a;
    cin >> b;
    sum(a, b);
    return 0;
}
