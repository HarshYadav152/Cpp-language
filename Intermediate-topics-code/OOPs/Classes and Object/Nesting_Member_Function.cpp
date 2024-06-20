#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // bydefault it is private
    void chk_bin();

public:
    void read();
    // void chk_bin();
    void ones_comp();
    void display();
};
void binary::read()
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary::ones_comp()
{
    chk_bin(); //nesting function 
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display()
{
    cout <<"Display binary number : "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_comp();
    b.display();
    return 0;
}