#include <iostream>
using namespace std;

class number
{
    int n;

public:
    //constructor created
    //constructor is a special member function with the same name as of the class 
    // it is called (automatically invoked) when the object of the class is created 
    // It isused to initialize the object of its class
    number(void) //constrctor declaration
    {
        n = 10; 
        cout << "Constructor is running " << n<<endl;
    }
};
int main()
{
    number ob,b1;
    return 0;
}