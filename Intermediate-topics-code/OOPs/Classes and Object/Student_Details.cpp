#include<iostream>
#include<string>
#define s 10
using namespace std;

class student
{
    private : int reg_no;
              char name[30];
              int age ;
              char address[30];
    public : void input_data();
             void display();
};
void student::input_data()
{
    // cout<<"Enter the student details :"<<endl;
    cout<<"Enter the Registration Number of the student: "<<endl;
    cin>>reg_no;
    getchar();
    cout<<"Enter the name of the student : "<<endl;
    gets(name);
    cout<<"Enter the age of the student : "<<endl;
    cin>>age;
    getchar();
    cout<<"Enter the address of the student : "<<endl;
    gets(address);
    cout<<endl;
    cout<<"***********Details Entered Successfully***********"<<endl;

}
void student::display()
{
    // cout<<"Student Details"<<endl;
    cout<<"Registration No. : "<<reg_no<<endl;
    cout<<"Name of the student : "<<name<<endl;
    cout<<"Age of the student : "<<age<<endl;
    cout<<"Address of the strudent : "<<address<<endl;
    cout<<"***********Details fetched Successfully***********";
    cout<<endl;

}
int main()
{
    int n;
    student details[s];
    cout<<"Enter the number of student <= "<<s<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the data of student : "<<i+1<<endl;
        details[i].input_data();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Details of the student : "<<i+1<<endl;
        details[i].display();
    }
    return 0;
}