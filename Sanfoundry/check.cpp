#include <iostream>
using namespace std;

int main()
{
    // int a = 100;
    // double b = 3.14;
    // cout << a;
    // cout << endl;
    // cout << b << endl << a * b;
    // endl (cout);

    // int p;
    // bool a = true;
    // bool b = false;
    // int x = 10;
    // int y = 5;
    // p = ((x | y) + (a + b));
    // cout << p;

    //  register int i = 1;
    // int *ptr = &i;
    // cout << *ptr;

    // int cin;
    // cin >> cin;
    // cout << "cin: " << cin;

    //  int a = 5;
    //     float b;
    //     cout << sizeof(a + b);
    //     cout << a;

    int a = 5;
	auto check = [=]() 
        {
		a = 10;
	};
	check();
	cout<<"Value of a: "<<a<<endl;
    return 0;

}