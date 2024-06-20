#include <iostream>
using namespace std;

/*
case 1
class b : public a{
    order of execution constructor is first a() then b()
};

case 2
class a : public b,public c{
    order of execution constructor is first b() then c() after a()
};

case 3
class a : public b,virtual public c{
    order  of execution constructor first is c() then b after a()
};

*/

class first{
    int var;
    public:
        first(int z){
            var=z;
            cout<<"First (virtual) class constructor is called : "<<endl;
        }
        void print_first()
        {
            cout<<"The value of var is :  "<<var<<endl;
        }
};

class base
{
    int data;

public:
    base(int i)
    {
        data = i;
        cout << "Base class constructor is called : " << endl;
    }
    void print_data(void)
    {
        cout << "The value of data is : " << data << endl;
    }
};
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called : " << endl;
    }
    void print_data1(void)
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};
class derived : public base1,virtual public first,public base //base1 constructor is called first in the output //due to virtual base class first {} called first 
{
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d,int e):base(a),base1(b),first(e)
        {
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called : "<<endl;
        }
        void printdata()
        {
            cout<<"The value of derived 1 is : "<<derived1<<endl;
            cout<<"The value of derived 2 is : "<<derived2<<endl;
        }
};
int main()
{
    derived harsh(1,2,3,4,5);
    harsh.print_data();
    harsh.print_data1();
    harsh.printdata();
    harsh.print_first();
    return 0;
}