#include<iostream>
using namespace std;

int main()
{
    enum meal {breakfast, lunch,dinner}; //it gives an integer constant no to the enum 
    meal m1=lunch;
    cout<<m1;  //hence meal is a datatype
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    return 0;
}