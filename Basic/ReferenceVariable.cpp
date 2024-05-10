#include<iostream>
using namespace std;

int main()
{
    int x=3;
    int &y=x; //y is the another name of x known y as reference variable
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    return 0;
}