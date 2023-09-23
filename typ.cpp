#include <iostream>
using namespace std;

int c=90;

int main()
{  
    // Build in data types

    // int a, b, c;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;

    // cout << "Enter the value of b: " << endl;
    // cin >> b;

    // c=a+b;

    // cout<<"The value of c is: "<<::c<<endl;



    //**********Typecasting*********


    // float a=10.13;
    // cout<<"The value of a is "<<int(a);


    //**************Reference Variable**********


    // int x=100;
    // int &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //********Float,Double,Long double Literals*********

    float d=34.45;
    cout<<"The size of 34.45 is "<<sizeof(34.45)<<endl;
    cout<<"The size of 34.45 is "<<sizeof(34.45f)<<endl;
    cout<<"The size of 34.45 is "<<sizeof(34.45F)<<endl;
    cout<<"The size of 34.45 is "<<sizeof(34.45l)<<endl;
    cout<<"The size of 34.45 is "<<sizeof(34.45L)<<endl;

    return 0;
    
}