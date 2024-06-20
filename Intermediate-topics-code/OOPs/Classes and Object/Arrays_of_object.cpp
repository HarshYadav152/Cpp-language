#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        cout << "Enter the employee id : " << endl;
        cin >> id;
    }
    void getId()
    {
        salary = 10000;
        cout << "The employee id is : " << id << endl;
    }
};
int main()
{
    Employee fb[4]; // array of objects
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}