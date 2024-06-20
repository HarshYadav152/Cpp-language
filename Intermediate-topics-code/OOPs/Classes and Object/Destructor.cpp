#include <iostream>
using namespace std;

// Destructor never takes an argument and not return any value
int count = 0;
class num
{
// int count = 0;
public:
    num()
    {
        count++;
        cout << "The time where constructor is called for object no . : " << count << endl;
    }
    ~num()
    {

        cout << "The time where destructor is called for object no. : " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    } //on exiting the block destructor is called after above statement
    cout << "Back to the main" << endl;
    // after this destructor is called for n1 
    return 0;
}