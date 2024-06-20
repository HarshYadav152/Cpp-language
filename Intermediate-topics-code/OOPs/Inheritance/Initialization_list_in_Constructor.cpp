#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor :
constructor (argument-list) : initialozation section
{
    assignment+other code;
}
class test
{
    int a;
    int b;
    public : test(int i,int j):a(i),b(j)
    {
        constructor - body
    }

};
*/

class test
{
    int b;
    int a;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(2*j)
    // test(int i, int j) : a(i), b(a+j)
    // test(int i, int j) : b(j),a(i+b) This will create problem because a  will be initialize first
    test(int i, int j) : b(j), a(i+b) // now it will correct
    {
        cout << "Constructor called : " << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    test ob(4, 5);
    return 0;
}