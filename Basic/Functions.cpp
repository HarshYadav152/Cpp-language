#include<iostream>
using namespace std;

//function prototype
//return_type function_name(arguments);
// int sum(int a,b); //not acceptale
// int sum(int, int); //acceptable
int sum(int a,int b); //int a is not necessary to write int a we write int only
// void gM(void);  //acceptable
void gM(); //acceptable
int main()
{
    int num,num1;
    cout<<"Enter the two no. :";
    cin>>num>>num1;
    cout<<"Sum is "<<sum(num,num1); //num and num1 are the actual parameter 
    gM();
    return 0;
}

int sum(int a ,int b) // a and b is the formal parameter
{
    int c=a+b;
    return c;
}
void gM()
{
    cout<<"Good Morning ";
}