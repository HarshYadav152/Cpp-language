#include <iostream>
using namespace std;

class student
{
protected:
    int roll_Number;

public:
    void set_Number(int r)
    {
        roll_Number = r;
    }
    void get_Number()
    {
        cout << "The roll no. is " << roll_Number << endl;
    }
};

class exams : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "the marks obtained in physics are " <<physics<< endl;
        cout << "the marks obtained in maths are " <<maths<< endl;
    }
};

class result : public exams
{
    float percentage;

public:
    void display()
    {
        get_Number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2.0<<"%";
    }
}; 
int main()
{
    result harsh;
    harsh.set_Number(101);
    harsh.set_marks(95,98);
    harsh.display();
/*
    If we are inheriting B from A and C from B [ A--->B--->C ] 
    A is the base class for B and B is the base class for C
    ABC [ A--->B--->C ] is called Inheritane Path
*/
    return 0;
}