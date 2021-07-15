
#include <iostream>
#include <string>

using namespace std;

class Books{
public:
    Books()
    {
        cout << "We're in constructor" << endl;

    }

    ~Books()
    {
        cout << "we're in destructor" << endl;
    }

    // Constructor and Destructor will automatically be defined by class eventhough we don't define it explicitly.

};

int main()
{
    // This function start executing first
    // Object calls the Class.
    // constructor is created and executed.
    // Then the class functions are executed.
    // When it finishes the program, after '}' encountering this in int main() it calls the destructor.
    // Destructor destroys all the data like variables, functions in the class.

    Books book1;

    cout << "Statement 1 execution" << endl;
    cout << "Statement 2 execution" << endl;
    cout << "Statement 3 execution" << endl;

    return 0;
}


