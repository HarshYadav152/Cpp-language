#include <iostream>
using namespace std;
int sum = 10; //here it is act as global variable
void add()
{
    int sum=89; //this is act as local variable also it has the high precedence
    cout<<"\nsum is :"<<sum;
}
int main()
{
    /*this
    is the multiline comment*/
    float a = 5.99;
    char c='h';
    bool t=true; //for true it is 1 and false for 0
    add();
    cout << "\nHarsh Yadav :\n integer is " << sum << " and\n float is :" << a; //\n is used to line break and add a new line
    cout<<"\n" <<c;
    cout<<"\n"<<t;
    return 0;
}