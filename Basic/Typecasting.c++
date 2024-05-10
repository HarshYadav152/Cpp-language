#include<iostream>
using namespace std;

int main()
{
    int a=23;
    float b=23.4;
    cout<<"\nthe value of a is "<<(float)a;
    cout<<"\nthe value of a is "<<float(a);

    cout<<"\nthe value of b is "<<int(b);
    cout<<"\nthe value of b is "<<int(b);

    int c=int(b);
    cout<<"\nthe expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    return 0;
}