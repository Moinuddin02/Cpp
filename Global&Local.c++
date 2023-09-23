#include<iostream>
using namespace std;

int moinuddin=200;   // Global Variable
void sum()
{
    cout<<moinuddin;
}


int main()
{
    int moinuddin=300;   // Local Variable
    sum();
    cout<<"\nThe value of moinuddin is: "<<moinuddin;
}
