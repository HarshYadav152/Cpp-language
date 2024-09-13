#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Inside base constructor called"<<endl;
    }
};
class derived : public base{
    public : derived(){
        cout<<"Inside derived constructor called"<<endl;
    }
};
class super : public derived{
    public : super(){
        cout<<"Inside super constructor called"<<endl;
    }
};
int main()
{
    // super ob;
    derived ob;

    return 0;
}