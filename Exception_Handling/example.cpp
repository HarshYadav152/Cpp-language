#include<iostream>
using namespace std;

int main()
{
    int x = -1;
    cout<<"Before try block "<<endl;

    // try block
    try {
        cout<<"Inside try "<<endl;
        if (x<0){
            throw x;  // throwing an exception
            cout<<"After throw never executed : "<<endl; //this line will not be print on the output screen
        } 
    }

    // catch block

    catch(int x){
        cout<<"Exception caught "<<endl;
    }

    cout<<"After catch it will executed : "<<endl;
    return 0;
}