#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int number = 0;
    int sum = 0;

    do
    {
        cout <<  "Enter any number = ";
        cin >> number;
        sum += number;
        x++;
    }

    while(x<1);

    cout << "Sum = " << sum << endl;


    return 0;

}
