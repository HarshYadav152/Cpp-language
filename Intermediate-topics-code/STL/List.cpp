#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int> ::iterator it;
    for (it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    // list<int>::iterator iter;
    // iter=list1.begin();
    // cout<<*iter;
    // cout<<endl;
    display(list1);

    list<int> list2(5); //empty list of size 5
    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=12;
    iter++;
    *iter=34;
    iter++;
    *iter=24;
    iter++;
    *iter=24;
    iter++;
    *iter=70;
    iter++;
    // display(list2);
    // list2.pop_back(); // delete an element from the list from the end
    cout<<endl;
    // list2.pop_front(); //delete elemeent from the beginning of the list
    // list2.remove(24); // delete element specify in the remove(element)
    // if there are two same element then it will remove both of them  

    //Sorting the list 
    list2.sort(); //it will sort the list in ascending or descending order 
    display(list2);

    cout<<endl;
    cout<<"List 1 after merging : "<<endl;
    list1.merge(list2);
    display(list1);

    cout<<endl;
    cout<<"Reverse the list : "<<endl;
    //Reversing the list 
    list1.reverse();
    display(list1);
    return 0;
}