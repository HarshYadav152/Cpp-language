#include <iostream>
using namespace std;

//this for the memeber function friend
// forward declaration
class complex; 

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex); //this is same function prototype
};

class complex
{
    int a, b;
    // friend int calculator::sumRealComplex(complex, complex);
    friend class calculator; //decllaring whole class is friend
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(3, 6);
    o1.printNumber();
    o2.printNumber();
    calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part is " << result << endl;
    return 0;
}