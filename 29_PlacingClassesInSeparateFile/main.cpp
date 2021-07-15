#include <iostream>
#include <string>
using namespace std;
#include "Books.h"


int main()
{
    Books book1;
    Books *bookPointer = &book1;


    book1.setBookId(100);
    cout << book1.getBookId() << endl;

    bookPointer->setBookId(24254);
    cout << bookPointer->getBookId() <<endl;

    return 0;
}

/*int main()
{
    // cout << "Hello world!" << endl;
    Books book1;
    book1.setBookId(100);
    cout << book1.getBookId() << endl;
    return 0;
}*/
