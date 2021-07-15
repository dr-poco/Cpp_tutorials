#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int number = 0;
    int sum = 0;

    while(x <= 5)
    {
        cout << "Enter any number = ";
        cin >> number;
        sum += number;
        x++;
    }

    cout << "Sum = " << sum << endl;
}
