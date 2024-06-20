#include <iostream>
#include <string>
using namespace std;

class CWH{
protected:
    string title;
    float rating;
public:
    CWH(string s, float r){
        title=s;
        rating=r;
    }
    virtual void display(){}
};
class CWHvideo : public CWH
{
    int videoLength;
public:
    CWHvideo(string s, float r, int vL) : CWH(s, r){
        videoLength = vL;
    }
    void display(){
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars " << endl;
        cout << "Length of the video is : " << videoLength << " minutes " << endl;
    }
};

class CWHtext : public CWH{
    int words;

public:
    CWHtext(string s, float r, int w) : CWH(s, r){
        words = w;
    }
    void display(){
        cout << "This is an amazing text with title " << title << endl;
        cout << "Ratings of text : " << rating << " out of 5 stars " << endl;
        cout << "No. of words in this text : " << words << " words" << endl;
    }
};

int main(){
    string title;
    float rating;
    int words,vl,wc;

    // for Code With Harry Video
    title="This is DSA";
    vl=4;
    rating=3.21;

    CWHvideo video(title,rating,vl);
    video.display();

    // for Code With Harry text
    title="This is DSA Notes";
    wc=1;
    rating=4;

    CWHtext text(title,rating,wc);
    text.display();

    CWH* tutorial[2];
    tutorial[0]=&video;
    tutorial[1]=&text;
    tutorial[0]->display();
    tutorial[1]->display();
    return 0;
}

// Rules of the virtual function
// 1. They can't be static
// 2. They are accessed by the object pointer
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used 
// 5. If a virtual function is defined in a base class, there is no necessety  of redefining it in the derived class