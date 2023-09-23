#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /* const int a=100;
        cout<<"The value of a was: "<<a<<endl;
        a=30; // This will give an error because a is a constant
        cout<<"The value of a is: "<<a<<endl; */

    int a = 10, b = 20, c = 30000;
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout<<"The value of a with setw is: "<<setw(5)<<a<<endl;
    cout<<"The value of a with setw is: "<<setw(5)<<b<<endl;
    cout<<"The value of a with setw is: "<<setw(5)<<c<<endl;
}