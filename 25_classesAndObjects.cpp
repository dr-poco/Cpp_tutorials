#include <iostream>

using namespace std;

class Books{

public:
    int id = 776;
    void PrintId()
    {
       cout << "The book ID is " << id << endl;
    }
};


int main()
{
    Books book;
    book.PrintId();

    cout << book.id << endl;
    return 0;
}
