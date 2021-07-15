#include <iostream>
using namespace std;

// In principle we know we cannot use private or protected members of one class in another class. sometimes we are in need to use the
// private or protected member in another class. so we use friend keyword to access. by giving access to the friend class.
// He is my friend class allow him to use my members

class MyClass{
    friend class MyAnotherClass;
    private:
        int secret = 10;
};

class MyAnotherClass{
public:
    void showSecret(MyClass mc)
    {
        mc.secret++;
        std::cout << mc.secret << std::endl;
    }
};

int main()
{
    MyAnotherClass mac;
    MyClass mc;
    mac.showSecret(mc);
}
