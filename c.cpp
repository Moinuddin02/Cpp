#include <iostream>
using namespace std;

class Base1
{
    int data1;
    public:
    Base1(int i)
    {
        data1=i;
        cout<<"Base1 class constructor called "<<endl;
    }
    void print_data1(void)
    {
        cout<<"The value of data 1 is: "<<data1<<endl;
    }
};

class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2=i;
        cout<<"Base2 class constructor called "<<endl;
    }
    void print_data2(void)
    {
        cout<<"The value of data 2 is: "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2
{
     int derived1,derived2;
     public:
     Derived(int a,int b,int c,int d):Base1(a),Base2(b)
     {
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called "<<endl;
     }

     void printdata(void)
     {
        cout<<"The value of derived 1 is "<<derived1<<endl;
        cout<<"The value of derived 2 is "<<derived2<<endl;
     }
};

int main(){
    Derived moinuddin(1,2,3,4);
    moinuddin.print_data1();
    moinuddin.print_data2();
    moinuddin.printdata();

    
    return 0;
}