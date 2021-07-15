#include <iostream>
#include <string>
using namespace std;

template <class T>
class Maths{
    T a, b;
public:
    Maths(T x, T y)   //constructor
    {
        a = x;
        b = y;
    }
    T maxValue();
};

template <class T>  // we should use this statement wherever we use template class.
T Maths<T>::maxValue()
{
    return (a > b ? a : b);
}
int main()
{
    Maths<double> mat(23.3455, 45.234235);
    cout << mat.maxValue();
    return 0;
}
