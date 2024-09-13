// #include <iostream>
// #include <string>
// using namespace std;
// class A{
// 	mutable int a;
// public:
// 	A(){
// 		cout<<"A's Constructor called\n";
// 	}
// 	~A(){
// 		cout<<"A's Destructor called\n";
// 	}
// };
// class B{
// 	static A a;
// public:
// 	B(){
// 		cout<<"B's Constructor called\n";
// 	}
// 	~B(){
// 		cout<<"B's Destructor called\n";
// 	}
// };

// A B::a;
// int main(int argc, char const *argv[])
// {
// 	// B b1;
//     return 0;
// }

// #include <iostream>  
// using namespace std;
// class A{
// public:
// 	int a;
// };
// int main(int argc, char const *argv[])
// {
// 	A a1 = {10};
// 	A a2 = a1;
// 	cout<<a1.a<<a2.a;
// 	return 0;
// }

#include <iostream>  
using namespace std;
// class A{
// public:
// 	int a;
// 	A(int a = 0){
// 		this->a = a;
// 	}
// };
// int main(int argc, char const *argv[])
// {
// 	A a1, a2(10);
// 	cout<<a2.a;
// 	return 0;
// }

class A{
public:
	int a;
	A(){
		cout<<"Constructor called";
	}
}a;
int main(int argc, char const *argv[])
{
	return 0;
}