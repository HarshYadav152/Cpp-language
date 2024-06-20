#include <iostream>
using namespace std;

class num
{
    int a;

public:
    num(){a=0;}
    //when copy constructor is not found , compiler supplies its own copy constructor
    num(num &object) //it is a copy constructor 
    {
        cout<<"Copy Constructor is running :"<<endl;
        a = object.a;
    }
    num(int n)
    {
        a = n;
    }
    void display()
    {
        cout << "The value of a is : " << a<<endl;
    }
}; 
int main()
{
    num x, y, z(14),z2;
    x.display(); 
    y.display(); 
    z.display(); 

    num z1(x);
    z1.display();// copy constructor called
     
    z2=z; //copy constructor not called
    z2.display();

    num z3=z; // copy constructor called
    z3.display();
    return 0;
}