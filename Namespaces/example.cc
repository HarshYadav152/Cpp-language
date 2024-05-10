#include<iostream>
using namespace std;

namespace first{
    void fun(){
    cout<<"Inside First namespaces "<<endl;
    }
    namespace firstB{
        void fun(){
            cout<<"Nested namespaces "<<endl;
        }
    }
}
namespace second{
    void fun(){
    cout<<"Inside Second namespaces "<<endl;
    }
}

// using namespace first::firstB;
// using namespace second;
int main()
{
    // second::fun();
    // first::fun();
    // fun();

    first::firstB::fun();
    return 0;
}