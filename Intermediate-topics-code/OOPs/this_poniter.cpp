#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        // A & setData(int a)
        void setData(int a) //argument name and private member name is same but it will not give any problem 
        {
            this->a=a;
            // return *this;
        }
        void getData()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member funtion 
    A a;
    // a.setData(4).getData();
    a.setData(4);
    a.getData();  
    return 0;
}