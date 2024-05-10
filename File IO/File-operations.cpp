#include <iostream>
#include <fstream> // header file for use of file
using namespace std;

int main()
{
    // ofstream obj; // ofsteream class object obj is used foe creating and writing to the file

    // obj.open("PS.txt"); // it will ready to write in the file or if the file doesnot exis it will create a new one (PS.txt)

    // we simply use ofstream object to write in to the file similar as cout which is used to write in the terminal
    // obj<<"Ps"; // it will overwrite the existing content
    // obj<<"Ps"<<endl;
    // obj<<"Ps"<<endl;

    // ofstream obj("PS.txt",ios::app);// it is like as append mode
    // new content we want to write into the file will not overwrite the previous content of the file

    // obj<<"Harsh";

    // if (obj.is_open()){
    //     cout<<"File opened successfully ";
    // }
    // else{
    //     cout<<"Error in opening the file ";
    // }
    // if (obj){
    //     cout<<"Success";
    // }
    // if (obj.fail()){
    //     cout<<"error";
    // }

    // string line;
    // ifstream harsh("PS.txt"); // open a text for reading

    // while (!harsh.eof())
    // {
    //     getline(harsh,line); // store the current line of the file in to the line variable
    //     cout<<line<<endl; // print the line variable
    // }
    // harsh.eof() return true for which the file pointer reach the end else false
    // so we read the content of the file using the loop line by line until the all lines are read

    // obj.close(); //it is a good practice to close a opened file to use it in another program

    // fstream

    string line;
    fstream obj;
    obj.open("sampleB.txt", ios::in);
    while (!obj.eof())
    {
        getline(obj, line);
        cout << line << endl;
    }

    return 0;
}