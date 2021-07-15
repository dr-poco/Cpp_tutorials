#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
// we can define virtual member function in base class only.
// Virtual member function says the C++ compiler I'm defining a virtual member i can redefine it according to the requirement of the derived class.
// use - we can redefine the function in the derived class. Redefine means function name remains same i.e, int area()
// But we can redefine the statement of the function.
    virtual int area()
    {
        return 0;
    }

// Pure Virtual member function is a virtual member function which has no definition(statement). But simply equal to zero;
// Pure Virtual member function eg. virtual int area() = 0;
// when Virtual member function is equal to zero it makes our class as abstract class (class without any statement but declaration alone).
protected:
    int width;
    int height;
};

class rectangle : public Shape
{
public:
    int area()
    {
        return (width * height);
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
    Shape poly;
    Shape *poly1 = &rec;
    Shape *poly2 = &tri;
    Shape *poly3 = &poly;
    poly1->setValues(12, 10);
    poly2->setValues(12, 10);
    poly3->setValues(12, 10);

    std::cout << "Area Rectangle = " << rec.area() << std::endl;
    std::cout << "Area triangle = " << tri.area() << std::endl;
    std::cout << "Area Shape = " << poly.area() << std::endl;
    return 0;
}

