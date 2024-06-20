#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 2;
        throw 'x';
        throw 4.3;
    }
    catch (char a)
    {
        cout << "Exception caught in the char value " << endl;
    }
    catch (int a)
    {
        cout << "Exception caught in the int value " << endl;
    }
    catch (float a)
    {
        cout << "Exception caught in the float value " << endl;
    }
    // catch(...){ // this will catch all type of values from the throw statement
    //     cout<<"Exception caught in the all types of the values"<<endl;
    // }
    return 0;
}