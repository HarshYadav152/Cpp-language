#include<iostream>
using namespace std;

class A{
    public : int x;
};
class B : public A{
    public : void set (A a,int y){
        a.x = y; // here x is inaccessible 
    }
};
int main(){
    
    return 0;
}