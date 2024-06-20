#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    //Function Object : Function wrapped in a class so that it available like an object
    int arr[]={1,9,5,2,6,4};
    // sort(arr,arr+6); // it will sort the element of the array b/w arr to arr+6 (in increasing order)
    sort(arr,arr+6,greater<int>()); //it is an function object now it will be sort no.s in descending order
    // greater<int>() it is a function object (Functors)
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}