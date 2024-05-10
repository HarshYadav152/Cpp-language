#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int marks[4]={1,2,3,4};
    // cout<<"Enter The marks :";
    // for (int i = 0; i < 4; i++)
    // {
    //     cin>>marks[i];
    // }
    // int i=0;
    // while (i<4)
    // {
    //     cin>>marks[i];
    //     i++;
    // }
    
    // cout<<"Given Array is : ";
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<setw(1)<<marks[i];
    // }
    
    int* p=marks;
    cout<<"The value of marks[0] is :"<<*p<<endl;
    cout<<"The value of marks[1] is :"<<*(p+1)<<endl;
    cout<<"The value of marks[2] is :"<<*(p+2)<<endl;
    cout<<"The value of marks[3] is :"<<*(p+3)<<endl;
    cout<<*p++<<endl; //*p ki value oncreement ho gayi
    cout<<*p;
    return 0;
}