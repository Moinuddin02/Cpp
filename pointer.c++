#include <iostream>
using namespace std;

int main(){
    int x=200;
    int *ptr;
    ptr = &x;
    cout<<"The address of x is "<<&x<<endl;
    cout<<"The address of x is "<<ptr<<endl;  


    //  pointer to pointer

    int **c;
    c = &ptr;
    cout<<"The address of ptr is "<<&ptr<<endl;
    cout<<"The address of ptr is "<<c<<endl;


    return 0;
}