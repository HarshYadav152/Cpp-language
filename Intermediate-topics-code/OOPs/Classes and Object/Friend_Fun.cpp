#include<iostream>
using namespace std;

class Y; // forward declaration

class X
{
    int data ;
    public: void setValue(int value){
        data=value;
    }
    friend void sum(X,Y);
};
class Y
{
    int num;
    public:void setValue(int value){
        num=value;
    }
    friend void sum(X,Y);
};
void sum(X o1,Y o2){
    cout<<"Sum data of X and Y objects gives me "<<o1.data+o2.num;
}
int main()
{
    X a;
    a.setValue(5);

    Y b;
    b.setValue(10);
    sum(a,b);
    return 0;
}