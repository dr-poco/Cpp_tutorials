#include <iostream>

#include <cstring>

using namespace std;

struct Books
{
    char name[50];
    char author[50];
    int id;
};

void printBook(struct Books book1)
{

    cout << "Book 1 name : " << book1.name << endl;
    cout << "Book 1 author : " << book1.author << endl;
    cout << "Book 1 id : " << book1.id << endl;
}

int main()
{
    struct Books book1;

    //book1.name = "Macbeth";
    //book1.author = "Shakespeare";

    strcpy(book1.name, "Macbeth");
    strcpy(book1.author, "Shakespeare");
    book1.id = 1;

    printBook(book1);


    return 0;
}
