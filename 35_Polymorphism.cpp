#include <iostream>
using namespace std;

// Polymorphism literally means many forms.
// Typically Polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.
// we can use polymorphism where we are using inheritance or where classes are related by hierarchy of inheritance.

class Shape    // base class
{
public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
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
    Shape *poly1 = &rec;   // we are defining a class interms of another class.
    Shape *poly2 = &tri;    // Shape has many forms. one is rectangle and another is triangle.
    poly1->setValues(12, 10);
    poly2->setValues(12, 10);

    //rec.setValues(12, 10);
    //tri.setValues(12, 10);

    std::cout << "Area Rectangle = " << rec.area() << std::endl;
    std::cout << "Area triangle = " << tri.area() << std::endl;
    return 0;
}
