#include<iostream>
using namespace std;

int main(){
    {
        int m = 1;
        {
            int n = 2;
            cout<<m<<" "<<n<<endl;
        }
        cout<<m<<" "<<n<<endl;
    }
    return 0;
}