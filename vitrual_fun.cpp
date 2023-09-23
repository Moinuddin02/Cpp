#include <iostream>
#include<cstring>
using namespace std;

class Moinuddin
{
   protected:
   string title;
   float rating;
   public:
   Moinuddin(string s,float r)
   {
    title=s;
    rating=r;
   }

   virtual void display(){}
};

class Moinuddin_video : public Moinuddin
{
    
    float video_length;
    public:
    Moinuddin_video(string s ,float r, float vl):Moinuddin(s,r)
    {
        video_length=vl;
    }

    void display()
    {
      cout<<"This is an video with title: "<<title<<endl;
      cout<<"Rating: "<<rating<<"Out of 5 stars"<<endl;
      cout<<"Length of this video is: "<<video_length<<"minutes"<<endl;
    }

};

class Moinuddin_Text : public Moinuddin
{
    
    int words;
    public:
    Moinuddin_Text(string s ,float r, int wc):Moinuddin(s,r)
    {
        words=wc;
    }

    void display()
    {
      cout<<"This is an text with title: "<<title<<endl;
      cout<<"Rating text : "<<rating<<" Out of 5 stars "<<endl;
      cout<<"Number of words in text is: "<<words<<" minutes "<<endl;
    }

};


int main(){
    string title;
    float rating,video_length;
    int words;
    // For Video

    title="c++";
    rating=99.9;
    video_length=80.2;

    // For Text

    Moinuddin_video m1(title,video_length,rating);
    // m1.display();

    title="c++ notes";
    rating=99.9;
    words=490;
    Moinuddin_Text m2(title,words,rating);
    // m2.display();
    Moinuddin* ptr[2];
    ptr[0] = &m1;
    ptr[1]= &m2;

    ptr[0]->display();
    ptr[1]->display();
    
    return 0;
}