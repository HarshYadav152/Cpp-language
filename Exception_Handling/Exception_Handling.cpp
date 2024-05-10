#include<iostream>
using namespace std;

int main()
{
    try{
        int n = 10;
        int d = 0;
        int r;

        if (d == 0)
        {
            throw runtime_error("division by 0 is not allow in the mathematics");
        }

        r = n/d;
        cout<<"Result after division : "<<r<<endl;
    }
    catch (const exception& e){
        cout<<"Exception occured : "<<endl;
    }
    return 0;
}