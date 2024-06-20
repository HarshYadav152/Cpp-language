#include <iostream>
using namespace std;

class harsh
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void harsh ::setData(int a1, int b2, int c3)
{
    a = a1;
    b = b2;
    c = c3;
}
int main()
{
    harsh CO;
    // CO.a=12;  -->This will throw error as a is private

    // class--> extension of structures (int C)
    // structrues had limitation
    //     -->members are public
    //     -->No methids
    // classes --> structurs + more
    // classes --> can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declaration
    // class harsh
    // {
    // class definition
    // }co,co1;

    CO.d = 23;
    CO.e = 12;
    CO.setData(1, 2, 3);
    CO.getData();
    return 0;
}