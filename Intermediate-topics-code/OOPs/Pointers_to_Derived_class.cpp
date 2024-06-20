#include <iostream>
using namespace std;

class BaseClass
{

public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable : " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{

public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable : " << var_base << endl;
        cout << "Displaying Derived class variable : " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // base class pointer points the derived class object
    base_class_pointer->var_base=34;
    base_class_pointer->display(); //display() of the base class called because base_class_pointer is the base class pointer
    // base_class_pointer->var_derived=84; //it will give an error b/c we can only use only base class member due to base_class_pointer points the base class  
    // we can access only base class member 

    DerivedClass * derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=55;
    derived_class_pointer->display(); //here we can access display() of the derived class b/c  derived_class_pointer points the object of derived class

    return 0;
}