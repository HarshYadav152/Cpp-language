#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harsh"] = 95;
    marksMap["Asif"] = 74;
    marksMap["Jenna"] = 86;

    marksMap.insert({{"Shekhar",42},{"Puneet",24}}); // these key value pair added in the map
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl; // first means key and second means value
    }

    cout<<"The size is : "<<marksMap.size()<<endl; 
    cout<<"The maximum size is : "<<marksMap.max_size()<<endl; 
    cout<<"The empty's return value is : "<<marksMap.empty(); // 0 for if map is empty (begin()=end())
    return 0;
}