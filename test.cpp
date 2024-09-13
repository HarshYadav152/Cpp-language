#include<iostream>
using namespace std;

int add(int a,int b){
    int sum=a+b;
    a=7;
    return a+b;
}
int main()
{
    int i=5,j=6;
    cout<<add(i,j)<<endl;
    return 0;
}