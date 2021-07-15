// ofstream : Stream class to write on files.
// ifstream : Stream class to read from files.
// fstream : Stream class to both read and write from/to files.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file_;
    file_.open("mytext.txt");
    if (file_.is_open())
    {
        file_ << "Hi ! This is my first text file \n";
        file_ << "Hi ! This is my first text file \n";
        file_ << "Hi ! This is my first text file \n";
        file_ << "Hi ! This is my first text file \n";

        file_.close();
    }

    cin.get();
    return 0;
}
