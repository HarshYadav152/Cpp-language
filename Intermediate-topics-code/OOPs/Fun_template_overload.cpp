#include <iostream>
using namespace std;

template <class t>
class harsh
{
public:
    t data;
    harsh(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void harsh<t>::display()
{
    cout << data;
}

void func(int a) // overloaded function 
{
    cout << "I am in first func() " << a << endl;
}

template <class t>
void func(t a) // overloaded function using template 
{
    cout << "I am in templatised func() " << a << endl;
}

template <class t>
void func1(t a)
{
    cout << "I am in templatised func1() " << a << endl;
}

int main()
{
    // harsh<float> h(5.4);
    // harsh<char> h('c');
    // harsh<int> h(5);
    // cout<<h.data<<endl;
    // h.display();

    // func(4); //Exact match takes the highest priority ( jo sabse jayda match karega wo run hoga )( name au r)
    // func1(5); //Exact match takes the highest priority
    return 0;
}