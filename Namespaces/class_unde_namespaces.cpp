#include<iostream>
using namespace std;

namespace classes{
    // we can declare class under a namespaces 
    class harsh{
        public : 
        int x;
        void value(){
            x = 102;
            cout<<x<<endl;
        }
        harsh(){
            cout<<"Inside the namespace and class harsh "<<endl;
        }
    };
}
using namespace classes;
int main()
{
    //here we are use harsh class using the namespsce classes
    // classes::harsh(); // it will directly call the harsh() memeber of the class harsh from namespace classes

    // classes::harsh for access class and object creating the object
    // classes::harsh object; // creating the object of class harsh

    harsh object;  // here we using the (using) keyword to use namespace


    object.value(); // for accessing the value() member of the class harsh from the namespace (classes)

    return 0;
}