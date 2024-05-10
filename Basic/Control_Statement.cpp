#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if (age<18)
    {
        cout<<"Not eligible for voting :";
    }
    else if (age==18)
    {
        cout<<"You are eligible :";
    }
    else
    {
        cout<<"You can vote:";
    }
    return 0;
    
}