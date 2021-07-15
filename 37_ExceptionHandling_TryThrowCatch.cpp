#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int age = 0;
        cout << "Please enter a value = " << endl;
        cin >> age;
        if (age > 100 || age < 0)
        {
            //throw 'a';
        }

    }
    catch(int e)
    {
        cout << "Error No = " << e << endl;
    }
    catch(char e)
    {
        cout << " Error Char = " << e << endl;
    }
    catch(...)  // three dots means unknown exception
    {
        cout << " Unknown Exception = "<< endl;
    }
}
