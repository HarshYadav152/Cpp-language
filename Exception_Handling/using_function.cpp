#include<iostream>
using namespace std;

void test(int *ptr,int x,char y){
    // if (ptr == NULL)
    // {
    //     throw ptr;
    // }
    if (x == 0)
    {
        throw x;
    }
    if (y == 'a')
    {
        throw y;
    }
}
int main()
{
    try{
        test(NULL,0,'a');
    }

    catch(int x){
        cout<<"exception caught for 0"<<endl;
    }
    catch(char y){
        cout<<"exception caught for character";
    }
    // catch(...){
    //     cout<<"It will caught all exception "<<endl;
    // }
    return 0;
}