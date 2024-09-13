#include <iostream>
using namespace std;

// class harsh
// {
// public:
//     virtual harsh() = 0;
// };
class yadav
{
public:
    virtual void PS() = 0;
};
class Priyanshi : public yadav
{
public:
    void PS()
    {
        cout << "Harsh Yadav";
    }
} int main()
{
    harsh ob;
    yadav obj;
    return 0;
}