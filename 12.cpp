#include <iostream>
using namespace std;

class number
{
   
   int a;
   public:
   number(){
    a=1;
   }
   number(int num)
   {
    a=num;
   }
   number(number &obj)
   {
    cout<<"Copy constructor"<<endl;
    a=obj.a;
   }

   void display()
   {
    cout<<"The number for this object is "<<a<<endl;
   }
};

int main(){
    number x,y,z;
    x.display();
    y.display();
    z.display();
    number z1(y);
    z1.display();

    number z2 =z;
    z2.display();
    return 0;
}