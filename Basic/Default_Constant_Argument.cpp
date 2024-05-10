#include<iostream>
using namespace std;

float moneyINTEREST(int cMoney,float factor=1.02) //always put default value int the right in the function definition after all the argument 
{
    return cMoney*factor;
}
int sum(const int* p)  
{
    //thus p is a constant it not be change after any operation 
}
int main()
{
    int money=10000;
    cout<<"for normal person :"<<moneyINTEREST(money)<<endl;
    cout<<"for VIP person :"<<moneyINTEREST(money,1.5);
    return 0;


}