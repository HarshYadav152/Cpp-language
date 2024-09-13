#include<iostream>
using namespace std;

int main(){
    bool b1 ,b2;
    int x;
    if (b1 && b2)
        x = x+1;
    
    if(b1)
        if(b2)
            x = x+1;
    return 0;
}