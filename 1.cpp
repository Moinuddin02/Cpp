#include <iostream>
using namespace std;

class moin
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1,int b1,int c1);
    void getdata()
    {
      cout<<"The value of a is "<<a<<endl;
      cout<<"The value of b is "<<b<<endl;
      cout<<"The value of c is "<<c<<endl;
      cout<<"The value of d is "<<d<<endl;
      cout<<"The value of e is "<<e<<endl;
    }
};

void moin :: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
   moin moinuddin;
   moinuddin.d=100;
   moinuddin.e=200;
   moinuddin.setdata(300,400,500);
   moinuddin.getdata();
   return 0;
}