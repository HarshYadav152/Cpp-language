#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you "<<endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Kaise ho "<<endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {  
        base1::greet(); //base1 class greet function called
        // cout<<"Harsh Yadav"; //it will override the greet() method
    }
};
int main()
{
    base1 ob;
    base2 ob1;
    ob.greet();
    ob1.greet();
    derived object;
    object.greet();
    return 0;
} 
