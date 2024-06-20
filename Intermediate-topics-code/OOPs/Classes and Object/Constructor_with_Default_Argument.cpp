#include <iostream>
using namespace std;

class simple
{
    int a, b;

public:
    simple(int x, int y=5)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" and "<<b<<endl;
    }
};
int main()
{
    simple ob1(2,7);
    ob1.display();

    simple ob2(2);
    ob2.display();
    return 0;
}