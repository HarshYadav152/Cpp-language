#include <iostream>
using namespace std;

int main()
{
    // Assigned an integer on the  heap
    int *dynamicInt = new int; // Assign a value to a dynamically integer
    *dynamicInt = 42;
    // use the allocated memory
    cout << "Dynamically Allocated integer value : " << *dynamicInt << endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1]=20;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr; // delete the memory of the whole block of the memory of the array
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    // delete the memory to avoid memory leak
    delete dynamicInt; // delete the dynamically allocated memory
    return 0;
}