#include <iostream>

using namespace std;

/*int main()
{
    int myArray[3] = {34, 56, 24};

    cout << myArray[2] << endl;

    return 0;
}*/

/*int main()
{
    int myArray[3];
    myArray[0] = 23;
    myArray[1] = 57;
    myArray[2] = 34;

    cout << myArray[2] << endl;

    return 0;
}*/

int main()
{
    int myArray[15];

    for (int i = 0; i <= 14; i++)
    {
        myArray[i] = 67;

        cout << i << "------" << myArray[i] << endl;
    }
    return 0;
}

/*int main()
{

    int myArray[14];

    for (int i = 1; i <= 14; i++)
    {
        myArray[i] = i;

        cout << myArray << endl;
    }
    return 0;
}*/
