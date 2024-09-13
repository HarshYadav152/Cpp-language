#include<iostream>
using namespace std;

int main(){
    int m = 0;
    while (++m <= 5)
    {
        if (m == 3)continue;
        cout<<m<<endl;
    }
    
    return 0;
}