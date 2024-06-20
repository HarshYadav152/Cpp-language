#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, years;
    float interestRate, returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r) // r can be like 0.04
    {
        principal = p;
        years = y;
        interestRate = r;

        returnValue = principal;
        for (int i = 0; i < years; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }
    BankDeposit(int p, int y, int r) // r can be like 4
    {
        principal = p;
        years = y;
        interestRate = float(r) / 100;
        returnValue = principal;
        for (int i = 0; i < years; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }    
    void show()
    {
        cout << endl
             << "Principal amount was " << principal << endl
             << "Return value after year " << years << " is " << returnValue << endl;
    }
};
int main()
{ 
    BankDeposit bd,bd1,bd2; 
    int p,y,R;
    float r;
    cout<<"Enter the value of p y and r "<<endl;
    cin>>p>>y>>r;
    bd=BankDeposit(p,y,r);
    bd.show();
    cout<<"Enter the value of p y and r "<<endl;
    cin>>p>>y>>R;
    bd1=BankDeposit(p,y,R);
    bd1.show();
    return 0;
}