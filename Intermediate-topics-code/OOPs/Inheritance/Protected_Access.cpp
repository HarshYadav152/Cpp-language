#include<iostream>
using namespace std;

class base
{
    protected : int a; //inheritable private member 

};

/*
    For a protected member 
                        Public Derivation       Private Derivation         Protected Derivation
    Private Member      Not inherited           Not inherited               Not inherited
    Public Member       Public                  Private                     Protected
    Protected Member    Protected               Private                     Protected
*/
class derived : public base{
    public:void display(){
        cout<<a<<endl;        
    }
};
int main()
{
    derived der;
    der.display();
    // cout<<der.a; // will not work because a is protected inherited from base class 
    return 0;
}