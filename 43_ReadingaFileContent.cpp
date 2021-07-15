// ofstream : Stream class to write on files.
// ifstream : Stream class to read from files.
// fstream : Stream class to both read and write from/to files.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    /* ofstream file_;
    file_.open("mytext.txt");
    if (file_.is_open())
    {
        file_ << "Hi ! This is my first text file \n";
        file_ << "Hi ! This is my first text file \n";
        file_ << "Hi ! This is my first text file \n";
        file_ << "Hi ! This is my first text file \n";

        file_.close();
    }*/

    /*string line_;
    ifstream file_("mytext.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            cout << line_ << '\n';
        }
        file_.close();
    }
    else
        cout << "file is not open" << '\n'; */

    ifstream file_("mytext.txt");
    int id;
    string name;
    int age;

    if(file_.is_open())
    {
        while(file_ >> id >> name >> age)
        {
            cout << id << " " << name << " " << age << '\n';
        }
        file_.close();
    }
    else
        cout << "file is not open" << '\n';

    cin.get();
    return 0;
}

