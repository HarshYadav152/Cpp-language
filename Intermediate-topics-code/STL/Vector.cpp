#include<iostream>
#include<vector> 

using namespace std;
template <typename t> // ye bhi kar sakte hai
void display(vector<t> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{  
    // ways to create vector
    vector<int> vec1; // Zero length integer vector 
    // display(vec1);
    vector<char> vec2(4); //4 element character vector
    vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); // 4 element character vector from vec2 
    // display(vec3);
    vector<int> vec4(6,5); // 6 element vector of 5's (it create 6 element vector with each element is 5 )
    display(vec4); 
    cout<<vec4.size();
    // int element,size;
    // cout<<"Enter the size of the vector ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element in the vector : ";
    //     cin>>element;
    //     vec1.push_back(element); // push element in the vector (add element at the end)
    // } 
    // // vec1.pop_back(); // pop a element from the end of the vector
    // display(vec1);
    // vector<int>::iterator iter=vec1.begin(); // it create a pointer iter which points the first position of the vector 
    // vec1.insert(iter+1,3,100); // iter+1 points th esecont element  100 insert at the first position and 3 is the how many time repeat the element 
    // display(vec1);
    
    return 0;
}