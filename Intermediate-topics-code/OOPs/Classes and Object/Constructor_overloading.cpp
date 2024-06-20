#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a=x;
        b=y;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    void display()
    {
        cout<<"No. is "<<a<<"+"<<b<<"i"<<endl;
    }
}; 
int main()
{
    complex ob(2,4);
    ob.display();

    complex ob1(5);
    ob1.display();

    return 0;
}