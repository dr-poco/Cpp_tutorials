#include <iostream>
using namespace std;

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

class description{
public:
    void print(string description_)
    {
        std::cout << "We are using " << description_ << " class" << std::endl;
    }

};

class rectangle : public Shape, public description  // we can inherit from more than one base class.
{
public:
    int area()
    {
        return (width * height);        // Inherited class allows us reuse the member variable of the base class.
    }
};

int main()
{
    rectangle rec;
    rec.setValues(12, 10);
    std::cout << "Area Rectangle = " << rec.area() << std::endl;
    rec.print("Rectangle");

    return 0;
}

