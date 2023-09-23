#include <iostream>
using namespace std;

class complex;

class calculator
{
   public:
   int add(int a, int b)
   {
    return(a+b);
   }

   int sumrealcomplex (complex,complex);
};

class complex
{
    int a,b;
    friend int calculator :: sumrealcomplex (complex,complex);

    public:
    void setdata(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    void print()
    {
        cout<<"Your real number is "<<a<<" + "<<b<<endl;
    }
};

int calculator :: sumrealcomplex (complex o1,complex o2)
{
    return(o1.a+o2.a);
}


int main(){
    complex o1,o2;
    o1.setdata(1,1);
    o2.setdata(2,4);
    calculator c;
    int res= c.sumrealcomplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 "<<res<<endl;


    return 0;
}