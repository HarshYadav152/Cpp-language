#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Harsh  ";
    string s2("Yadav");
    string s3 = "";

    // ********** Swaping of string **********

    cout<<"Before swapping"<<endl;
    cout<<"s1 : "<<s1<<endl;
    cout<<"s2 : "<<s2<<endl;
    s1.swap(s2); // this will swap string s1 and s2 
    cout<<"After swapping"<<endl;
    cout<<"s1 : "<<s1<<endl;
    cout<<"s2 : "<<s2<<endl;

    // ************ Characteristic of the string *********

    // cout<<s1.size()<<endl; // give the size of the string
    // cout<<s3.length()<<endl; // give the length of the string
    // cout<<s1.capacity()<<endl; // give the capacity
    // cout<<s1.max_size()<<endl; // give the maximum size
    // cout<<(s3.empty()?"Yes":"No")<<endl; //string is empty then return 1 and give yes

    // // Original String

    // cout<<"Original String : "<<endl;
    // cout<<"s1 : "<<s1<<endl;
    // cout<<"s2 : "<<s2<<endl;

    // // Inserting a string to another

    // cout<<"Place s2 inside s1 : "<<endl;
    // s1.insert(5,s2);
    // cout<<"New s1 is : "<<s1<<endl;

    // // Removing character from a string

    // cout<<"Remove 5 character from s1 : "<<endl;
    // s1.erase(5,10);
    // cout<<"After removing the 5 to 10 character : "<<s1<<endl;

    // // Replacing character from the string

    // cout<<"Repalce middle character from the new s1 string : "<<endl;
    // s2.replace(1,3,s1);
    // cout<<"Replaced string s2 : "<<s2<<endl;

    // // Appending the character to the string
    // cout<<"Appending chararcter : "<<endl;
    // s2.append("yadav");
    // cout<<"String after appending : "<<s2<<endl;

    // ********** Relational Operations ************

    // if(s1 == s2)
    //     cout<<"s1 and s2 both are equal";
    // if(s1 > s2)
    //     cout << "s1 > s2 (string s1 is greater that s2)";
    // else
    //     cout << "s2 > s1 (string s2 is greater that s1)";


    // int x = s1.compare(s2);

    // if (x == 0){
    //     cout << x << endl;
    //     cout << "s1 == s2 (both string is equal)";
    // }
    // else if (x > 0){
    //     cout << x << endl;
    //     cout << "s1 > s2 (string s1 is greater that s2)";
    // }
    // else{
    //     cout << x << endl;
    //     cout << "s2 > s1 (string s2 is greater than s1)";
    // }

    // **********Acessing character of the string ***************
    // for (int i = 0; i < s1.length(); i++){
    //     cout<<s1.at(i); // accessing each charater of the string using function at()
    // }
    // cout<<endl;
    // for (int i = 0; i < s1.length(); i++){
    //     cout<<s1[i]; // accessing each charater of the string
    // }
    // cout<<endl;
    // // s2 = "Yadav"
    // // int x = s2.find("d");
    // cout<<"find the specified substring : "<<s2.find("Y"); // Y at 0 index (let say)

    // cout<<endl;
    // // s1 = "Harsh"
    // cout<<s1.find_first_of("a");
    
    // cout<<endl;
    
    // string s4 = "harsh";
    // cout<<s4.find_first_of("h"); // find the first occurence of specfied character ( gives position )

    // cout<<endl;
    // cout<<s4.find_last_of("h"); //for finding the location of the specified character which comes in the last in the string 

    // cout<<endl;

    // // s4 = "harsh"
    // cout<<s4.substr(1,4);  // give the substring from the specified string harsh 1 to 4 (arsh)

    return 0;
}