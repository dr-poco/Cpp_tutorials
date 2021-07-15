#include <iostream>

using namespace std;

class Vector{
public:
    int x, y;
    Vector () {}; // default constructor
    Vector (int a, int b)  // constructor overloading
    {
        x = a;
        y = b;
    }

    Vector operator+(const Vector&);  // defining operator overloading
};

Vector Vector::operator+(const Vector& parameter)
{
    Vector temp;
    temp.x = x + parameter.x;
    temp.y = y + parameter.y;
    return temp;
}

int main()
{
    /* If you want to add two objects of a class, C++ doesn't know about this class. Because it is a user defined class.
    It doesn't know if we use + operator to add two objects of a class Vector, C++ library doesn't have any class named Vector
    because it is user defined. so in order to do a operator operation, we are going to use a method called Operator Overloading.*/

    /*Vector vec1;
    Vector vec2;
    Vector vec3 = vec1 + vec2; */

    // After defining operator overloading function in class

    Vector vec1(4, 2);
    Vector vec2(2, 2);
    Vector result;
    result = vec1 + vec2;

    cout << "The result is ("<<result.x<<","<<result.y<<")"<<endl;

    int x = 2, y = 3; //These are the inherent properties of C++ to add to int operators.
    int z = x + y;
    return 0;
}
