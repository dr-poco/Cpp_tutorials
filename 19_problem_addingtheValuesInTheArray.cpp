#include <iostream>

using namespace std;

int main()
{
    int myArray[6] = {1, 2, 3, 4, 5, 6};

    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum += myArray[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
