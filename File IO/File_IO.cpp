#include<iostream>
#include<fstream>

// The useful classe for working wit files in c++ are :
// 1. fstreambase
// 2. ifstream --> derived from fstreambase 
// 3. ofstream --> derived from fstreambase 

// for use of file we have to open file 
// 1. using the construtor 
// 2. using the member function open() of the class
using namespace std;

int main()
{
    // opening file using constructor
    string st="Harsh";
    string st2;
    ofstream harsh("sampletxt.txt"); // for write in the file 
    harsh<<st; // ofstream is a class harsh is a object we can change it 

    // opening file using constructor and read it
    // ifstream in("sampleB.txt");
    // getline(in,st2); // read whole line from the file if we want to read multiple line we have to call to getline() multiple time  
    // in>>st2; // read a single word
    cout<<st2;
    return 0;


}