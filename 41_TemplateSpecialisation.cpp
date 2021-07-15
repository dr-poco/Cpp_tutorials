#include <iostream>
#include <string>
using namespace std;

template <class T>    // Template class to define any datatype.
class charFinder
{
public:
    charFinder(T a)
    {
        cout << a << " is not a valid char" << endl;
    }

};

template <>             //Template specialization class. specialized class for char datatype.
class charFinder<char>
{
public:
    charFinder(char a)
    {
        cout << a << " is a valid char" << endl;
    }

};

int main()
{
    charFinder<char> cha1('A');
    charFinder<int> cha2(23);
    charFinder<float> cha3(33.3456);
    return 0;
}
