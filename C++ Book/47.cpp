#include<iostream>
using namespace std;

void stat(){
    int m = 0;
    static int n = 0;
    m++;n++;
    cout<<m<<" "<<n<<endl;}
int main(){
    stat();
    stat();
    return 0;
}