#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float> // t1 a template parameter
class harsh
{
    public:
        t1 a;
        t2 b;
        harsh(t1 x,t2 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
        }
};
int main()
{
    harsh <>obj(41,5.1); // default datatype value of t1 and t2
    obj.display();
    cout<<endl;
    harsh <float,int>obj2(4.1,5); //specify value of t1 and t2 (type of datatype )
    obj2.display();
    return 0;
}