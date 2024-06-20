#include <iostream>
using namespace std;

// float Average(int a,int b){
//     float avg=(a+b)/2.0;
//     return (avg);
// }

// float Average1(int a,float b){
//     float avg=(a+b)/2.0;
//     return (avg);
// }

// function template
template <class t1, class t2>
float Average(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return (avg);
}

template <typename T>
void swapping(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = Average(4.2, 3.5); // here it will take entered no. datatype
    cout << a << endl;

    int x = 1, y = 3;
    swapping(x, y);
    cout << x << endl
         << y;
    return 0;
}