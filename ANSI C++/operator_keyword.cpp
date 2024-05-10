#include<iostream>
using namespace std;

/*
operator        operator keybord          Description 
    &&             and                        logical AND 
    ||             or                         logical OR  
    !              not                        logical NOT 
    !=             not_eq                     inequility  
    &              bitand                     bitwise AND 
    |              bitor                      bitwise inclusive OR
    ^              xor                        bitwise Exclusive OR
    ~              compl                      bitwise complement
    &=             and_eq                     bitwise AND assignment
    |=             or_eq                      bitwise includsive OR assignment
    ^=             xor_eq                     bitwise exclusive OR assignment

we can use these operator insread of logical operator

*/
int main()
{
    int x = 10,y = 29;

    int c = x > y and y not_eq 30;  // it actually same as below 
    // int c = x > y && y != 30;
    cout<<c;
    return 0;
}