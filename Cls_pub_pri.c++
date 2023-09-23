#include<iostream>
using namespace std;

class Employee          // Class Declaration
{
     private:
          int a,b,c;

     public:
          int d,e;

          void setdata(int a1,int b1,int c1);
          void getdata()
          {
            cout<<"The value of a is " <<a<<endl;
            cout<<"The value of b is " << b<<endl;
            cout<<"The value of c is " << c<<endl;
            cout<<"The value of d is " << d<<endl;
            cout<<"The value of e is " << e<<endl;
          }
};
 void Employee :: setdata(int d1,int e1,int f1)
 {
    a=d1;
    b=e1;
    c=f1;
 }


int main()
{
    Employee moinuddin;          // Object
    moinuddin.d=100;
    moinuddin.e=200;
    moinuddin.setdata(400,500,600);
    moinuddin.getdata();

    return 0;

}
