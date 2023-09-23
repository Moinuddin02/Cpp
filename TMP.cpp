#include <iostream>
using namespace std;


// template<class T>
// class A
// {
//    public:
//    T num1=100;
//    T num2=200;
//    void add()
//    {
//     cout<<"Addtion of num 1 and num 2 "<<num1+num2<<endl;
//    }
// };

// int main(){
//     A<int> obj;
//     obj.add();
//     return 0;
// }

template<class T1, class T2>
class A
{
   
   T1 a;
   T2 b;
   public:
   
   A(T1 x,T2 y)
   {
    a=x;
    b=y;
   }

   void display()
   {
    cout<<"value of a and b are "<<a<<","<<b<<endl;
   }
};

int main()
{
    A<char,float> obj('m',20.29);
    obj.display();


    return 0;
}