#include<iostream>
using namespace std;

namespace first{
    int value = 101;
}
// int value = 202;

using namespace first;
int main()
{
    // int value = 303;
    // cout<<value<<endl;// this will print the main value int

    // this will print the first namespace value using the scope resolution oprerator
    cout<<value;
    return 0;
}