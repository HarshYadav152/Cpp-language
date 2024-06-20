#include<iostream>
using namespace std;

int main()
{
    wchar_t w = L'h';
    cout<<"wide character value of h is  : "<<w<<endl;

    // array of wchar_t ( wide character )
    wchar_t name[] = L"Harsh Yadav";
    wcout<<name<<endl; // we have to use wcout instead of cout for wide character 
    // if we use cout it will give garbage value 
    return 0;
}