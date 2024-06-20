#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    // ofstream out; // out is the object of the class ofstream and open() is the member function 
    // out.open("sampleB.txt");
    // out<<"This is me"; // this is write into the file 
    // out<<"This is me";
    // out.close(); //it is good practice to close a file 

    ifstream in;
    string st,st1;
    in.open("sampleB.txt");
    // in>>st>>st1;
    // cout<<st<<st1;

    while (in.eof()==0)
    {
        getline(in,st); // read line by line 
        cout<<st<<endl;
    }
    

    in.close();
    return 0;
}