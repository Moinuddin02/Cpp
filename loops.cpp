#include<iostream>
using namespace std;

int main()
{
     /*Basically loops are divided into 3 main parts
        1.For loop
        2.While loop
        3.Do while loop
     */ 

    //********For loop**********

    // Multiplication using for loop
    int a;
    cout<<"Enter a number which you want to multiply"<<endl;
    cin>>a;

    for (int i = 1; i <=10; i++)
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<" "<<endl;
    }
    

    // ********While loop********


    // int a,i=1;
    // cout<<"Enter a number which you want to multiply :)"<<endl;
    // cin>>a;
    // while (i<=20)
    // {
    //     cout<<a<<" x "<<i<<" = "<<a*i<<" "<<endl;
    //     i++;
    // }
    


   
    //*******Do while loop**********

    // int a,i=1;
    // cout<<"Enter a number which you want to multiply"<<endl;
    // cin>>a;
    // do
    // {
    //    cout<<a<<" x "<<i<<" = "<<a*i<<" "<<endl;
    //    i++;
    // } while (i<=10);
    
    return 0;
}