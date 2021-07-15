#include <iostream>
#include <string>
using namespace std;

//Here datatype should be of same type, both int or both float.

template <class dataType>
dataType add(dataType a, dataType b)
{
    return a + b;
}

int main()
{
    float x = 36.35466;
    float y = 98.5675684;
    cout << add(x, y) << endl;
}
