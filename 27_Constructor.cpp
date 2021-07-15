#include <iostream>
#include <string>

using namespace std;

class Books{
public:
    Books(string x)
    {
        // cout << "You're in constructor" << endl;

        // Generally we use constructor to initialize a value of variable in class.

        setName(x);
    }

    // Constructor will automatically be defined by class eventhough we don't define it explicitly.

    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        return name;
    }

private:
    string name;

};

int main()
{
    Books book1 ("Macbeth");

    // book1.setName("Macbeth");

    cout << book1.getName() << endl;

    Books book2 ("Kinglier");
    cout << book2.getName() << endl;

    return 0;
}


