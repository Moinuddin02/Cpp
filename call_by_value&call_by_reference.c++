#include <iostream>
using namespace std;





 // ******************Call by value*******************
void swap(int *a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
    int x=10,y=20;
    cout<<" The value Before swapping x is " <<x<<" and "<<y<<endl;
    swap(&x,&y);
    cout<<"The value After swapping x is " <<x<<" and "<<y<<endl;
    return 0;
}

//********************Call by using pointer reference******************

// void swapointer(int* a,int* b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }


// int main(){
//     int x=10,y=20;
//     cout<<"The value before swap  is " <<x<<" and "<<y<<endl;
//     swapointer(&x,&y);
//     cout<<"The value after swap is " <<x<<" and "<<y<<endl;
//     return 0;
// }


//********************Call by using reference variable******************

// void swapointer(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }


// int main(){
//     int x=10,y=20;
//     cout<<"The value before swap  is " <<x<<" and "<<y<<endl;
//     swapointer(x,y);
//     cout<<"The value after swap is " <<x<<" and "<<y<<endl;
//     return 0;
// }

