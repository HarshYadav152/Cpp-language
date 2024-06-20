#include<iostream>
using namespace std;
class c2; //forward declaration
class c1
{
    int val1;
    public : void input(int x)
    {
        val1=x;
    }
    void display(){
        cout<<val1<<endl;
    }
    friend void exchange(c1 &,c2 &);
};

class c2
{
    int val2;
    friend void exchange(c1 &,c2 &);
    public : void input(int y)
    {
        val2=y;
    }
    void display(){
        cout<<val2<<endl;
    }
};
void exchange( c1 &a,c2 &b)
{
    int temp=a.val1;
    a.val1=b.val2;
    b.val2=temp;
}
int main()
{
    c1 o1;
    c2 o2;

    o1.input(14);
    o2.input(25);
    cout<<"c1 Before swaping : ";
    o1.display();

    cout<<"c2 Before swaping : ";
    o2.display();

    exchange(o1,o2);

    cout<<"c1 After swaping : ";
    o1.display();

    cout<<"c2 After swaping : ";
    o2.display();
     
    return 0;
}