#include<iostream>
using namespace std;

template <class T> // kya data type use karna hai ye mai baad mai baat dunga 
// template ki madad se maine specify kardiya ki konsa datatype use karraha hoo
class vector
{
    public:
        T * arr;
        int size;
        vector (int n)
        {
            size=n;
            arr=new T[size];
        }
        T dotProduct(vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i]+v.arr[i];
            }
            return d;            
        }
};
int main()
{
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=1;

    // vector v2(3);
    // v2.arr[0]=4;
    // v2.arr[1]=0;
    // v2.arr[2]=8;

    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;

    // for float values 
    // vector v1(3);
    // v1.arr[0]=4.2;
    // v1.arr[1]=0.3;
    // v1.arr[2]=5.1;

    // vector v2(3);
    // v2.arr[0]=2.4;
    // v2.arr[1]=1.0;
    // v2.arr[2]=0.8; 

    // int a = v1.dotProduct(v2); // it will give an incorrect value so we use template 
    // cout<<a<<endl;

    // using template
    
    vector <float>v1(3);
    v1.arr[0]=4.2;
    v1.arr[1]=0.3;
    v1.arr[2]=5.1;

    vector <float>v2(3);
    v2.arr[0]=2.4;
    v2.arr[1]=1.0;
    v2.arr[2]=0.8; 

    float a = v1.dotProduct(v2); // now it will give the right answer
    cout<<a<<endl;

    return 0;
}