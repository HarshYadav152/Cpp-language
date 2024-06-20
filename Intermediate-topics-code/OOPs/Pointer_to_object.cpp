#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void get_data()
    {
        cout << "The value of real part is : " << real << endl;
        cout << "The value of imaginary part is : " << imaginary << endl;
    }
};
int main()
{
    // complex ob;
    // complex *ptr=&ob;
    complex *ptr = new complex; 
    // (*ptr).set_data(1, 4); //is exactly same
    ptr->set_data(1, 4);

    // (*ptr).get_data(); //is as good as
    ptr->get_data();

    // Array of objects
    complex *ptr1 =new complex[3];
    ptr1->set_data(2,8);
    ptr1->get_data();

    return 0;
}