#include<iostream>
using namespace std;

int c=34; //global c
int main()
{
    // int a=4,b=5;
    // cout<<"Operator in C++";
    // cout<<"Arithmatic Operator \n ";
    // cout<<"The Value of a+b is "<<a+b<<endl;
    // cout<<"The Value of a-b is "<<a-b<<endl;
    // cout<<"The Value of a*b is "<<a*b<<endl;
    // cout<<"The Value of a/b is "<<a/b<<endl;
    // cout<<"The Value of a%b is "<<a%b<<endl;
    // cout<<"The Value of a++ is "<<a++<<endl;
    // cout<<"The Value of ++a is "<<++a<<endl;
    // cout<<"The Value of a-- is "<<a--<<endl;
    // cout<<"The Value of --a is "<<--a<<endl;

    // cout<<"Assignment operator";
    // int a=3,b=5; //kisi variable ko value assign karna
    // char s='d';

    // cout<<"\n0 for false 1 for true";
    // cout<<"\nComparison operator\n";
    // cout<<"a==b is "<<(a==b)<<endl;
    // cout<<"a!=b is "<<(a!=b)<<endl;
    // cout<<"a<=b is "<<(a<=b)<<endl;
    // cout<<"a>=b is "<<(a>=b)<<endl;
    // cout<<"a<b is "<<(a<b)<<endl;
    // cout<<"a>b is "<<(a>b)<<endl;

    // cout<<"\nLogical Operator";
    // cout<<"\nLogical and && operator "<<((a==b)&&(a!=b));
    // cout<<"\nLogical or || operator "<<((a==b)||(a!=b));
    // cout<<"\nLogical not ! operator "<<(!(a==b));

    // int c=10;
    // cout<<"The local c is "<<c<<endl;
    // cout<<"The global c is "<<::c; //:: is a global scope resolution operator
    
    float d=23.4f; //with the use of f at the end of 23.4 ensure that it is treated as floating point no. otherwise bydefault it will be treated as long double 
    long double e=34.5l;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    cout<<"\nthe size of 23.4 is "<<sizeof(23.4);
    cout<<"\nthe size of 23.4f is "<<sizeof(23.4f);
    cout<<"\nthe size of 34.5l is  "<<sizeof(34.5l);
    return 0;
}