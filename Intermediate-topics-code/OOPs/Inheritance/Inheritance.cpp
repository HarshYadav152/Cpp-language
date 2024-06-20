#include <iostream>
using namespace std;

// Base class
class employee
{

public:
    int id;
    float salary;
    employee(int ID)
    {
        id = ID;
        salary = 25.0;
    }
    employee() {}
};
// default visibility mode is private
// public visibility mode : public member of the base class becomes public member of the derived class
// private visibility mode : public member of the base class becomes private member of the derived class
//  private members of the base class never be inherit
class programmer : public employee
{
public:
    int languageCode;
    programmer(int inpid)
    {
        id = inpid;
        languageCode=3;
    }
    getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harsh(1), asif(2);
    cout << harsh.salary << endl;
    cout << asif.salary << endl;

    programmer skill(10);
    cout << skill.languageCode<<endl;
    cout<<skill.id<<endl;
    skill.getData();
    return 0;
}

// Derived class syntax
/*
class {{derived_class_name}} : {{visibility_mode}} {{base_class_name}}
{
    class members/methods etc
}
*/
// creating a programmer class derived from employee base class