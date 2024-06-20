#include <iostream>
using namespace std;

class shop
{
private:
    int itemId[10], itemPrice[10], counter=0;

public:
    // void initCounter(void)
    // {
    //     counter = 0;
    // }
    void setPrice(void);
    void displayPrice();
};
void shop::setPrice()
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop object;
    // object.initCount er();
    int n;
    cout<<"Enter how many items you add : "<<endl;
    cin>>n; 
    for (int i = 0; i < n; i++)
    {
    object.setPrice();
        
    }
    
    // object.setPrice();
    object.displayPrice();

    return 0;
}