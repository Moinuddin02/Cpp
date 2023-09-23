#include <iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no=a;
    }
    void print_number(void)
    {
        cout<<"Your roll no is: "<<roll_no<<endl;
    }

};

class Test: virtual public student
{
   protected:
   float maths,physics;
   public:
   void set_marks(float m1,float m2)
   {
    maths=m1;
    physics=m2;
   }
   void print_marks(void)
   {
    cout<<"Your result is here: "<<endl
        <<"Maths "<<maths<<endl
        << "Physics"<<physics<<endl;
        
   }

};

class score : virtual public student
{
  protected:
  float score;
  public:
  void set_score(float sc)
  {
    score=sc;
  }

  void print_score(void)
  {
    cout<<"Your score is "<<score<<endl;
  }
};

class result: public Test, public score
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;

    }
}; 

int main(){
    result r;
    r.set_number(61);
    r.set_marks(88.0,90.2);
    r.set_score(80);
    r.display();
    return 0;
}