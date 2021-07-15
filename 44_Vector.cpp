#include <iostream>
#include <string>
#include <vector>   // vector library.
#include <algorithm> // std::remove function is available in this library.
using namespace std;

// vector is a sequential container same as array which contains more than one element of same datatype.
// Difference btwn array and vector, whenever we declare an array, we have to define its length and it can't be modified at runtime dynamically.
// If we use vector, we can change the size of vector dynamically.

int main()
{
    vector<int> my_vec;
    my_vec.push_back(10);
    my_vec.push_back(20);
    my_vec.push_back(30);
    my_vec.push_back(40);

    cout << "Vector size = " << my_vec.size() << endl;

    for (int i = 0; i < my_vec.size(); i++)
    {
        cout << "Vector at index " << i << " =  " << my_vec[i] << endl;   /// my_vec[i] (or) my_vec.at(i) both gives same result.
    }

    //my_vec.erase(my_vec.begin()); // erases the first value in the vector.
    //my_vec.erase(my_vec.begin() + 3);

    ///my_vec.erase(std::remove(my_vec.begin(), my_vec.end(), 30), my_vec.end());  // syntax to erase particular element by value.

    my_vec.clear();  // to delete all the vector elements.

    cout << endl << endl;

    cout << "Vector size = " << my_vec.size() << endl;
    cout << "is Vector empty? = " << my_vec.empty() << endl;

    for (int i = 0; i < my_vec.size(); i++)
    {
        cout << "Vector at index " << i << " =  " << my_vec.at(i) << endl;
    }

    return 0;
}
