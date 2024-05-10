#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // static_cast
    int m;
    double x = static_cast<double>(m);
    char ch = static_cast<char>(m);

    // const_cast
    const int* a; // here a is a constant int* pointer
    int* y = const_cast<int*>(a); // here i typecast constant integer pointer to normal

    // reinterpret_cast

    int c;
    float d;

    int* intptr;
    float* floatptr;

    intptr = reinterpret_cast<int*>(c);
    floatptr = reinterpret_cast<float*>(d);

    // dynamic_cast

    int e;
    char* f = dynamic_cast<void*>(e);

    // typeid operator is used to determine what the type of the object passed

    int p ;
    cout<<typeid(p).name(); //it will print i for int
    return 0;
}