#include <iostream>

using namespace std;

int sum(int firstNo = 20, int secondNo = 30); //passing default parameter should be in definition of a Function not in declaration otherwise it will become error.

int main()
{
    cout << sum();
    return 0;
}


int sum(int firstNo, int secondNo)
{
    int result = 0;
    result = firstNo + secondNo;
    return result;
}
