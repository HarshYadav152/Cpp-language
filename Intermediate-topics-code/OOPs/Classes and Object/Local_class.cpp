#include <iostream>
using namespace std;

int global_variable; 
void local()
{
    static int x;
    class harsh // this class is act as a local class as inside this class we use globally declared variable
    {
        // static int c; // this is illegal inside the local class 
        private : int a, b;

    public:
        // friend void harsh::local(harsh obj);
        harsh()
        {
            cout<<"Inside local class"<<endl;
        }
        void use_local_variable(){
            cout<<"Enter the variable value of the global variable : ";
            cin>>global_variable;
            cout<<"Entered value is : ";
            // cout<<::global_variable; // we can use directly global variable inside the local class or using the scope resolutin operator
            cout<<global_variable;
        }
        // void static_variable(){
        //     cout<<"Enter the valeu of the static variable : ";
        //     // cin>>static_variable; // this will give error becaue we can't use static decalred varible inside the local class as it is define and declare inside the local() function parent fuction of the local class
        // }
    };
    // cout<<harsh.a; // although we can't access private member inside the function and outside the class

    // local class object must be declared inside the parent function 
    harsh object; // creating the object of the local class only inside the parent function of the local class 
    object.use_local_variable();
}
int main()
{
    local(); // for use of the local class we must call the respective function 
    return 0;
}