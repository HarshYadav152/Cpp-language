#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int*b=&a;
    // & is the Address operator 
    // cout<<"the address of a is :"<<b<<endl;

    // // * dereferencing operator
    // cout<<"the value at a is :"<<*b;

    int** c=&b;
    cout<<"the value at address of c is :"<<*c<<endl;
    cout<<"the value at address of value of address of c :"<<**c<<endl;
    return 0;
}