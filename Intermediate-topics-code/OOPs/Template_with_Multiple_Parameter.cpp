#include<iostream>
using namespace std;


/*
template<class t1,class t2>
class class_name
{
    body of the class
}
*/
// CLASS TEMPLATE WITH MULTIPLE PARAMETER (ONE , TWO AND MORE THEN TWO) comma seperated
template<class t1,class t2> // t1 t2 ko baad mai specify karunga jab object declare karunga   
class myclass
{
    public :
        t1 data1;
        t2 data2;
        myclass(t1 a ,t2 b){
            data1=a;
            data2=b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2;
        }
};
int main()
{
    myclass <int , char>obj(1,'c');
    obj.display();
    return 0;
}