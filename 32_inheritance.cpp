#include <iostream>
using namespace std;

/*How you can identify that you can use inheritance in your C++ program ?
Inheritance always has "is a" relation. Eg. Fruits = apple, orange, grapes.  Flowers = Rose, Jasmine, Lily */

// Inheritance allows us to define a class in terms of another class. which results in faster and reusability of our code.

/*polygon = rectangle, triangle, square. Each of these has height and width. But the calculation of area is different.
We can define a class which has width & height. and we can reuse it in other class like rectangle, triangle
to calculate its area. */

class Shape    // base class
{
public:                     // Public member can be available/accessible to any class.
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
protected:          // Proctected members can be reusable in other class(rectangle, triangle) which inherits this class(Shape).
    int width;       // Protected members can be available/accessible to inherited class only.
    int height;
};

class rectangle : public Shape  // derived class = Inherited class from base class.
{
public:
    int area()
    {
        return (width * height);        // Inherited class allows us reuse the member variable of the base class.
    }
};

class triangle : public Shape
{
public:
    int area()
    {
        return (width * height / 2);
    }
};

int main()
{
    rectangle rec;
    triangle tri;
    rec.setValues(12, 10);
    tri.setValues(12, 10);

    std::cout << "Area Rectangle = " << rec.area() << std::endl;
    std::cout << "Area triangle = " << tri.area() << std::endl;
    return 0;
}
