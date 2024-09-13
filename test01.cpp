#include<iostream>
using namespace std;

void print(int i){
    cout<<i;
}
void print(double f){
    cout<<f;
}
int main()
{
    print(5);
    print(500.263);
    return 0;
}