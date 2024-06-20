#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "the sum of 2 and 4 is " << sum(2, 4) << endl;
    cout << "the sum of 2 and 4 and 4 is " << sum(2, 4, 4);

    return 0;
}