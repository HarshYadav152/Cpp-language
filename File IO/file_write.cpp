#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connection our file with hout stream 
    ofstream hout("sampleB.txt");

    // Creating a name string and filling it with the string variable entered by the user 
    cout<<"Enter your name : ";
    string name;
    cin>>name;//it only take single word at a time

    hout<<"My name is " + name;
    hout.close(); // close file 

    // ifstream hin("sampleB.txt");
    // string st2;
    // getline(hin,st2);
    // cout<<st2;

    // hin.close();
    return 0;
}