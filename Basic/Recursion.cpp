#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}

int fibbonaci(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fibbonaci(n-2)+fibbonaci(n-1);
    
}
int main()
{
    int a;
    // cout << "Enter a no :";
    // cin >> a;
    // cout << "The factorial is : " << factorial(a);
    cout<<"Enter a no :";
    cin>>a;
    cout<<"The term in fibbonaci sequence at position "<<a<<" is "<<fibbonaci(a);
    return 0;
}