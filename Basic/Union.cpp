#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;  
};

int main()
{
    // in this we can use only one member of union at a time 
    union money m1;
    m1.rice=25;
    // m1.car='D';
    // cout<<m1.car<<endl;
    cout<<m1.rice;
    return 0;
}