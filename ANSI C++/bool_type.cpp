#include<iostream>
using namespace std;

int main()
{
    bool b1 = true; // true -> 1
    bool b2 = false; // false -> 0

    cout<<"b1 = "<<b1<<endl;
    cout<<"b2 = "<<b2<<endl;

    // bool datatype can also be used 

    int x = true + 4*2 + b2;  // here true = 1 and b2 = 0
    cout<<"x = "<<x<<endl;
    return 0;
}