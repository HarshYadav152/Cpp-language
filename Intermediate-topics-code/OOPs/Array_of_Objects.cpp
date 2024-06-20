#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is : " << id << endl;
        cout << "Price of items : " << price << endl;
    }
};
int main()
{
    int size = 3;
    // int* ptr=&size;
    //  int *ptr=new int [23];

    // 1. General Stor Item
    // 2. Veggies Item
    // 3. hard ware item
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item number : " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}