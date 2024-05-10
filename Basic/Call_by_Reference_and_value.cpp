#include <iostream>
using namespace std;

int sum(int a, int b) // ex of call by value 
{
    int c = a + b;
    return c;
}
//******Call by reference*******
// int swapPointer(int* a, int* b) //ex of call by reference
// {
//     int temp = *a; //here we dereferencing the pointer a
//     *a = *b;
//     *b = temp;
// }
//******Call by reference variable*******
int swapPointerReferenceVar(int &a, int &b) 
{
    int temp = a; 
    a = b;
    b = temp;
}
//********return a reference variable********
int & swapPointerReference(int &a, int &b) 
{
    int temp = a; 
    a = b;
    b = temp;
    return a; //this return the c++ reference variable pointing the actual x
}
int main()
{
    int x = 1, y = 2;
    cout << "The sum of 1 and 2 is : " << sum(1, 2)<<endl; // here we simply pass the values of actual parameter 
    // swapPointer(&x,&y); // here we pass the address of the actual parameter
    // cout<<"The value of x is "<<x<<" and y is "<<y<<endlx
    swapPointerReferenceVar(x,y); // using C++ reference variable
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    swapPointerReference(x,y)=200; // function give values to the x 200;
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    return 0;

    
}