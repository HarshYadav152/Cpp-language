#include <iostream>
#include<math.h>
using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int x, int y) // parameterized constructor
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << a << "+" << b << "i" << endl;
//     }
// };
// int main()
// {
//     complex ob(2, 4); // Implicit call
//     ob.display();
//     complex ob1 = complex(3, 6); // explicit call
//     ob1.display();
//     return 0;
// }

class point
{
    int x, y;

public:
    point(){}
    // point(){cout<<"The distance b/t these points is : ";}
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    void distance(point p,point q)
    {
        cout<<"The distance is = "<<sqrt(pow(((q.x)-(p.x)),2)+pow(((q.y)-(p.y)),2))<<" unit";
    }

};
int main()
{
    point object;
    point ob(1,4);
    ob.display();
    point ob1(3,4);
    ob1.display();

    point c;
    c.distance(ob,ob1);

    return 0;
}