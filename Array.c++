#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    marks[0] = 22;
    marks[1] = 44;
    marks[2] = 66;
    marks[3] = 88;
    marks[4] = 56;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    //cout << endl;
    // Another method also to initialised the array

    // int moin[5] = {100, 200, 300, 400, 500};
    // cout << moin[0] << endl;
    // cout << moin[1] << endl;
    // cout << moin[2] << endl;
    // cout << moin[3] << endl;
    // cout << moin[4] << endl;

    // If we want to change the array value we can write like this
   // cout << endl;

    //moin[0] = 1000;   // Changed Value
    // cout << moin[0] << endl;
    // cout << moin[1] << endl;
    // cout << moin[2] << endl;
    // cout << moin[3] << endl;
    // cout << moin[4] << endl;
  
    //Using For loop for accessing an array

    /* for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }*/

   
    // Using while loop for accessing an array
    /* int i=0;
    while (i<4)
    {
        cout<<"The value of moin "<<i<<" is "<<moin[i]<<endl;
        i++;
    }*/
    

    // Using do while for accessing an array
    /* int i=0;
    do
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);*/

    // Array and pointer

    int *ptr;
    ptr=marks;
    cout<<"The value of marks[0] is "<<*ptr<<endl;
    cout<<"The value of marks[1] is "<<*(ptr+1)<<endl;
    cout<<"The value of marks[2] is "<<*(ptr+2)<<endl;
    cout<<"The value of marks[3] is "<<*(ptr+3)<<endl;
    cout<<"The value of marks[4] is "<<*(ptr+4)<<endl;

    
    
    return 0;
}