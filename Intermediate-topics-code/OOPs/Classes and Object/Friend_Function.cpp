#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public: void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    friend complex sumcomplex(complex o1,complex o2); // it is not a member function it is just a special permission to use these class members
    void printNumber()
    {
        cout<<"Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setNumber(1,3);
    c1.printNumber();

    c2.setNumber(4,3);
    c2.printNumber();

    sum=sumcomplex(c1,c2);
    sum.printNumber();

    // c1.sumcomplex(1,3); invalid b/c it is not a member function
    return 0;
}
/*
Properties of friend function
1. it is not a part of complex class
2. not in the scope in the class  
    // c1.sumcomplex(1,3); invalid b/c it is not a member function
3. can be invoked without the help pf any object
4. usually contain the objects as arguments 
5. can be declared public or private inside the class
6. it cannot access the members by their names and object_name.member_name to access any member . 

*/