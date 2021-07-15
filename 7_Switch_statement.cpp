#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "please Enter the grade = ";
    cin >> grade;

    switch(grade)
    {
        case 'A' : cout << "Excellent" << endl;
        break;
        case 'B' : cout << "very Good" << endl;
        break;
        case 'C' : cout << "You passed" << endl;
        break;
        default : cout << "Invalid Entry" <<endl;
    }
}
