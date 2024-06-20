#include<iostream>
using namespace std;

// Syntex for inheriting for multiple inheritance 
// class {{derived-class}} : {{visibility-mode}} {{base-class1}} , {{visibility-mode}} {{base-class2}}
// {
//     class body the derived class
// }
class base1
{
    protected: 
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
    protected: 
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1,public base2
{
    public:void show()
    {
        cout<<"the value of the base 1 is "<<base1int<<endl;
        cout<<"the value of the base 2 is "<<base2int<<endl;
        cout<<"the sum of the values is  "<<base1int+base2int<<endl;
    }
};

/*
    The inherited derived class will look something like this :
    Data Member :
        base1int --> protected
        base2int --> protected
    
    Member Function :
        set_base1int() --> public
        set_base2int() --> public
        show() --> public
*/

int main()
{
    derived object;
    object .set_base1int(11);
    object .set_base2int(22);
    object.show(); 
    return 0;
}