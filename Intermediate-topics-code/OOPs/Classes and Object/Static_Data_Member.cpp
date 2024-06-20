#include<iostream>
using namespace std;

class Employee
{
    private :int id;
             static int count; //it makes the variable count for class and it is not a associated with object
             //--> count is same for all objects
             //-->static int count is shared by all the objects
            //  int count=0;//we have to initialize count here
    public :void setData()
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData()
    {
        cout<<"The id of the employee is "<<id<<" and this employee no. : "<<count<<endl;
    }
    static void getCount()
    {
        cout<<"The value of count is "<<count;
    }
};
int Employee::count=100; //it gives the default value for count is 0
int main()
{
    Employee harsh,yadav; //these both objects use same count  
    // count is the static data member of class Employee
    harsh.setData();
    harsh.getData();
    yadav.setData();
    yadav.getData();
    Employee::getCount();
    return 0;
}