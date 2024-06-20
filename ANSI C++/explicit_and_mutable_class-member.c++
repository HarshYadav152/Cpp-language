#include <iostream>
using namespace std;

class testing{
    mutable int m; // m declared as the mutable thus it can be change by const member function change()
    // we can't use static and const along with mutable
public:
    // we can made constructor explicit using explicit keyword
    explicit testing(int i) // we can avoid implicit conversion as these may lead to unexcepted results 
    {
        m = i;
    }
    void change() const{
        m = m + 10;
    }
    int display() const{
        return m;
    }
}; 
int main()
{
    // making the constructor explicit this is illegal
    // testing ob = 11; // we can't directly give value using = operator
    const testing object(11); // this is allowed using explicit constructor
    cout<<"testing contains : "<<object.display()<<endl;

    object.change();     
    cout<<"testing now contains : "<<object.display()<<endl;
    return 0;
}