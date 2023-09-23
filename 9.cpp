#include <iostream>
using namespace std;

class complex
{
   int a,b;
   public:

   // Constructor is the special funtion with the name of class.
   // It is automatically invoked whenever an object is created.
   complex(void);  // Constructor declaration

   void print()
   {
    cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
   }


};

complex :: complex(void)  // This is default constructor as it takes no parameters.
{
    a=10;
    b=20;
}

int main(){
    complex c;
    c.print();
    return 0;
}