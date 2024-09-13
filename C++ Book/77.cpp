#include<iostream>
using namespace std;

void fun(int m){}
void fun(unsigned char m){}
int main(){
    fun('x');
    cout<<"He\nsaid\n\"Hello\"\n";
    return 0;
}