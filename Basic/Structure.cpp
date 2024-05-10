#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char fav;
    float salary;
} ep;

int main()
{
    ep harsh;
    // struct employee harsh;
    harsh.eId=1;
    harsh.fav='H';
    harsh.salary=1200000000;
    cout<<harsh.eId<<endl;
    cout<<harsh.fav<<endl;
    cout<<harsh.salary<<endl;
    return 0;
}