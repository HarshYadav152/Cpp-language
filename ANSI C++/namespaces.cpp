#include<iostream>
using namespace std;

namespace first{
    void fun1(){
        cout<<"First namespace"<<endl;
    }
    // namespace can be nested 
    namespace Nestedfirst{
        void fun2(){
            cout<<"Nested first namespace"<<endl;
        }
    }
}

namespace second{
    int secondN = 19;
    // we can declare class inside a namespace
    class secondC{
        int var;
        public : void member(){
            cout<<"Class under namespace "<<endl;
        } 
    };
}
using namespace first; // it will bring all the member and variable of the named namespaces 
using namespace first::Nestedfirst; // for using nested namespace (use of scope resolution operator)
using namespace second;
int main()
{
    first::fun1(); // this is traditional method 
    fun1();
    fun2();
    first::Nestedfirst::fun2(); // this will also true

    // using scope resolution operator
    second::secondC object; //second::secondC act as class name
    // using (using directive)
    secondC object2;
    object.member();
    object2.member();

    cout<<"Value of secondN in second namespace : "<<second::secondN; // access second namespace using scope resolution operator

    return 0;
}