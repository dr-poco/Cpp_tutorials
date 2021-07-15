#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> nameMap;

    nameMap[1] = "Karthi";
    nameMap[2] = "Adharsh";
    nameMap[3] = "Gokul";
    nameMap[4] = "sasi";
    nameMap[4] = "John";     // since map is associative we cannot duplicate keys in map. Last assigned value will be displayed.
    nameMap[5] = "Kiran";

    nameMap.insert(pair<int, string> (6, "sudhakar"));
    nameMap.insert(pair<int, string> (7, "vishal"));
    nameMap.insert(pair<int, string> (8, "Thagur"));

    // searching a value in the map.
    map<int, string>::iterator it = nameMap.find(6);
    cout << "Key found = " << it->second << endl;
    nameMap.erase(it);  // erasing a key, value pair using Map find method.


    cout << nameMap[4] << endl;
    cout << "Map size is " << nameMap.size() << endl;

    /// Map Iterator method.

    for (map<int, string>::iterator it = nameMap.begin(); it != nameMap.end(); it++)
    {
        cout << it->first << " --> " << it->second << endl;   // it->first represents key,  it->second represents value.
    }

    return 0;
}
