// #include <iostream>
// #include <string>
// using namespace std;

// // Abstract base class ka object nahi bana sakte
// // kam se kam ek pure virtual function hota hai
// class CWH{
// protected:
//     string title;
//     float rating;
// public:
//     CWH(string s, float r){
//         title=s;
//         rating=r;
//     }
//     virtual void display()=0; // Do nothing function --> Pure Virtual Function
//     // ab hamein display() derive (re-define) karna padega derived class nahi toh ye error dega
//     // thus we have to define display() in all the  derived class ...
//     // this is used to make a class Abstract
// };
// class CWHvideo : public CWH
// {
//     int videoLength;
// public:
//     CWHvideo(string s, float r, int vL) : CWH(s, r){
//         videoLength = vL;
//     }
//     void display(){
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings : " << rating << " out of 5 stars " << endl;
//         cout << "Length of the video is : " << videoLength << " minutes " << endl;
//     }
// };

// class CWHtext : public CWH{
//     int words;

// public:
//     CWHtext(string s, float r, int w) : CWH(s, r){
//         words = w;
//     }
//     void display(){
//         cout << "This is an amazing text with title " << title << endl;
//         cout << "Ratings of text : " << rating << " out of 5 stars " << endl;
//         cout << "No. of words in this text : " << words << " words" << endl;
//     }
// };

// int main(){
//     string title;
//     float rating;
//     int words,vl,wc;

//     // for Code With Harry Video
//     title="This is DSA";
//     vl=4;
//     rating=3.21;

//     CWHvideo video(title,rating,vl);
//     // video.display();

//     // for Code With Harry text
//     title="This is DSA Notes";
//     wc=1;
//     rating=4;

//     CWHtext text(title,rating,wc);
//     // text.display();

//     CWH* tutorial[2];
//     tutorial[0]=&video;
//     tutorial[1]=&text;
//     tutorial[0]->display();
//     tutorial[1]->display(); // for this virtual function run to avoid this we have to make virtual function to pure virtual function
//     return 0;
// }

// Another example Abstract Base Class and Virtual Base Class
#include <iostream>
using namespace std;

class shape  // now shape class is a abstract base class 
{
public:
    virtual float area()=0; // pure virtual function 
};
class circle : public shape
{
private:
    float radius;

public:
    float area(float r)
    {
        radius=r
        return (3.14 * radius * radius);
    }
};
class square : public shape
{
private:
    float side;

public:
    float area(float s)
    {
        side=s;
        return (side * side);
    }
};
int main()
{
    circle obj1;
    square obj2;

    shape* ptr[2];
    ptr[0]=&obj1;
    ptr[1]=&obj2;
    cout<<"Area of circle is : "<<*(ptr).area(4.0);
    cout<<"Area of square is : "<<*(ptr).area(4.0);
    return 0;
}
