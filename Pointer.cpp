#include <iostream>
using namespace std;

int main(){
    int a=4;
    int*ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;  //Derefrence
    int *p=new int (40);
     cout<<"The value of a is "<<*(p)<<endl;

     int *q=new int[3];
     q[0]=100;
     q[1]=200;
     q[2]=300;
     delete[] q;
     cout<<"The value of a[0] "<<q[0]<<endl;
     cout<<"The value of a[1] "<<q[1]<<endl;
     cout<<"The value of a[2] "<<q[2]<<endl;
    return 0;
}